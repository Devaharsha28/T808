#include<stdio.h>
#include<stdint.h>
#include<unistd.h>
#include<ncurses.h>


int main(int argc , char** argv){

initscr(); //initialise screen
cbreak(); // make characters characters available immediately
noecho(); //doesnt print the characters we type to terminal
nodelay(stdscr, TRUE) ; //no delay
keypad(stdscr, TRUE); //guves keypad functionality

int sleep_time = 5000;
int key;
int running = 1;
int x, y;
x = 0;
y = 0;

while (running){
erase();
key = getch();
if(key != ERR) {
	if(key == 119) x -= 1;
	if(key == 97) y-=1;
	if(key == 115) x+= 1;
	if(key == 100) y+= 1;
}


//printf of ncurses
mvprintw(x,y,"^_^");
refresh();
usleep(sleep_time);

}


return 0;
}
