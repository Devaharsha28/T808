module dyanamic_test();

reg [7:0] a;
reg [7:0] b;
reg [3:0] sel;

wire [7:0] result;
wire carry;
wire n;
wire z;

alu instance1 (
a, b, sel , result , carry , n , z
);

integer temp;
initial begin 
forever begin 
sel = 4'h0;
a = 8'h00;
b = 8'h00;

$write("Enter A value:");
temp = $fscanf(32'h80000000, "%h" , a);

$write("Enter B value:");
temp = $fscanf(32'h80000000, "%h" , b);

$write("Enter operation:");
temp = $fscanf(32'h80000000, "%h" , sel);

#1;

$display("result=%h , carry=%b, n = %b , z = %b ", result , carry , n, z);



end 
end



endmodule 
