module alu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 4
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output reg [DATA_WIDTH-1:0] o_data,
    output reg                 o_overflow,
    output reg                 o_valid
);

    integer i;
    reg [32:0] temp;

    // TODO: Implement the ALU module
    always @ (posedge i_clk or negedge i_rst_n) begin
        o_valid <= 1'b0;
        if (!i_rst_n) begin
            o_data <= 32'b0;
            o_overflow <= 1'b0;
            o_valid <= 1'b0; 
        end else if (i_valid) begin
            case(i_inst)
                4'd0: begin // signed addition
                    o_data <= $signed(i_data_a) + $signed(i_data_b);
                    o_valid <= 1'b1;
                    o_overflow <= 1'b0;
                end 

                4'd1: begin // signed subtraction
                    o_data <= $signed(i_data_a) - $signed(i_data_b);
                    o_valid <= 1'b1;
                    o_overflow <= 1'b0;
                end

                4'd2: begin // signed multiplication 
                    o_data <= $signed(i_data_a) * $signed(i_data_b);
                    o_valid <= 1'b1;
                    o_overflow <= 1'b0;
                end

                4'd3: begin // signed max
                    o_data <= ($signed(i_data_a) > $signed(i_data_b)) ? i_data_a : i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd4: begin // signed min
                    o_data <= ($signed(i_data_a) < $signed(i_data_b)) ? i_data_a : i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd5: begin // unsigned add 
                    o_data <= i_data_a + i_data_b;
                    o_valid <= 1'b1;
                    if (o_data < i_data_a || o_data < i_data_b) begin
                        o_overflow <= 1'b1;
                    end else begin
                        o_overflow <= 1'b0;
                    end
                end

                4'd6: begin // unsigned sub
                    o_data <= i_data_a - i_data_b;
                    o_valid <= 1'b1;
                    if (o_data < i_data_a || o_data < i_data_b) begin
                        o_overflow <= 1'b1;
                    end else begin
                        o_overflow <= 1'b0;
                    end
                end

                4'd7: begin // unsigned mul
                    o_data <= i_data_a * i_data_b;
                    temp <= i_data_a * i_data_b;
                    o_valid <= 1'b1;
                    o_overflow <= temp ? 1'b1: 1'b0;
                end

                4'd8: begin // unsigned max
                    o_data <= (i_data_a > i_data_b) ? i_data_a : i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd9: begin // unsigned min
                    o_data <= (i_data_a < i_data_b) ? i_data_a : i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd10: begin // and 
                    o_data <= i_data_a & i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd11: begin // or
                    o_data <= i_data_a | i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd12: begin // xor
                    o_data <= i_data_a ^ i_data_b;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd13: begin // bit flip for i_data_a
                    o_data <= ~i_data_a;
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end

                4'd14: begin // bit reverse for i_data_a
                    {o_data[0], o_data[1], o_data[2], o_data[3], o_data[4], o_data[5], 
                    o_data[6], o_data[7], o_data[8], o_data[9], o_data[10], o_data[11], o_data[12], o_data[13], o_data[14], o_data[15],
                    o_data[16], o_data[17], o_data[18], o_data[19], o_data[20], o_data[21], o_data[22], o_data[23], o_data[24], o_data[25],
                    o_data[26], o_data[27], o_data[28], o_data[29], o_data[30], o_data[31]} = i_data_a; 
                    o_overflow <= 1'b0;
                    o_valid <= 1'b1;
                end
                default: begin
                    o_valid <= 1'b0;
                    o_overflow <= 1'b0;
                    o_data <= 32'b0;
                end
            endcase
        end
    end

endmodule