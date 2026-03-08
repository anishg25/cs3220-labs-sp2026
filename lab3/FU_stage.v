`include "define.vh" 

module FU_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`from_DE_to_FU_WIDTH-1:0]    from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE
);
  /////////////////////////////////////////////////////////////////
  //TODO: add your code here to instantiate the external_alu module

  // inputs
  wire [31:0] op1_FU;
  wire [31:0] op2_FU;
  wire [3:0] aluop_FU; 
  // outputs
  wire [31:0] op3_FU;

  // state machine related stuff
  wire [2:0] CSR_ALU_OUT_FU;
  wire [2:0] CSR_ALU_IN_FU;

  assign {
    aluop_FU[3:0],
    op1_FU,
    op2_FU,
    CSR_ALU_IN_FU
  } = from_DE_to_FU;

  external_alu fpu (.clk(clk), .rst(reset), .OP1(op1_FU), .OP2(op2_FU), .OP3(op3_FU), .ALUOP(aluop_FU), .CSR_ALU_OUT(CSR_ALU_OUT_FU), .CSR_ALU_IN(CSR_ALU_IN_FU));

  assign from_FU_to_DE = {
    op3_FU,
    CSR_ALU_OUT_FU
  };

endmodule