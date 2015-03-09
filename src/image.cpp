#include "image.h"
#include "SDL2/SDL_image.h"

#include <iostream>

using std::cout;
using std::endl;

Image *Image::fromFile(char *path) {
    Image *image = new Image();
    SDL_Renderer* renderer = VideoSystem::getInstance().getRenderer();
    image->texture = IMG_LoadTexture(VideoSystem::getInstance().getRenderer(), path);
    if (!image->texture) {
        cout << "Failed to load image" << endl;
        cout << SDL_GetError() << endl;
        return nullptr;
    }
    SDL_QueryTexture(image->texture, nullptr, nullptr, &image->w, &image->h);
    return image;
}

void Image::draw(int x, int y) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_RenderCopy(VideoSystem::getInstance().getRenderer(), texture, NULL, &rect);
}
