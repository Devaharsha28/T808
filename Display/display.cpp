#include<stdio.h>
#include<SDL2/SDL.h>


const int WIDTH = 600;
const int HEIGHT = 600;

int main (int argc, char* argv[]){

SDL_Window* window = NULL;
SDL_Surface* surface = NULL;
SDL_Rect square = { 250, 250, 50, 50};
if( SDL_Init(SDL_INIT_VIDEO) < 0){
printf("Init fked up yo!! < %s >\n", SDL_GetError());
}
else {
printf("working yoooooo!!!!\n");
window = SDL_CreateWindow( "window" , 0 , 0, WIDTH , HEIGHT , SDL_WINDOW_SHOWN);


if (window == 0) {
printf("window fked up yo! <%s>\n" , SDL_GetError());
}

else{
printf("window also working yooooo!!!!\n");
surface = SDL_GetWindowSurface(window);


SDL_FillRect(surface , &square , SDL_MapRGB(surface->format , 0xff , 0xff , 0x00));
SDL_UpdateWindowSurface(window);
}

SDL_Delay(1000);
}


return 0;
}
