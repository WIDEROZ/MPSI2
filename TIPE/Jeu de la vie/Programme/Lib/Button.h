#include <stdlib.h>
#include <SDL.h>

typedef struct Button
{
    SDL_Texture *texture;
    SDL_Rect *position;
    char text;
} Button;
