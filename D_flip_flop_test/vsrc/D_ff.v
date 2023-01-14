//准确而言，本设计为直接验证触发器的特性，即当检测到数据时，并不会直接产生输出
//该模块为同步D触发器，即复位的时间其实是与时钟信号同步的；
//如果要得到异步D触发器，可以在敏感表里面添加进去negedge rst；
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