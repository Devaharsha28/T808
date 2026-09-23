module acc(

input [7:0] data ,
input write_enable,
input enable_shift,
input [1:0] sel,
input clk,

output [7:0] data_out

);

 

reg [7:0] register;

assign data_out <= register ;
always @(posedge clk) begin 

if(write_enable & ~enable_shift) begin register = data; end 

if (write_enable & enable_shift) begin 

case(sel)

2'b00: register <= {register[6:0] , 1'b0}; //shift left

2'b01:  register <= {1'b0, register[7:1]}; //shift right 

2'b10:  register <= {register[0] , register[7:1]}; //rotate right

2'b11:  register <= {register[6:0], register[7] }; //rotate left 

endcase 

end 
end 

endmodule 




