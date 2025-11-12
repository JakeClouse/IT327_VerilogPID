`default_nettype none
module top_module(
    input [11:0] angleIn,
    input [11:0] setPoint,
    input [7:0] kp,
    input [7:0] ki,
    input [7:0] kd,
    output signed [8:0] dutyCycleOut
    ); 
    wire signed [12:0] error;
    reg signed [12:0] prevError;

    wire signed [20:0] proportional;
    wire signed [28:0] integral;
    wire signed [21:0] derivitave;
    wire signed [29:0] pidOut;

    proportional = kp*error;
    integral = integral + (ki*error);
    derivitave = kd * (error-prevError);
    assign pidOut = proportional+integral+derivitave;
    dutyCycleOut = pidOut<<<16


endmodule
