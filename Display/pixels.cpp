#include<stdio.h>
#include<SDL2/SDL.h>

const int WIDTH = 500;
const int HEIGHT = 500;

const int pixel_size = 50;

int main(int argc , char* args[]){

int running = 1;
SDL_Event event;
SDL_Window* window = NULL;
SDL_Surface* surface = NULL;

SDL_Init(SDL_INIT_VIDEO);
window = SDL_CreateWindow("pixels_shit" , 0, 0, WIDTH , HEIGHT, SDL_WINDOW_SHOWN);
surface = SDL_GetWindowSurface(window);
int data[5] = {1, 0, 1, 1, 0};

while(running){
while(SDL_PollEvent(&event)) if(event.type == SDL_QUIT) running = 0;

int x, y;
x = 0;
y = 0;

SDL_FillRect(surface, NULL , SDL_MapRGB(surface -> format, 00, 00, 00));
for (int i = 0; i <= 4; i++){
SDL_Rect pixel = {x, y, pixel_size , pixel_size};
if( data[i] == 1 ) SDL_FillRect(surface, &pixel , SDL_MapRGB(surface -> format, 255, 255, 255));
x+= pixel_size;

}
SDL_UpdateWindowSurface(window);

SDL_Delay(10);


}
SDL_DestroyWindow(window);
SDL_Quit();
return 0;
}

