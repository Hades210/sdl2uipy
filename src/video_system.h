#ifndef VIDEO_SYSTEM_H
#define VIDEO_SYSTEM_H

#include "SDL2/SDL.h"
#include "image.h"

class VideoSystem {
private:
    VideoSystem(){};
	VideoSystem(VideoSystem&){};

    SDL_Window* window;
    SDL_Renderer* renderer;
public:
    static VideoSystem& getInstance() {
        static VideoSystem videoSystem;
        return videoSystem;
    }

    void videoInit();
    void flipScreen();
    SDL_Renderer* getRenderer() { return renderer; }
};

#endif