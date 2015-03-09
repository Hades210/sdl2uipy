#ifndef IMAGE_H
#define IMAGE_H

#include <SDL2/SDL_render.h>
#include "video_system.h"

class Image{
private:
    SDL_Texture* texture;
    int w, h;
public:
    static Image* fromFile(char* path);
    void draw(int x, int y);
};

#endif