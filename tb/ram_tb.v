module ram_tb();

reg [7:0] data;
reg [7:0] address;
reg write_enable;
reg enable ;
wire [7:0] data_out;


ram instance1 (enable , address ,data ,  write_enable , data_out);


initial begin 



enable = 1'b1;
data = 8'h12;
address = 8'h00;
write_enable = 1'b0;
#10;

write_enable = 1'b1;
 
#5;
$display("output = %h ", data_out); 

end

endmodule 
