#include "video_system.h"

void VideoSystem::videoInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        return;
    }

    window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        SDL_Quit();
        return;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
    if (renderer == nullptr) {
        SDL_DestroyWindow(window);
        SDL_Quit();
        return;
    }
}
