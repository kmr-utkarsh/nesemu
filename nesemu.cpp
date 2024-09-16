#include <iostream>
#include "SDL.h"

#define PROJECT_NAME "nesemu"

int main(int argc, char **argv) {
    if(argc != 1) {
        std::cout << argv[0] <<  "takes no arguments.\n";
        return 1;
    }
    std::cout << "This is project " << PROJECT_NAME << ".\n";

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, 2, 2);

    SDL_SetRenderDrawColor(renderer, 123, 56, 128, 128);
    SDL_Delay(10000);

    return 0;
}
