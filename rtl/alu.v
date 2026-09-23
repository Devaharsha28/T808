module alu(
//inputs
input [7:0] a,
input [7:0] b,
input [3:0] sel,


//outputs
output reg [7:0] result,
output reg carry,
output reg n,
output reg z
);


always @(*) begin


//default values to prevent latches
result = 8'b0;
carry =  1'b0;

//multiplexer implementation
case(sel)

4'h0: begin  {carry , result} = {1'b0, a} + {1'b0, b}; end //ADD

4'h4: begin  result = a - b ; carry = (a<b) ; end  //SUB

4'h9: result = a & b;  //AND

4'ha: result = a ^ b; //XOR

4'hb: result = a | b; // OR

4'h8: result = ~a; //NOT


//for undefined select values
default: begin

result = 8'b0;
carry  = 1'b0;

end

endcase

//flags
z = ~|result;
n = result[7];


end



endmodule
