module alu_tb ():

    alu dut(
        .clock (i_clk),
        .reset (i_rst_n),
        .a (i_data_a),
        .b (i_data_b),
        .q (o_data),
        .valid
    )
endmodule: alu_tb