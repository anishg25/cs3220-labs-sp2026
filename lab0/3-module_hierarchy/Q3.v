`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own

module module_hierarchy ( 
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum
);//
    wire temp, cout;
    add16 adder1 (a[15:0], b[15:0], 1'b0, sum[15:0], temp);
    add16 adder2 (a[31:16], b[31:16], temp, sum[31:16], cout);

endmodule

module add1 (input a, input b, input cin, output sum, output cout);

    wire xor1_temp;
    assign xor1_temp = a ^ b;

    wire and1_temp;
    assign and1_temp = a & b;

    assign sum = xor1_temp ^ cin;

    wire and2_temp;
    assign and2_temp = cin & xor1_temp;

    assign cout = and2_temp | and1_temp;

endmodule
