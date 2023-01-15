//用于验证算术移位与逻辑移位之间的区别
//逻辑左移与算术左移一致，均为最右侧补00；
//逻辑右移即最右侧数据移除，左侧补零；
//算术右移是符号位也随之复制移动，如4'b1110= 4'1001 >>>2.

module Shifting_reg_test(
    din,
    din_sig,
    out_logicL,
    out_logicL_over,
    out_logicR,
    out_calcuL,
    out_calcuL_over,
    out_calcuR
);
    input [3:0]din;
    input signed [3:0]din_sig;

    output [3:0] out_logicL;
    output [5:0] out_logicL_over;
    output [3:0] out_logicR;
    output signed [3:0] out_calcuL;
    output signed [5:0] out_calcuL_over;
    output signed [3:0] out_calcuR;

    /* verilator lint_off WIDTH */
    assign out_logicL = din <<2;
    assign out_logicL_over = din <<2;
    assign out_logicR = din >>2;

    assign out_calcuL = din_sig <<<2;
    assign out_calcuL_over = din_sig <<<2;
    assign out_calcuR = din_sig >>>2;
   
    

endmodule