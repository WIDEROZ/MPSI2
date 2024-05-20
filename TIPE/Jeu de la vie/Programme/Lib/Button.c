#include "Button.h"

/*  
    Créé et affiche un bouton avec du texte sur la texture voulue aux coordonées x, y
    ATTENTION BIEN METTRE LES COORDONÉS DE LA TEXTURE
    
*/
Button * CREATE_BUTTON(SDL_Renderer * renderer, SDL_Texture *texture, int x, int y, int w, int h, char *text){
    
    Button * button = malloc(sizeof(Button));
    button->texture = texture;

    SDL_Rect * rect = malloc(sizeof(SDL_Rect));
    rect->x = x;
    rect->y = y;
    rect->w = w;
    rect->h = h;
    button->position = rect;

    button->isClicked = 0;

    button -> text= text;

    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, texture), "Set render target");
    
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE), "SetRenderDrawColor");
    VERIF_SDL_COMMAND(SDL_RenderFillRect(renderer, rect), "Pas réussi a créer le bouton");

    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "Set render target");
    
    return button;

}


bool BUTTON_CLICK(Button * button, SDL_Event * e){
    if(e->type == SDL_MOUSEBUTTONDOWN
        && button->position->x <= (e->motion.x)-RENDER_WIDTH
        && (e->motion.x) - RENDER_WIDTH <= button->position->x + button->position->w
        && button->position->y <= (e->motion.y)
        && (e->motion.y) <= button->position->y + button->position->h){
        return true;

    }
    return false;
}

