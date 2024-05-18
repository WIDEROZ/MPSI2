#include "Button.h"

Button * CREATE_BUTTON(SDL_Texture *texture, int x, int y, int w, int h, char text){
    /*Créé un bouton avec du text*/
    Button * button = malloc(sizeof(Button));
    button->texture = texture;

    SDL_Rect * rect = malloc(sizeof(SDL_Rect));
    rect->x = x;
    rect->y = y;
    rect->w = w;
    rect->h = h;
    button->position = rect;

    button -> text= text;
    return button;

}

bool BUTTON_CLICK(Button * button, SDL_Event * e){
    if(e->type == SDL_MOUSEBUTTONDOWN
        && button->position->x <= (e->motion->x)-RENDER_WIDTH
        && (e->motion->x) - RENDER_WIDTH <= button->position->x + button->position->w
        && button->position->y <= (e->motion->y)
        && (e->motion->y) <= button->position->y + button->position->h){
        return true;

    }
    return false;
}
