module cpu(
input enable,
input clk,
input pc_clr,


output [7:0] accumulator,
output [7:0] program_counter,
output [15:0] rom_output,
output [7:0] port1,
output [7:0] port2,
output [7:0] port3,
output [7:0] port4
);

//Accumulator wires 
reg  [7:0] acc_data_in;
reg acc_write_enable;
reg acc_enable_shift;
reg [1:0] acc_sel;
wire [7:0] acc_data_out;
reg [1:0] acc_input_sel;
wire z_flag; assign z_flag = ~|acc_data_out;

//alu wires 
reg [7:0] alu_input_a;
reg [7:0] alu_input_b;
reg [3:0] alu_sel;
wire n_flag;
wire alu_z_flag;
wire carry_flag;
wire [7:0] alu_output;


//PC wires 
reg [7:0] pc_offset;
reg activate_jmp;
reg pc_mode;
wire [7:0] pc_address;

//RAM wires 
wire ram_enable; assign ram_enable = 1;
reg [7:0] ram_address;
reg [7:0] ram_data_in;
reg ram_write_enable;
wire [7:0]  ram_data_out;

//ROM wires 
wire [15:0] rom_data_out;

//instances definitions 
acc ACC ( acc_data_in , acc_write_enable , acc_enable_shift , acc_sel, clk , acc_data_out);
alu ALU (alu_input_a , alu_input_b , alu_sel , alu_output  , carry_flag , n_flag , alu_z_flag );
pc PC ( pc_offset , activate_jmp , pc_mode , pc_clr , clk , pc_address );
ram RAM ( ram_enable , ram_address,  ram_data_in , ram_write_enable , ram_data_out, port1 , port2 , port3, port4);
rom ROM ( pc_address , rom_data_out);

//cpu outputs definitions 
assign accumulator = acc_data_out;
assign program_counter = pc_address ;
assign rom_output = rom_data_out;


always @(*) begin 
    
    acc_write_enable = 1'b0;
    alu_input_a = 8'h00;
    alu_input_b = 8'h00;
    alu_sel = 4'h0;
    acc_data_in = 8'h00;
    acc_enable_shift = 0;
    acc_sel = 2'b00;
    pc_offset = rom_data_out[7:0];
    activate_jmp = 0;
    pc_mode = 0;
    ram_address = rom_data_out[7:0];
    ram_data_in = 8'h00;
    ram_write_enable = 0;
    acc_input_sel = 0;
    

if (enable) begin 

	case (rom_data_out[15:8]) 
8'h00: begin end //NOP

//ADDI
8'h01 : begin 
	alu_input_a = acc_data_out;
	alu_input_b = rom_data_out[7:0];
	alu_sel = 4'h0;
	acc_input_sel = 2'b00;
	acc_write_enable = 1;
	
        end
//SUBI
8'h02 : begin
        alu_input_a = acc_data_out;
        alu_input_b = rom_data_out[7:0];
        alu_sel = 4'h4;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end


//ANDI
8'h03 : begin
        alu_input_a = acc_data_out;
        alu_input_b = rom_data_out[7:0];
        alu_sel = 4'h9;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end

//XORI
8'h04 : begin
        alu_input_a = acc_data_out;
        alu_input_b = rom_data_out[7:0];
        alu_sel = 4'ha;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end

//ORRI
8'h05 : begin
        alu_input_a = acc_data_out;
        alu_input_b = rom_data_out[7:0];
        alu_sel = 4'hb;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end

//NOT
8'h06 : begin
        alu_input_a = acc_data_out;
        alu_sel = 4'h8;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end


//JMPA
8'h07 : begin 
	activate_jmp = 1;
	pc_mode = 0;
	end 

//JMPS
8'h08 : begin 
	activate_jmp = 1;
	pc_mode = 1;
	end 

//MVI
8'h09: begin
        acc_input_sel = 2'b10;
        acc_write_enable = 1;
        end


//MOV
8'h0a: begin 
	ram_address = rom_data_out[7:0];
	ram_data_in = acc_data_out;
	ram_write_enable = 1;
	

	end 

//ADDM
8'h0b : begin
	ram_address = rom_data_out[7:0];
        alu_input_a = acc_data_out;
        alu_input_b = ram_data_out;
        alu_sel = 4'h0;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end

//SUBM
8'h0c : begin
        ram_address = rom_data_out[7:0];
        alu_input_a = acc_data_out;
        alu_input_b = ram_data_out;
        alu_sel = 4'h4;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end

//ANDM
8'h0d : begin
        ram_address = rom_data_out[7:0];
        alu_input_a = acc_data_out;
        alu_input_b = ram_data_out;
        alu_sel = 4'h9;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end


//XORM

8'h0e : begin
        ram_address = rom_data_out[7:0];
        alu_input_a = acc_data_out;
        alu_input_b = ram_data_out;
        alu_sel = 4'ha;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end

//ORRM
8'h0f : begin
        ram_address = rom_data_out[7:0];
        alu_input_a = acc_data_out;
        alu_input_b = ram_data_out;
        alu_sel = 4'hb;
        acc_input_sel = 2'b00;
        acc_write_enable = 1;

        end


//JZA
8'h10: begin 
	if (z_flag) begin activate_jmp = 1; pc_mode = 0; end 
	else begin end
	end 

//JZS
8'h11: begin 
	if (z_flag) begin activate_jmp = 1; pc_mode = 1; end 
	else begin end 
	end  


//RR
8'h12: begin 
	acc_enable_shift = 1; acc_write_enable = 1;
	acc_sel = 2'b10;
	end 
//RL
8'h13: begin 
acc_enable_shift = 1; acc_write_enable = 1;
acc_sel = 2'b11;
 end 

//SHR
8'h14: begin
acc_enable_shift = 1; acc_write_enable = 1;
 acc_sel = 2'b01;
 end 

//SHL
8'h15: begin 
acc_enable_shift = 1; acc_write_enable = 1;
acc_sel = 2'b00; 
end 

//MVA
8'h16: begin 
	
	ram_address = rom_data_out[7:0];
	acc_input_sel = 2'b01;
	acc_write_enable = 1;

	end 

//JNZA
8'h17 : begin 
	if(~z_flag) begin 
              activate_jmp = 1;
	      pc_mode = 0;
	end 
	else begin end 
	end
       

//JNZS
8'h18 : begin 
	if(~z_flag) begin activate_jmp = 1; pc_mode = 1; end 
	else begin end 
	end  
default : begin end
	  

	endcase
end 

end
 
always @(*) begin

    case (acc_input_sel)

        2'b00: acc_data_in = alu_output;
        2'b01: acc_data_in = ram_data_out;
        2'b10: acc_data_in = rom_data_out[7:0];
        default: acc_data_in = 8'h00;

    endcase

end

endmodule 
