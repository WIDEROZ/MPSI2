#include <stdlib.h>
#include "Button.h"
Button * CREATE_BUTTON(SDL_Texture *texture, int x, int y, int w, int h){
    Button * button = malloc(sizeof(Button));
    button->texture = texture;

    SDL_Rect * rect = malloc(sizeof(SDL_Rect));
    rect->x = x;
    rect->y = y;
    rect->w = w;
    rect->h = h;
    button->position = rect;
    return button;

}

Button * CREATE_BUTTON(SDL_Texture *texture, int x, int y, int w, int h, char text){
    /*Create a button in adding text*/
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
