module rom(
input [7:0] address,
output [15:0] data_out
);

reg [15:0] read_only_mem [0:255];

string rom_file;

initial begin

if (!$value$plusargs("ROM=%s", rom_file)) begin
    $display("bro give rom file with +ROM=whatever.hex");
    $finish;
end

$display("loading rom: %s", rom_file);

$readmemh(rom_file, read_only_mem);

end

assign data_out = read_only_mem[address];

endmodule
