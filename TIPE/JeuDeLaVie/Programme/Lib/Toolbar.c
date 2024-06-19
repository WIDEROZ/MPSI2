#include "Toolbar.h"

void LOAD_MENU(Var *var){
    /* Menu de 80 pixels de hauteur */
    SDL_Texture* onglets = SDL_CreateTexture(var->renderer, PIXEL_FORMAT, TEXTURE_ACCESS, TOOLBAR_WIDTH, 80);
    if (onglets == NULL){
        ExitWithError("Texture creation failed");
    }
    
    SDL_Texture* parametres = SDL_CreateTexture(var->renderer, PIXEL_FORMAT, TEXTURE_ACCESS, TOOLBAR_WIDTH, TOOLBAR_HEIGHT-80);
    if (parametres == NULL){
        ExitWithError("Texture creation failed");
    }

    SDL_Texture* evolution = SDL_CreateTexture(var->renderer, PIXEL_FORMAT, TEXTURE_ACCESS, TOOLBAR_WIDTH, TOOLBAR_HEIGHT-80);
    if (evolution == NULL){
        ExitWithError("Texture creation failed");
    }

    SDL_Texture* structures = SDL_CreateTexture(var->renderer, PIXEL_FORMAT, TEXTURE_ACCESS, TOOLBAR_WIDTH, TOOLBAR_HEIGHT-80);
    if (structures == NULL){
        ExitWithError("Texture creation failed");
    }
    
    var->menu->onglets = onglets;
    var->menu->parametres = parametres;
    var->menu->evolution = evolution;
    var->menu->structures = structures;

    var->menu->menuSrcRect = malloc(sizeof(SDL_Rect));
    var->menu->menuDestRect = malloc(sizeof(SDL_Rect));

}

void TOOLBAR_INIT(Var *var){

    VERIF_SDL_COMMAND(SDL_SetRenderTarget(var->renderer, var->toolbar->toolbarTexture), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(var->renderer, 0, 0, 0, 255), "SetRenderDrawColor");
    VERIF_SDL_COMMAND(SDL_RenderClear(var->renderer), "RenderClear");
    

    LOAD_MENU(var);


    // Copie une partie de la texture vers l'écran
    VERIF_SDL_COMMAND(SDL_SetRenderTarget(var->renderer, NULL), "SetRenderTarget");
    VERIF_SDL_COMMAND(SDL_RenderCopy(var->renderer, var->toolbar->toolbarTexture, var->toolbar->toolbarSrcRect, var->toolbar->toolbarDestRect), "RenderCopy");

}

void DESTROY_MENU(Menu *menu){
    SDL_DestroyTexture(menu->onglets);
    SDL_DestroyTexture(menu->parametres);
    SDL_DestroyTexture(menu->evolution);
    SDL_DestroyTexture(menu->structures);
    free(menu->menuSrcRect);
    free(menu->menuDestRect);
}
