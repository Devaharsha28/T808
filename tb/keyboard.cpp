#include<Vcpu.h>
#include<verilated.h>
#include<stdio.h>
#include<stdint.h>
#include<unistd.h>
#include<ncurses.h>


void print_state (uint8_t acc , uint8_t pc , uint16_t rom , uint8_t port1 , uint8_t port2 , uint8_t port3, uint8_t port4 ){

mvprintw(7, 0, " | acc = %02X| pc = %02X | inst =%04X | \n | p1 = %02X | p2 = %02X | p3 = %02X | p4 = %02X |\n"
        , (unsigned)acc , (unsigned)pc , (unsigned)rom , (unsigned)port1, (unsigned)port2, (unsigned)port3, (unsigned)port4 );
mvprintw(8, 0 , "_______________________________________________\n");

}


char print_char( uint8_t address ){

char t8ce[255] = { '\0', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
'#', '|', (char)254, '\\', '/', '_', '+', '-', '*', (char)246, '[', ']', '(', ')', '{', '}', ':', '=', '<', '>', '$', ',', '!', '.', '&', '^', '\"', ' '};

return t8ce[address];
}


int main(int argc , char** argv){

initscr(); //initialise screen
cbreak(); // make characters characters available immediately
noecho(); //doesnt print the characters we type to terminal
nodelay(stdscr, TRUE) ; //no delay
keypad(stdscr, TRUE); //guves keypad functionality

Vcpu cpu;

Verilated::commandArgs(argc, argv);
int sleep_time = 5000;
//Search command line arguments for "+DELAY="
const char* delay_arg = Verilated::commandArgsPlusMatch("DELAY=");

// If found, delay_arg will point to something like "+DELAY=50000"
if (delay_arg && delay_arg[0] != '\0') {
    // Skip past the "+DELAY=" prefix (7 characters) to grab the number
    sleep_time = atoi(delay_arg + 7);
 }

int key;
int running = 1;
cpu.pc_clr = 0;
cpu.enable =1;
cpu.port3 = 0;
cpu.port4 = 0;

while (running){

key = getch();
if(key != ERR) {
cpu.port3 = static_cast<uint8_t>(key); //type casting to 8 bit number 
}
else cpu.port3 = 0;


cpu.clk = 0;
cpu.eval();

erase(); //erases screen

//printf of ncurses
mvprintw(0,0,"      ");
mvprintw(1, 0, "port1(0xfc): %02X", cpu.port1);
mvprintw(2, 0, "port2(0xfd): %02X", cpu.port2);
mvprintw(3, 0, "port3(0xfe): %02X", cpu.port3);
mvprintw(4, 0, "port4(0xff): %02X", cpu.port4);

refresh();

cpu.clk = 1;
//print_state(cpu.accumulator , cpu.program_counter , cpu.rom_output,  cpu.port1 , cpu.port2 , cpu.port3, cpu.port4 );

cpu.eval();
usleep(sleep_time);

}


return 0;
}


