module alu_tb();

reg [7:0] a;
reg [7:0] b;
reg [3:0] sel;

wire [7:0] result;
wire n;
wire z;
wire carry;

alu instance1 (

.a(a),
.b(b),
.sel(sel),
.result(result),
.carry(carry),
.n(n),
.z(z)

);


initial begin 

sel = 4'h0;
a = 8'h00;
b = 8'h00;

#10; 
$display("a=%h, b=%h, result=%h , n=%b , z=%b , carry = %b " , a , b , result , n , z, carry );


sel = 4'h0;
a = 8'h12 ;
b = 8'h34 ;


#10;
$display("a=%h, b=%h, result=%h , n=%b , z=%b , carry = %b " , a , b , result , n , z, carry );

a = 8'h34;
b = 8'h56;

#10;
$display("a=%h, b=%h, result=%h , n=%b , z=%b , carry = %b " , a , b , result , n , z, carry );
end

endmodule
