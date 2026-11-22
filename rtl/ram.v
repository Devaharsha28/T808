module ram(
 input enable,
 input [7:0] address,
 input [7:0] data ,
 input write_enable,
 input clk,

 output reg [7:0] data_out,
 output [7:0] port1,
 output [7:0] port2,
 input [7:0] port3_in,
 input [7:0] port4_in
);

reg [7:0] registers [0:255];


assign port1 = registers[252];
assign port2 = registers[253];


always @(*) begin
    if (!enable)
        data_out = 8'h00;
    else if (address == 8'hFE)
        data_out = port3_in;
    else if (address == 8'hFF)
        data_out = port4_in;
    else
        data_out = registers[address];
end


always @(posedge clk) begin 

if(write_enable) begin 
    registers[address] <= data;
end

end

 





endmodule 
