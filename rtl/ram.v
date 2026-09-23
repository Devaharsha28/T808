module ram(
 input enable,
 input [7:0] address,
 input [7:0] data ,
 input write_enable,

 output [7:0] data_out

);

reg [7:0] registers [255:0];

assign data_out = (enable) ? registers[address] : 8'h00;


always @(posedge write_enable) begin 

registers[address] = data;


end

 





endmodule 
