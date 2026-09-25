module pc(

input [7:0] offset,
input activate_jmp,
input mode,
input clr,
input clk,

output [7:0] address
);


reg [7:0] state;


initial begin state = 8'h00 ; end 

assign address = state;

always @(posedge clk) begin 

if (clr) begin   state <= 8'h00; end 

else begin 

if (activate_jmp) begin 

if (mode) begin state <= state - offset; end 
else begin state <= state + offset; end 

end

else begin 

state <= state + 8'h01;


end 


end

end



endmodule 
