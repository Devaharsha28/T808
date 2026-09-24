module cpu_tb();

reg enable;
reg clk;
reg pc_clr;

cpu CPU (
    enable,
    clk,
    pc_clr
);

// Clock: 10 time-unit period
initial begin
    clk = 0;
    forever begin #5; clk = ~clk; end 
end

initial begin
    enable = 0;
    pc_clr = 1;

    #10;

    pc_clr = 0;
    enable = 1;

    #10000;

    $finish;
end

initial begin
    $monitor(
        "time=%0t  PC=%h  INST=%h  ACC=%h  ALU=%h  WE=%b",
        $time,
        CPU.pc_address,
        CPU.rom_data_out,
        CPU.acc_data_out,
        CPU.alu_output,
        CPU.acc_write_enable
    );
end

endmodule
