#include "Grid.h"

// Fonction qui créée la grille de départ
// Variables globales utilisées : RENDER_WIDTH, RENDER_HEIGHT
void SDL_CREATE_GRID(SDL_Renderer *renderer, const int X, const int Y, int color[3]){
    /*  Start to create columns first and lines after
        X     : space between lines
        Y     : space between columns
        color : tab [R;G;B] */
    

    if(SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
        SDL_ExitWithError("Impossible to create the color for the render");
    }
    

    for (int i = 0; i <= RENDER_WIDTH/X; i++) 
    {
        if(SDL_RenderDrawLine(renderer, i*X, 0, i*X, RENDER_HEIGHT) != 0){
                SDL_ExitWithError("Impossible to create the column");
            }
    }

    for(int j = 0; j <= RENDER_HEIGHT/Y; j++){
            if(SDL_RenderDrawLine(renderer, 0, j*Y, RENDER_WIDTH, j*Y) != 0){
                SDL_ExitWithError("Impossible to create the line");
            }
    }
    SDL_RenderPresent(renderer);
}

// Fonction qui créée la grille de départ a partir des cases
// Variables globales utilisées : RENDER_WIDTH, RENDER_HEIGHT
void SDL_CREATE_GRID_CASE(SDL_Renderer *renderer, const int caseX, const int caseY, int color[3]){
    /*  Start to create columns first and lines after
        caseX : case number on the lines
        caseY : case number on the columns
        color : tab [R;G;B] */
    
    
    int X = RENDER_WIDTH/caseX;
    int Y = RENDER_HEIGHT/caseY;
    SDL_CREATE_GRID(renderer, X, Y, color);


}
