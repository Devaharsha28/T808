module ram(
 input enable,
 input [7:0] address,
 input [7:0] data ,
 input write_enable,

 output [7:0] data_out,
 output [7:0] port1,
 output [7:0] port2,
 output [7:0] port3,
 output [7:0] port4
);

reg [7:0] registers [0:255];


assign port1 = registers[252];
assign port2 = registers[253];
assign port3 = registers[254];
assign port4 = registers[255];

assign data_out = (enable) ? registers[address] : 8'h00;


always @(posedge write_enable) begin 

registers[address] <= data;


end

 





endmodule 
