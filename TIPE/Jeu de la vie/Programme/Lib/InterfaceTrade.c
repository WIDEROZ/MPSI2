#include "InterfaceTrade.h"

// Variables globales utilisées : RENDER_WIDTH, CASE_NUMBER_WIDTH
int GET_CASE_FROM_COORD_X(int x){
    /* Fonction qui renvoie le numéro de la case à la coordonée x */
    return x/SQUARE_WIDTH;

}

// Variables globales utilisées : RENDER_HEIGHT, CASE_NUMBER_HEIGHT
int GET_CASE_FROM_COORD_Y(int y){
    /* Fonction qui renvoie le numéro de la case à la coordonée y */
    return y/SQUARE_WIDTH;

}


// Fonction qui dessine un rectangle dans la case
// Variables globales utilisées : RENDER_WIDTH, RENDER_HEIGHT, SQUARE_WIDTH
void SDL_CASE_CLICK(SDL_Window *window, SDL_Renderer *renderer, matrix* XY_CASE_TAB , const int x, const int y){
    /* Fonction qui dessine un rectangle dans la case */
    // Ajout de la case dans la matrice
    if((0 <= x <= RENDER_WIDTH) && (0 <= y <= RENDER_HEIGHT))
    {
        int Case = XY_CASE_TAB -> mat[GET_CASE_FROM_COORD_X(x)][GET_CASE_FROM_COORD_Y(y)];
        if(XY_CASE_TAB -> mat[GET_CASE_FROM_COORD_X(x)][GET_CASE_FROM_COORD_Y(y)] == 0){

            XY_CASE_TAB -> mat[GET_CASE_FROM_COORD_X(x)][GET_CASE_FROM_COORD_Y(y)] = 1;

            // On change la couleur du rectangle en blanc
            if(SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
            SDL_ExitWithError("Impossible to create the color for the render");
            }
        }
        else{
            XY_CASE_TAB -> mat[GET_CASE_FROM_COORD_X(x)][GET_CASE_FROM_COORD_Y(y)] = 0;

            // On change la couleur du rectangle en noir
            if(SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
            SDL_ExitWithError("Impossible to create the color for the render");
            }
        }
    }
    else{
        ExitWithError("Out of range of the matrix");
    }
    

    // Création graphique du rectangle
    // Les +- 1 sevent a ne pas redéssiner sur la ligne de la grille
    SDL_Rect *rectangle = malloc(sizeof(SDL_Rect));
    rectangle->x = (x/SQUARE_WIDTH)*SQUARE_WIDTH+1;
    rectangle->y = (y/SQUARE_WIDTH)*SQUARE_WIDTH+1;
    rectangle->w = SQUARE_WIDTH-1;
    rectangle->h = SQUARE_WIDTH-1;

    if(SDL_RenderFillRect(renderer, rectangle) != 0){
        SDL_ExitWithError("Cannot create the rectangle");
    }

    SDL_RenderPresent(renderer);

    free(rectangle);
    

}

