#include "Grid.h"


void CREATE_GRID(SDL_Renderer *renderer, const int X, const int Y, int color[3]){
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], SDL_ALPHA_OPAQUE), "SetRenderDrawColor") ;// On peut mettre 255 a la place de SDL opaque

    

    for (int i = 0; i <= TEXTURE_WIDTH/X; i++){
        VERIF_SDL_COMMAND(SDL_RenderDrawLine(renderer, i*X, 0, i*X, TEXTURE_HEIGHT), "RenderDrawLine");
    }

    for(int j = 0; j <= TEXTURE_HEIGHT/Y; j++){
        VERIF_SDL_COMMAND(SDL_RenderDrawLine(renderer, 0, j*Y, TEXTURE_WIDTH, j*Y), "RenderDrawLine");
    }

    SDL_RenderPresent(renderer);
}


void CREATE_GRID_CASE(SDL_Renderer *renderer, const int caseX, const int caseY){
    int *color = malloc(3 * sizeof(int));
    color[0] = 255;
    color[1] = 255;
    color[2] = 255;

    CREATE_GRID(renderer, SQUARE_WIDTH, SQUARE_WIDTH, color);
    free(color);

}


void GRID_DISPLAY_CREATION(SDL_Renderer *renderer, SDL_Texture * texture, SDL_Rect camera){
    
    // On met en cible du dessin la texture
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, texture), "SetRenderTarget");
    // On nétoie entièrement la texture du rendu
    VERIF_SDL_COMMAND(SDL_RenderClear(renderer), "RenderClear");

    CREATE_GRID_CASE(renderer, CASE_NUMBER_WIDTH, CASE_NUMBER_HEIGHT);

    // On remet la cible du rendu sur la fenètre en entier
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "SetRenderTarget");
}


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


void CASE_CLICK_CASE(SDL_Window *window, SDL_Renderer *renderer, matrix* XY_CASE_TAB, const int CASE_X, const int CASE_Y){
    /* Fonction qui dessine un rectangle dans la case */
    

    // Ajout de la case dans la matrice
    if((0 <= CASE_X <= XY_CASE_TAB.weight) && (0 <= y <= XY_CASE_TAB.height)){
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
    
    

    // Création graphique du rectangle
    // Les +- 1 sevent a ne pas redéssiner sur la ligne de la grille
    SDL_Rect *rectangle = malloc(sizeof(SDL_Rect));
    rectangle->x = CASE_X*SQUARE_WIDTH+1;
    rectangle->y = CASE_Y*SQUARE_WIDTH+1;
    rectangle->w = SQUARE_WIDTH-1;
    rectangle->h = SQUARE_WIDTH-1;

    VERIF_SDL_COMMAND(SDL_RenderFillRect(renderer, rectangle), "RenderFillRect");

    SDL_RenderPresent(renderer);

    free(rectangle);
    }

    else{
        ExitWithError("Out of range of the matrix");
    }
    

}

// Fonction qui dessine un rectangle dans la case
// Variables globales utilisées : RENDER_WIDTH, RENDER_HEIGHT, SQUARE_WIDTH
void CASE_CLICK_COORDS(SDL_Window *window, SDL_Renderer *renderer, matrix* XY_CASE_TAB, const int x, const int y){
    /* Fonction qui dessine un rectangle dans la case */
    // Case de la texture sur lequel on est : 
    int CASE_X = GET_CASE_FROM_COORD_X(x);
    int CASE_Y = GET_CASE_FROM_COORD_Y(y);
    
    
    CASE_CLICK_CASE(window, renderer, XY_CASE_TAB, CASE_X, CASE_Y);
    
}



void CASE_CLICK_DISPLAY(SDL_Window *window, SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect camera,  matrix* XY_CASE_TAB , const int x, const int y){
    if (x <= GRID_DISP_WIDTH && y <= GRID_DISP_HEIGHT){
    // On met en cible du dessin la texture
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, texture), "SetRenderTarget");

    CASE_CLICK(window, renderer, XY_CASE_TAB, x+camera.x, y+camera.y);

    // On remet la cible du rendu sur la fenètre en entier
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "SetRenderTarget");
    }
}


void MOVE_CAMERA_MOUSE(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect *camera, int xRel, int yRel){
    int x = camera -> x - xRel;
    int y = camera -> y - yRel;

    if(0 <= x && x <= TEXTURE_WIDTH-RENDER_WIDTH && 0 <= y && y <= TEXTURE_HEIGHT-RENDER_HEIGHT){
        camera -> x = x;
        camera -> y = y;
    }

}

