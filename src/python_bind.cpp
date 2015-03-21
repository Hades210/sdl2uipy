#include "python_bind.h"
#include "video_system.h"

void videoInit() {
    VideoSystem::getInstance().videoInit();
}

void flipScreen() {
    VideoSystem::getInstance().flipScreen();
}

bool videoIsInit() {
    return SDL_WasInit(SDL_INIT_EVERYTHING) != 0;
}