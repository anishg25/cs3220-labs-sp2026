`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module combinational_circuits ( 
    input p1a, p1b, p1c, p1d, p1e, p1f,
    output p1y,
    input p2a, p2b, p2c, p2d,
    output p2y );

    wire and1_temp;
    assign and1_temp = p1a && p1b && p1c;

    wire and2_temp;
    assign and2_temp = p1d && p1e && p1f;

    wire or1_temp;
    assign or1_temp = and1_temp || and2_temp;

    assign p1y = or1_temp;

    wire and3_temp;
    assign and3_temp = p2a && p2b;

    wire and4_temp;
    assign and4_temp = p2c && p2d;

    wire or2_temp;
    assign or2_temp = and3_temp || and4_temp;

    assign p2y = or2_temp;
    
endmodule