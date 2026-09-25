#include<Vcpu.h>
#include<verilated.h>
#include<stdio.h>
#include<stdint.h>
#include<unistd.h>


void print_state (uint8_t acc , uint8_t pc , uint16_t rom , uint8_t port1 , uint8_t port2 , uint8_t port3, uint8_t port4 ){


printf(" | acc = %02X| pc = %02X | inst =%04X | \n | p1 = %02X | p2 = %02X | p3 = %02X | p4 = %02X |\n"
	, (unsigned)acc , (unsigned)pc , (unsigned)rom , (unsigned)port1, (unsigned)port2, (unsigned)port3, (unsigned)port4 );
printf("_______________________________________________\n");

}




int main(){

Vcpu cpu;

int running = 1;

cpu.pc_clr = 0;
cpu.enable =1;


while (running){

cpu.clk = 0;
cpu.eval();

cpu.clk = 1;
cpu.eval();
print_state(cpu.accumulator , cpu.program_counter , cpu.rom_output,  cpu.port1 , cpu.port2 , cpu.port3, cpu.port4 );
usleep(500000);

}


return 0;
}


