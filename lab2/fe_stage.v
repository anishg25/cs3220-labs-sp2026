 `include "define.vh" 


module FE_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0] FE_latch_out
);

  `UNUSED_VAR (from_MEM_to_FE)
  `UNUSED_VAR (from_WB_to_FE)

  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  /*
  always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end
  */

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 
  wire valid_FE;
  assign valid_FE = !(reset || br_mispred_AGEX || stall_pipe_FE) && |inst_FE;

  `UNUSED_VAR(valid_FE)
  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 

  // stuff i added
  reg [7:0] BHR; // branch history register 
  reg [1:0] PHT [255:0]; // pattern history table
  reg [58:0] BTB [63:0]; // branch table buffer
  wire [7:0] hash_FE;
  wire prediction_FE;

  assign hash_FE = PC_FE_latch[9:2] ^ BHR; // PHT index

  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 
 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
  
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                valid_FE, 
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE,
                                 // if you add more bits here, please increase the width of latch in VX_define.vh 
                                hash_FE,
                                prediction_FE,
                                BTB_target_FE
                                };
  
  // **TODO: Complete the rest of the pipeline 
  //assign stall_pipe_FE = 1;   // you need
  wire br_mispred_AGEX;  
  wire [`DBITS-1:0] br_target_AGEX;  
  wire br_cond_AGEX;
  wire is_br_AGEX;
  wire [7:0] hash_AGEX;
  wire [31:0] PC_AGEX;
  wire is_jmp_AGEX;

  assign {
    stall_pipe_FE
  } = from_DE_to_FE[0]; 

  assign {
    br_mispred_AGEX,
    br_target_AGEX,
    br_cond_AGEX,
    is_br_AGEX,
    hash_AGEX,
    PC_AGEX,
    is_jmp_AGEX
  } = from_AGEX_to_FE;

  integer i; // loop counter
  integer j; 
  wire BTB_hit;
  wire [31:0] predicted_target;
  wire [31:0] BTB_target_FE;
  assign BTB_target_FE = BTB_hit ? BTB[PC_FE_latch[7:2]][31:0] : pcplus_FE;
  assign BTB_hit = (BTB[PC_FE_latch[7:2]][58] == 1'b1) ? (PC_FE_latch[31:6] == BTB[PC_FE_latch[7:2]][57:32]) : 1'b0; // check for BTB hit by looking at valid bit and comparing PC & tag
  assign prediction_FE = (PHT[hash_FE] == 2'b10 || PHT[hash_FE] == 2'b11) ? 1'b1 : 1'b0; // calculate the prediction based on PHT entry

  // registers to store branch predictor metrics
  reg [31:0] correct_predictions /* verilator public */;
  reg [31:0] total_branches /* verilator public */;

  always @ (posedge clk) begin
  /* you need to extend this always block */
   if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      BHR <= 8'b00000000;

      correct_predictions <= 32'b0;
      total_branches <= 32'b0;

      for (i = 0; i < 256; i = i + 1) begin // initialize all entries in PHT to weakly NOT taken 
        PHT[i] = 2'b01;
      end

      for (j = 0; j < 64; j = j + 1) begin // initialize all the valid bits in BTB to 0 
        BTB[j][58] = 1'b0;
      end

      end 
    else if (br_mispred_AGEX)
      PC_FE_latch <= br_target_AGEX;
    else if (stall_pipe_FE) 
      PC_FE_latch <= PC_FE_latch; 
    else begin 
      if (prediction_FE && BTB_hit) begin // if PHT predicts taken and BTB valid bit is 1 and tag is matched 
        PC_FE_latch <= BTB[PC_FE_latch[7:2]][31:0]; // set PC to the target address in the BTB
      end else begin
        PC_FE_latch <= pcplus_FE; // otherwise put PC + 4
      end
      inst_count_FE <= inst_count_FE + 1; 

      end 
  end
  
  always @ (posedge clk) begin 
    if (!reset) begin
      if (is_br_AGEX) begin // updating PHT if instruction is a branch conditional
        case (PHT[hash_AGEX]) 
          2'b00: PHT[hash_AGEX] <= br_cond_AGEX ? 2'b01 : 2'b00;
          2'b01: PHT[hash_AGEX] <= br_cond_AGEX ? 2'b10 : 2'b00;
          2'b10: PHT[hash_AGEX] <= br_cond_AGEX ? 2'b11 : 2'b01;
          2'b11: PHT[hash_AGEX] <= br_cond_AGEX ? 2'b11 : 2'b10;
        endcase

        BHR <= {BHR[6:0], br_cond_AGEX}; // updating branch history register
      end

      if (is_br_AGEX || is_jmp_AGEX) begin // updating the BTB for conditional and unconditional statements (both branches and jumps)
        total_branches <= total_branches + 1;

        if (!br_mispred_AGEX)
          correct_predictions <= correct_predictions + 1;

        BTB[PC_AGEX[7:2]][58] <= 1'b1; 
        BTB[PC_AGEX[7:2]][57:32] <= PC_AGEX[31:6];
        BTB[PC_AGEX[7:2]][31:0] <= br_target_AGEX;
      end
    end
  end

  always @ (posedge clk) begin
    if (reset) begin 
      FE_latch <= '0; 
    end else begin 
      if (br_mispred_AGEX)
        FE_latch <= '0;
      else if (stall_pipe_FE)
        FE_latch <= FE_latch; 
      else 
        FE_latch <= FE_latch_contents; 
    end  
  end

endmodule
