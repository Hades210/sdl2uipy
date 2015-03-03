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
        VideoSystem videoSystem;
        return videoSystem;
    }

    void videoInit();
    SDL_Renderer* getRenderer() { return renderer; }
};