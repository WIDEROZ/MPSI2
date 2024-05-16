#include "Toolbar.h"

void TOOLBAR_INIT(SDL_Renderer * renderer, SDL_Rect *toolbarSrcRect, SDL_Rect *toolbarDestRect){
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, toolbarRect), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255), "SetRenderDrawColor");
    VERIF_SDL_COMMAND(SDL_RenderClear(renderer), "RenderClear");



    // Copie une partie de la texture vers l'écran
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, texture, toolbarSrcRect, toolbarDestRect), "RenderCopy");

}