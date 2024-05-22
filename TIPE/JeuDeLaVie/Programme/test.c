#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

#include "Lib/GlobalDef.h"
#include "Lib/Error.c"


int main(int argc, char const *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *windowSurface = NULL;
    SDL_Surface *gridSurface = NULL;
    SDL_Surface *toolSurface = NULL;
    SDL_Texture *texture = NULL;
    SDL_Texture *toolbarTexture = NULL;
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    SDL_Init(SDL_INIT_VIDEO), "INIT_VIDEO";

    window = SDL_CreateWindow("Fenêtre Titrée", 70, 0, 1840, 1200,0); // Pour le dernier on peut mettre un flag : SDL_WINDOW_FULLSCREEN par exemple
    if(window == NULL){
        ExitWithError("Window creation failed");
    }

    // ----- Creation des rendu ----- //: 
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE);
    if(renderer == NULL){
        ExitWithError("Renderer creation failed");
    }

    // ----- Création de la texture ----- //
    

    
    


    // ----- Création des surfaces -----//
    windowSurface = SDL_GetWindowSurface(window);
    if (windowSurface == NULL)
    {
        ExitWithError("Surface ccreation failed");
    }

    gridSurface = SDL_CreateRGBSurfaceWithFormat(0, GRID_DISP_WIDTH, GRID_DISP_HEIGHT, 32, SDL_PIXELFORMAT_RGBA32);
    if (gridSurface == NULL)
    {
        ExitWithError("Surface ccreation failed");
    }

    toolSurface = SDL_CreateRGBSurfaceWithFormat(0, TOOLBAR_WIDTH, TOOLBAR_HEIGHT, 32, SDL_PIXELFORMAT_RGBA32);
    if (toolSurface == NULL)
    {
        ExitWithError("Surface creation failed");
    }

    texture = SDL_CreateTextureFromSurface(renderer, gridSurface);
    if (texture == NULL){
        ExitWithError("Texture creation failed");
    }

    toolbarTexture = SDL_CreateTextureFromSurface(renderer, toolSurface);
    if (toolbarTexture == NULL){
        ExitWithError("Texture creation failed");
    }


    


// ----- Création des rectangles ----- //
    SDL_Rect camera;
    SDL_Rect gridDestRect;
    SDL_Rect toolbarSrcRect;
    SDL_Rect toolbarDestRect;    

    camera.x = 0;
    camera.y = 0;
    camera.w = GRID_DISP_WIDTH;
    camera.h = GRID_DISP_HEIGHT;

    gridDestRect.x = 0;
    gridDestRect.y = 0;
    gridDestRect.w = GRID_DISP_WIDTH;
    gridDestRect.h = GRID_DISP_HEIGHT;

    toolbarSrcRect.x = 0;
    toolbarSrcRect.y = 0;
    toolbarSrcRect.w = TOOLBAR_WIDTH;
    toolbarSrcRect.h = TOOLBAR_HEIGHT;

    toolbarDestRect.x = GRID_DISP_WIDTH;
    toolbarDestRect.y = 0;
    toolbarDestRect.w = TOOLBAR_WIDTH;
    toolbarDestRect.h = TOOLBAR_HEIGHT;

    SDL_bool program_launched = SDL_TRUE;



    VERIF_SDL_COMMAND(SDL_FillRect(toolSurface, NULL, SDL_MapRGBA(toolSurface->format, 0,0,255, 255)), "test");
    VERIF_SDL_COMMAND(SDL_BlitSurface(toolSurface, NULL, windowSurface, &toolbarDestRect), "Blit Surface");
    SDL_UpdateWindowSurface(window);


    SDL_Delay(1000);

    // ----- Clear le rendu + vérif erreur ----- //
    VERIF_SDL_COMMAND(SDL_RenderClear(renderer), "RenderClear");
    
    // Pointeurs SDL
    SDL_DestroyTexture(texture);
    SDL_DestroyTexture(toolbarTexture);
    SDL_DestroyRenderer(renderer);
    SDL_FreeSurface(windowSurface);
    SDL_FreeSurface(gridSurface);
    SDL_FreeSurface(toolSurface);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;

    return 0;
}
