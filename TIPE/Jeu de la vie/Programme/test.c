#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>


int main(int argc, char const *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *gridSurface = NULL;
    SDL_Surface *toolSurface = NULL;
    SDL_Texture *grid = NULL;
    SDL_Texture *toolbarTexture = NULL;
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    SDL_Init(SDL_INIT_VIDEO), "INIT_VIDEO";

    window = SDL_CreateWindow("Fenêtre Titrée", 70, 0, 1840, 1200, 0); // Pour le dernier on peut mettre un flag : SDL_WINDOW_FULLSCREEN par exemple
    if(window == NULL){
        ExitWithError("Window creation failed");
    }

    // ----- Creation des rendu ----- //: 
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE);
    if(renderer == NULL){
        ExitWithError("Renderer creation failed");
    }


    return 0;
}
