`include "define.vh" 

module FU_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`from_DE_to_FU_WIDTH-1:0]    from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE
);
  /////////////////////////////////////////////////////////////////
  //TODO: add your code here to instantiate the external_alu module

  wire [3:0] aluop_FU;
  wire [`DBITS-1:0] op1_FU;
  wire [`DBITS-1:0] op2_FU;
  wire [2:0] CSR_ALU_IN_FU;
  wire [`DBITS-1:0] op3_FU;
  wire [2:0] CSR_ALU_OUT_FU;

  assign { 
    op1_FU,
    op2_FU,
    aluop_FU,
    CSR_ALU_IN_FU
  } = from_DE_to_FU;

  external_alu fpu (.clk(clk), .rst(reset), .ALUOP(aluop_FU), .OP1(op1_FU), .OP2(op2_FU), .OP3(op3_FU), .CSR_ALU_IN(CSR_ALU_IN_FU), .CSR_ALU_OUT(CSR_ALU_OUT_FU));

  assign from_FU_to_DE = {
    op3_FU,
    CSR_ALU_OUT_FU
  };

endmodule