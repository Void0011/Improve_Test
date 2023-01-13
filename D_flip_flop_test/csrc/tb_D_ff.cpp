#include <iostream>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>


#include "VD_ff.h"//替换topname为.v顶层文件的头文件名字

//设置仿真时间MAX_SIM_TIME
#define MAX_SIM_TIME 36
vluint64_t sim_time =0;

//替换topname
static VD_ff dut;

VerilatedVcdC* m_trace = NULL;


static void sim_init(){
    m_trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut.trace(m_trace,5);
    m_trace -> open("waveform.vcd");
}


static void sim_exit(){
    m_trace -> close();
    exit(EXIT_SUCCESS);
}

//时钟信号，如果没有设置时钟信号，注释掉该信号
static void clk(){
    dut.clk ^= 1;
    dut.eval();
}

//复位信号，rst(beg,over)中beg代表开始时刻，over代表结束时刻
static void rst(int beg,int over){
    if((sim_time <= over)&&(sim_time >= beg) )dut.rst = 0;
    else dut.rst = 1;
    dut.eval();
}

int main( int argc,char** argv,char** env){
   Verilated::commandArgs(argc, argv);
   sim_init();

    while(sim_time < MAX_SIM_TIME){
      clk();
      rst(3,6);

      //Please wirte the initial code below
        if(sim_time == 8) dut.d =1;
        if(sim_time == 12) dut.d =0;
      //wirte all the traced signal values into our waveform dump file 
      m_trace->dump(sim_time);
      
      
      sim_time++;

  }

    sim_exit();
}
