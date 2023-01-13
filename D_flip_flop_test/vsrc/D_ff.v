module  D_ff(
    clk,
    rst,
    d,
    q,
    q_o
);
    input clk;
    input rst;
    input d;

    output reg q;
    output reg q_o;

    always@(posedge clk)begin
        if(!rst)begin
              q <= 1'b0;
            q_o <= 1'b0; 
        end
        else begin
            q <= d;
            q_o <= ~d; 
        end          
    end


endmodule