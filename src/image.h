#include <SDL2/SDL_render.h>

class Image{
private:
    SDL_Texture* texture;
public:
    static Image* fromFile(char* path);
    void draw(int x, int y);
};