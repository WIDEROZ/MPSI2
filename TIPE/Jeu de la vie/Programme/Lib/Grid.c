#include "Grid.h"

// Fonction qui créée la grille de départ
// Variables globales utilisées : RENDER_WIDTH, RENDER_HEIGHT
void CREATE_GRID(SDL_Renderer *renderer, const int X, const int Y, int color[3]){
    /*  Start to create columns first and lines after
        X     : space between lines
        Y     : space between columns
        color : tab [R;G;B] */
    

    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], SDL_ALPHA_OPAQUE), "SetRenderDrawColor") ;// On peut mettre 255 a la place de SDL opaque

    

    for (int i = 0; i <= TEXTURE_WIDTH/X; i++) 
    {
        VERIF_SDL_COMMAND(SDL_RenderDrawLine(renderer, i*X, 0, i*X, TEXTURE_HEIGHT), "RenderDrawLine");
    }

    for(int j = 0; j <= TEXTURE_HEIGHT/Y; j++){
        VERIF_SDL_COMMAND(SDL_RenderDrawLine(renderer, 0, j*Y, TEXTURE_WIDTH, j*Y), "RenderDrawLine");
    }

    SDL_RenderPresent(renderer);
}

// Fonction qui créée la grille de départ a partir des cases
// Variables globales utilisées : RENDER_WIDTH, RENDER_HEIGHT
void CREATE_GRID_CASE(SDL_Renderer *renderer, const int caseX, const int caseY){
    /*  Start to create columns first and lines after
        caseX : case number on the lines
        caseY : case number on the columnn */
    

    int *color = malloc(3 * sizeof(int));
    color[0] = 255;
    color[1] = 255;
    color[2] = 255;

    CREATE_GRID(renderer, SQUARE_WIDTH, SQUARE_WIDTH, color);
    free(color);

}
