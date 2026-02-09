// dummy implementation, please replace with your own
module fsm ( 
    input clk,    // Clocks are used in sequential circuits
    input reset,
    input seq,
    output detected );// seq detector 1101, once detected, output 1 for 1 clock cycle
    
    parameter S0 = 3'b000, S1 = 3'b001, S2 = 3'b010, S3 = 3'b011, S4 = 3'b100;

    reg [2:0] state;
    reg [2:0] next_state;
    always @(posedge clk) begin
        if (reset) begin
            state <= S0;
        end else begin
            state <= next_state;
        end
    end

    always @(posedge clk) begin
        case (state) 
            S0: next_state <= seq ? S1 : S0;
            S1: next_state <= seq ? S2 : S0;
            S2: next_state <= seq ? S0 : S3;
            S3: next_state <= seq ? S4 : S0;
            S4: next_state <= S0;
            default: next_state <= S0;
        endcase
    end
    
    assign detected = (state == S4);

endmodule