    /*  Liste :
        onglets : Navigation entres plusieurs catégories (en haut de la toolbar)
        parametres : Paramètres de la grille
        evolution : controle de l'évolution du jeu
        structures : Structures du jeu de la vie a copier sur la grille (usine à glider par exemple)

        menuSrcRect : Rectangle source pour prendre une section de la texture voulue sur la toolbar
        menuDestRect : Rectangle destination pour afficher sur la toolbar ce que le rectangle source à pris
    */
typedef struct Menu
{
    SDL_Texture* onglets;
    SDL_Texture* parametres;
    SDL_Texture* evolution;
    SDL_Texture* structures;
    

    SDL_Rect* menuSrcRect;
    SDL_Rect* menuDestRect;
}Menu;


typedef struct Toolbar
{
    SDL_Texture *toolbarTexture;
    SDL_Rect *toolbarSrcRect;
    SDL_Rect *toolbarDestRect;
}Toolbar;

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

    Toolbar *toolbar;
    Menu *menu;

    int *KEY_DOWN_STATUS;
    matrix *XY_CASE_MAT;

    SDL_Rect *camera;
    SDL_Rect *gridDestRect;
    

} Var;

void MALLOC_VAR(Var *var);

void DESTROY_VAR(Var *var);
