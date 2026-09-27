#include<stdio.h>
#include<SDL2/SDL.h>

const int width = 500;
const int height = 500;

int main(int argc, char* args[]){

int dirx;
int diry;

int running = 1;
SDL_Window* window = NULL;
SDL_Surface* surface = NULL;
SDL_Event event;
int rectx = 5;
int recty = 5;
dirx = 1;
diry = 3;

SDL_Rect rectangle = {rectx , recty, 50, 50};

SDL_Init(SDL_INIT_VIDEO);

window = SDL_CreateWindow( "title" , 0, 0, width , height , SDL_WINDOW_SHOWN);
surface = SDL_GetWindowSurface(window);

while (running){

while(SDL_PollEvent(&event)){
	if(event.type == SDL_QUIT) { running = 0; }
}
if(rectangle.x + rectangle.w >= width ) { dirx = dirx*-1;}
if(rectangle.y + rectangle.h >= height) { diry = diry*-1;}

if(rectangle.x <= 0) {dirx *=-1;}
if(rectangle.y <= 0) {diry *= -1;}

SDL_FillRect(surface , NULL , SDL_MapRGB(surface -> format , 255 , 255 , 127));
SDL_FillRect(surface ,&rectangle , SDL_MapRGB(surface -> format , 127 , 255 , 127));
SDL_UpdateWindowSurface(window);

rectangle.x += dirx;
rectangle.y += diry;

SDL_Delay(1);

}

SDL_DestroyWindow(window);
SDL_Quit();
return 0;

}
