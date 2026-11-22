module pc(

input [7:0] offset,
input activate_jmp,
input mode,
input clr,
input clk,

output [15:0] address
);


reg [15:0] state;


initial begin state = 16'h00 ; end 

assign address = state;

always @(posedge clk) begin 

if (clr) begin   state <= 16'h0000; end 

else begin 

if (activate_jmp) begin 

if (mode) begin state <= state - {8'h00, offset}; end 
else begin state <= state + {8'h00, offset}; end 

end

else begin 

state <= state + 16'h0001;


end 


end

end



endmodule 
