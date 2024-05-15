#include "RenderGestion.h"

void GRID_DISPLAY_CREATION(SDL_Renderer *renderer, SDL_Texture * texture, SDL_Rect camera){
    // Création de la texture

    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, texture), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255), "SetRenderDrawColor");
    VERIF_SDL_COMMAND(SDL_RenderClear(renderer), "RenderClear");

    CREATE_GRID_CASE(renderer, CASE_NUMBER_WIDTH, CASE_NUMBER_HEIGHT);

    // Copie une partie de la texture vers l'écran
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, texture, &camera, NULL), "RenderCopy");

    SDL_RenderPresent(renderer);
}


void CASE_CLICK_DISPLAY(SDL_Window *window, SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect camera,  matrix* XY_CASE_TAB , const int x, const int y){
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, texture), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255), "SetRenderDrawColor");

    CASE_CLICK(window, renderer, XY_CASE_TAB, x+camera.x, y+camera.y);

    // Copie une partie de la texture vers l'écran
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, texture, &camera, NULL), "RenderCopy");

    SDL_RenderPresent(renderer);
}

void MOVE_CAMERA_MOUSE(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect *camera, int xRel, int yRel){
    camera -> x -= xRel;
    camera -> y -= yRel;
}
