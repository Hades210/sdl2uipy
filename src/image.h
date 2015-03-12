#ifndef IMAGE_H
#define IMAGE_H

#include <SDL2/SDL_render.h>
#include "video_system.h"

#include <iostream>

class Image{
private:
    SDL_Texture* texture;
    int w, h;
public:
    static Image* fromFile(char* path);
    void draw(int x, int y);
    int getWidth() { return w; }
    int getHeight() { return h; }
	~Image() { SDL_DestroyTexture(texture); }
};

#endif