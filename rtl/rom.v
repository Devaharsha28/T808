module rom(
input [7:0] address,
output [15:0] data_out
);

reg [15:0] read_only_mem [255:0];

initial begin 

$readmemh("programs/program.hex", read_only_mem);

end 
assign data_out = read_only_mem[address];




endmodule 
