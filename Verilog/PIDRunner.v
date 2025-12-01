`default_nettype none
module top_module(
    input [11:0] angleIn,
    input [11:0] setPoint,
    input [7:0] kp,
    input [7:0] ki,
    input [7:0] kd,
    input clk,
    output reg signed [8:0] dutyCycleOut
    ); 
    wire signed [12:0] error;
    errorCalc errCalcInst(angleIn, setPoint, error);   
    reg signed [12:0] prevError;
    wire signed [20:0] proportional;
    reg signed [28:0] integral;
    wire signed [21:0] derivative;
    reg signed [29:0] pidOut;
    initial begin
        integral = 0;
        prevError = 0;
        pidOut = 0;
    end
    assign proportional = error * kp;

    
    assign derivative = ({{9{error[12]}}, error} - {{9{prevError[12]}}, prevError}) * kd;



    always @(posedge clk) begin
        integral <= integral + (error * ki);
        if(integral > 255) integral <= 255;
        if(integral < -255) integral <= -255;

        prevError <= error;

        pidOut <= {{9{proportional[20]}}, proportional} +integral +{{8{derivative[21]}}, derivative};
        if(pidOut > 255) dutyCycleOut <= 255;
        else if(pidOut < -255) dutyCycleOut <= -255;
        else dutyCycleOut <= pidOut[8:0];
    end

endmodule

// 12-bit 2's complement subtractor
// error = setPoint - angleIn
//Does everything manually bit by bit and returns the whole value at once
//Avoids using the '-' operator
module errorCalc(
    input [11:0] angleIn,
    input [11:0] setPoint,
    output signed [12:0] error
);
    wire [12:0] carryWire;
    assign carryWire[0] = 1'b1;
    assign error[0] = carryWire[0]^(setPoint[0]^(~angleIn[0]));
    assign carryWire[1] = (carryWire[0]&(setPoint[0]^(~angleIn[0])))|((~angleIn[0])&setPoint[0]);
    assign error[1] = carryWire[1]^(setPoint[1]^(~angleIn[1]));
    assign carryWire[2] = (carryWire[1]&(setPoint[1]^(~angleIn[1])))|((~angleIn[1])&setPoint[1]);
    assign error[2] = carryWire[2]^(setPoint[2]^(~angleIn[2]));
    assign carryWire[3] = (carryWire[2]&(setPoint[2]^(~angleIn[2])))|((~angleIn[2])&setPoint[2]);
    assign error[3] = carryWire[3]^(setPoint[3]^(~angleIn[3]));
    assign carryWire[4] = (carryWire[3]&(setPoint[3]^(~angleIn[3])))|((~angleIn[3])&setPoint[3]);
    assign error[4] = carryWire[4]^(setPoint[4]^(~angleIn[4]));
    assign carryWire[5] = (carryWire[4]&(setPoint[4]^(~angleIn[4])))|((~angleIn[4])&setPoint[4]);
    assign error[5] = carryWire[5]^(setPoint[5]^(~angleIn[5]));
    assign carryWire[6] = (carryWire[5]&(setPoint[5]^(~angleIn[5])))|((~angleIn[5])&setPoint[5]);
    assign error[6] = carryWire[6]^(setPoint[6]^(~angleIn[6]));
    assign carryWire[7] = (carryWire[6]&(setPoint[6]^(~angleIn[6])))|((~angleIn[6])&setPoint[6]);
    assign error[7] = carryWire[7]^(setPoint[7]^(~angleIn[7]));
    assign carryWire[8] = (carryWire[7]&(setPoint[7]^(~angleIn[7])))|((~angleIn[7])&setPoint[7]);
    assign error[8] = carryWire[8]^(setPoint[8]^(~angleIn[8]));
    assign carryWire[9] = (carryWire[8]&(setPoint[8]^(~angleIn[8])))|((~angleIn[8])&setPoint[8]);
    assign error[9] = carryWire[9]^(setPoint[9]^(~angleIn[9]));
    assign carryWire[10] = (carryWire[9]&(setPoint[9]^(~angleIn[9])))|((~angleIn[9])&setPoint[9]);
    assign error[10] = carryWire[10]^(setPoint[10]^(~angleIn[10]));
    assign carryWire[11] = (carryWire[10]&(setPoint[10]^(~angleIn[10])))|((~angleIn[10])&setPoint[10]);
    assign error[11] = carryWire[11]^(setPoint[11]^(~angleIn[11]));
    assign carryWire[12] = (carryWire[11]&(setPoint[11]^(~angleIn[11])))|((~angleIn[11])&setPoint[11]);
    assign error[12] = carryWire[12];
endmodule
