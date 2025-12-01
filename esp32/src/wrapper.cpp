#include "../obj_dir/Vtop_module.h"
#include <cstdint>

static Vtop_module* top = nullptr;

extern "C" void pid_init() {
    top = new Vtop_module;
    top->clk = 0;

    // initialize inputs
    top->angleIn = 0;
    top->setPoint = 0;
    top->kp = 0;
    top->ki = 0;
    top->kd = 0;

    top->eval();
}

extern "C" void pid_set_inputs(uint16_t angle, uint16_t setPoint,
                              uint8_t kp, uint8_t ki, uint8_t kd) 
{
    top->angleIn = angle;
    top->setPoint = setPoint;
    top->kp = kp;
    top->ki = ki;
    top->kd = kd;
}

extern "C" void pid_tick() {
    // rising edge -> PID updates here
    top->clk = 1;
    top->eval();

    // falling edge
    top->clk = 0;
    top->eval();
}

extern "C" int16_t pid_get_output() {
    return (int16_t)top->dutyCycleOut;
}
