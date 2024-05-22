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
void CASE_CLICK(SDL_Window *window, SDL_Renderer *renderer, matrix* XY_CASE_TAB, const int x, const int y){
    /* Fonction qui dessine un rectangle dans la case */
    // Case de la texture sur lequel on est : 
    int CASE_X = GET_CASE_FROM_COORD_X(x);
    int CASE_Y = GET_CASE_FROM_COORD_Y(y);
    

    // Ajout de la case dans la matrice
    if((0 <= x <= TEXTURE_WIDTH) && (0 <= y <= TEXTURE_HEIGHT))
    {
        int Case = XY_CASE_TAB -> mat[CASE_X][CASE_Y];
        if(XY_CASE_TAB -> mat[CASE_X][CASE_Y] == 0){

            XY_CASE_TAB -> mat[CASE_X][CASE_Y] = 1;

            // On change la couleur du rectangle en blanc
            VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE), "SetRenderDrawColor"); // On peut mettre 255 a la place de SDL opaque

        }
        else{
            XY_CASE_TAB -> mat[CASE_X][CASE_Y] = 0;

            // On change la couleur du rectangle en noir
            VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE), "SetRenderDrawColor"); // On peut mettre 255 a la place de SDL opaque
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

    VERIF_SDL_COMMAND(SDL_RenderFillRect(renderer, rectangle), "RenderFillRect");

    SDL_RenderPresent(renderer);

    free(rectangle);
    

}

