#include "Var.h"

void MALLOC_VAR(Var *var){
    var->KEY_DOWN_STATUS = malloc(sizeof(int*));
    var->XY_CASE_MAT = malloc(sizeof(matrix));
    var->camera = malloc(sizeof(SDL_Rect));
    var->gridDestRect = malloc(sizeof(SDL_Rect));
    var->toolbar = malloc(sizeof(Toolbar));
    var->menu = malloc(sizeof(Menu));
    var->toolbar->toolbarSrcRect = malloc(sizeof(SDL_Rect));
    var->toolbar->toolbarDestRect = malloc(sizeof(SDL_Rect));
}

void DESTROY_VAR(Var *var){
    SDL_DestroyWindow(var->window);
    SDL_DestroyRenderer(var->renderer);
    SDL_DestroyTexture(var->texture);
    SDL_DestroyTexture(var->toolbar->toolbarTexture);
    free(var->KEY_DOWN_STATUS);
    DESTROY_MATRIX(*var->XY_CASE_MAT);
    free(var->camera);
    free(var->gridDestRect);
    free(var->toolbar);
    free(var->menu);
    free(var->toolbar->toolbarSrcRect);
    free(var->toolbar->toolbarDestRect);

}