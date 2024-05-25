#include "Button.h"

/*  
    Créé et affiche un bouton avec du texte sur la texture voulue aux coordonées x, y
    ATTENTION BIEN METTRE LES COORDONÉS DE LA TEXTURE
    
*/
Button * CREATE_BUTTON(SDL_Renderer * renderer, SDL_Texture *texture, int x, int y, int w, int h, char *text, TTF_Font *font, SDL_Color textColor, SDL_Color bgColor){
    
    Button * button = malloc(sizeof(Button));

    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w; 
    rect.h = h;

    button->position = rect;

    button->isClicked = 0;

    button->text= text;

    // ----- Text surface ----- //
    SDL_Surface *surfaceText = TTF_RenderText_Blended(font, text, textColor);
    if(surfaceText == NULL){
        SDL_ExitWithError("Surface font issue");
    }
    // ----- Text Surface -----//

    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, texture), "Set render target");

    // ----- Background Display ----- //
    VERIF_SDL_COMMAND(SDL_SetRenderDrawColor(renderer, bgColor.r, bgColor.g, bgColor.b, SDL_ALPHA_OPAQUE), "SetRenderDrawColor");
    VERIF_SDL_COMMAND(SDL_RenderFillRect(renderer, &rect), "Pas réussi a créer le background du bouton");
    // ----- Background Display ----- //
    
    
    // ----- Text Display ----- //
    SDL_Texture *tex = SDL_CreateTextureFromSurface(renderer, surfaceText);
    if(tex == NULL){
        SDL_ExitWithError("Texture font issue");
    }
    VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, tex, NULL, &rect), "RenderCopy");
    // ----- Text Display ----- //
    


    VERIF_SDL_COMMAND(SDL_SetRenderTarget(renderer, NULL), "Set render target");

    SDL_FreeSurface(surfaceText);
    SDL_DestroyTexture(tex);

    return button;

}


bool BUTTON_CLICK(Button * button, SDL_Event * e){
    if(e->type == SDL_MOUSEBUTTONDOWN
        && button->position.x <= (e->motion.x)-RENDER_WIDTH
        && (e->motion.x) - RENDER_WIDTH <= button->position.x + button->position.w
        && button->position.y <= (e->motion.y)
        && (e->motion.y) <= button->position.y + button->position.h){
        return true;

    }
    return false;
}



void DESTROY_BUTTON(Button *button){
    free(button);
}