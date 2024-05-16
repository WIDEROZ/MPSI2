#include "Toolbar.h"

void TOOLBAR_INIT(SDL_Renderer * renderer, SDL_Rect *toolbarRect){
    toolbarRect -> x = RENDER_WIDTH;
    toolbarRect -> y = RENDER_HEIGHT;
    toolbarRect -> w = TOOLBAR_WIDTH;
    toolbarRect -> h = TOOLBAR_HEIGHT;

}