// ---------- Structure des variables importantes ---------- //
    /*  Liste :

        window
        renderer
        texture
        toolbarTexture

        KEY_DOWN_STATUS
        XY_CASE_TAB

        camera
        gridDestRect
        toolbarSrcRect
        toolbarDestRect
    */
typedef struct var{
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    SDL_Texture *toolbarTexture;

    int *KEY_DOWN_STATUS;
    matrix *XY_CASE_TAB;

    SDL_Rect *camera;
    SDL_Rect *gridDestRect;
    SDL_Rect *toolbarSrcRect;
    SDL_Rect *toolbarDestRect;

} Var;