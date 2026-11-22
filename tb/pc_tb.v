module pc_tb();

reg [7:0] offset;
reg activate_jmp;
reg mode;
reg clr;
reg clk;

wire [7:0] address;



initial begin 
clk = 0;
forever begin #5; clk = ~clk; end 
end 


pc ins1 (offset , activate_jmp , mode , clr , clk, address);



initial begin 
 
activate_jmp = 0;
mode = 0; 
clr = 0;

forever begin 
#5;
$display("address : %h " , address);

end

end 


endmodule 
