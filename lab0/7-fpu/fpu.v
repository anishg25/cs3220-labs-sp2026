module fpu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 1
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output reg [DATA_WIDTH-1:0] o_data,
    output reg                 o_valid
);

    // TODO: Implement the FPU module
    wire signA = i_data_a[31];
    wire [7:0] expA = i_data_a[30:23];
    wire [22:0] manA = i_data_a[22:0];

    wire signB = i_data_b[31];
    wire [7:0] expB = i_data_b[30:23];
    wire [22:0] manB = i_data_b[22:0];

    wire [23:0] mantA = {1'b1, manA};
    wire [23:0] mantB = {1'b1, manB};

    // multiplication logic 
    wire finalSign;
    assign finalSign = signA ^ signB;

    wire [47:0] product = mantA * mantB;

    wire [8:0] expNew = {1'b0, expA} + {1'b0, expB} - 9'd127;

    wire mantMSB = product[47];
    wire [47:0] mantNorm = mantMSB ? (product >> 1) : product;
    wire [8:0]  expNorm  = expNew + (mantMSB ? 9'd1 : 9'd0);

    // rounding logic 
    wire [23:0] sig24 = mantNorm[46:23];

    wire guardBit = mantNorm[22];
    wire roundBit = mantNorm[21];
    wire stickyBit = |mantNorm[20:0];

    wire lsb = sig24[0];
    wire rounding = guardBit & (roundBit | stickyBit | lsb);

    wire [24:0] sigRounded25 = {1'b0, sig24} + (rounding ? 25'd1 : 25'd0);

    wire roundCarry = sigRounded25[24];

    wire [23:0] sigFinal = roundCarry ? sigRounded25[24:1] : sigRounded25[23:0];
    wire [8:0]  expFinal = expNorm + (roundCarry ? 9'd1 : 9'd0);

    wire [22:0] fracFinal = sigFinal[22:0];

    wire [31:0] mul = {finalSign, expFinal[7:0], fracFinal};
    
    always @ (posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_data <= 32'b0;
            o_valid <= 1'b0;
        end else begin
            o_valid <= 1'b0;
            if (i_valid) begin
                o_valid <= 1'b1;
                case (i_inst) 
                    1'd0: o_data <= i_data_a + i_data_b;

                    1'd1: o_data <= mul;

                    default: o_valid <= 1'b0;
                endcase
            end
        end
    end

endmodule