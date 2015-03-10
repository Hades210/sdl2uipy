#include "events.h"

SDL_Event* getEvent() {
    SDL_Event* event = new SDL_Event();
    SDL_PollEvent(event);
    return event;
}