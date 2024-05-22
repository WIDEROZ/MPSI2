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

