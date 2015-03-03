#include "SDL2/SDL.h"

class VideoSystem {
private:
    VideoSystem(){};
	VideoSystem(VideoSystem&){};

    SDL_Window* window;
    SDL_Renderer* renderer;
public:
    static VideoSystem& getInstance() {
        VideoSystem videoSystem;
        return videoSystem;
    }

    void videoInit();
};