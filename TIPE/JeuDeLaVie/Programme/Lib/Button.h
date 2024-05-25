#include "GlobalDef.h"

typedef struct Button
{
    SDL_Texture *backgroundTexture;
    SDL_Texture *textTexture;
    SDL_Rect position;
    int isClicked;
    char *text;
} Button;


Button * CREATE_BUTTON(SDL_Renderer * renderer, SDL_Texture *texture, int x, int y, int w, int h, char *text, TTF_Font *font, SDL_Color textColor, SDL_Color bgColor);
