module rom_tb();

reg [7:0] address;
wire [15:0] data_out;

rom instance1 ( address , data_out);

integer i;

initial begin
    for (i = 0; i < 256; i = i + 1) begin
        address = i;
        #1;
        $display("address=%h data=%h", address, data_out);
    end

    $finish;
end


endmodule 
