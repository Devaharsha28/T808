module ram_tb();

reg [7:0] data;
reg [7:0] address;
reg write_enable;
reg enable ;
wire [7:0] data_out;


ram instance1 (enable , address ,data ,  write_enable , data_out);
integer temp;

initial begin



enable = 1'b1;
data = 8'h00;
address = 8'h00;
write_enable = 1'b0;

forever begin 
$display("enter address :");
temp = $fscanf(32'h80000000 , "%h" , address);
$display("enter data:");
temp = $fscanf(32'h80000000 , "%h" , data);
write_enable = 1'b1;
#2;
write_enable = 1'b0;

#5;
$display("enter address to view :");
temp = $fscanf(32'h80000000 , "%h" , address);

#5;
$display("address: %h , data: %h " , address , data_out );


end


end

endmodule
