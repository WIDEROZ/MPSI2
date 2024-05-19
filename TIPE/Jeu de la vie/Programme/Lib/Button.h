#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>

typedef struct Button
{
    // ATTENTION DONNER LES COORDONNES DU BOUTTON PAR RAPPORT A LA TEXTURE
    SDL_Texture *texture;
    SDL_Rect *position;
    char *text;
} Button;


Button * CREATE_BUTTON(SDL_Texture *texture, int x, int y, int w, int h, char *text);
