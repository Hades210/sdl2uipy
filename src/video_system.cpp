#include "video_system.h"

#include <iostream>
#include <SDL2/SDL_image.h>

using std::cout;
using std::endl;

void VideoSystem::videoInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		cout << "Failed to init SDL" << endl;
        return;
    }

    window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
		cout << "Failed to create window" << endl;
        SDL_Quit();
        return;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
    if (renderer == nullptr) {
		cout << "Failed to create renderer" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return;
    }
}

void VideoSystem::flipScreen() {
    SDL_RenderPresent(renderer);
}
