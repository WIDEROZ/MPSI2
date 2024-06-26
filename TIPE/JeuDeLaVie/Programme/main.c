#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>
#include <SDL_ttf.h>

/* !!! ATTENTION !!! */
/* --- Toutes les fichiers sont dépendants --- */
/* --- Changer l'ordre mènerait à la perte de toute logique ---*/
#include "Lib/Error.c"
#include "Lib/Array.c"
#include "Lib/Matrix.c"
#include "Lib/Var.c"
#include "Lib/Toolbar.c"
#include "Lib/Menu.c"
#include "Lib/Grid.c"
#include "Lib/Button.c"
#include "Lib/eventGestion.c"



int main(int argc, char **argv){
    // ----- Vérifie si il y des erreur sur les définitions ----- //
    DefinitionError();

    // ----- Initialisation de la fenetre, du rendu et des textures ----- //
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    SDL_Texture *toolbarTexture = NULL;
    
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    // ----- TTF ----- //
    // Initialisation
    VERIF_SDL_COMMAND(SDL_Init(SDL_INIT_VIDEO), "INIT_VIDEO"); // SDL_INIT_VIDEO | SDL_INIT_AUDIO
    
    // Fonts
    VERIF_SDL_COMMAND(TTF_Init(), "TTF init");
    TTF_Font *font = TTF_OpenFont("./font/open-sans/OpenSans-Regular.ttf", 128);
    if (font == NULL){
        SDL_ExitWithError("Font issue");
    }




    // ----- Creation de la fenêtre : -----//

    
    window = SDL_CreateWindow("Fenêtre Titrée", 70, 0, RENDER_WIDTH, RENDER_HEIGHT, 0); // Pour le dernier on peut mettre un flag : SDL_WINDOW_FULLSCREEN par exemple
    if(window == NULL){
        ExitWithError("Window creation failed");
    }

    // ----- Creation des rendu ----- //: 
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE);
    if(renderer == NULL){
        ExitWithError("Renderer creation failed");
    }




    /* Flags (pour le deuxième argument de create renderer) :
    SDL_RENDERER_SOFTWARE (plus le   proc)
    SDL_RENDERER_ACCELERATED (plus pour la carte graphique MDRRR)
    SDL_RENDERER_PRESENTVSYNC (TT est dans le nom)
    SDL_RENDERER_TARGETTEXTURE (jsp)
    */

   /* 
   ----- Sinon pour la création de la fenêtre et du rendu : -----
    if(SDL_CreateWindowAndRender(800, 600, &window, &renderer)!=0){
        SDL_ExitWithError("Window or renderer creation failed");
    } 
   */

    // ----- Création de la texture ----- //
    texture = SDL_CreateTexture(renderer, PIXEL_FORMAT, TEXTURE_ACCESS, TEXTURE_WIDTH, TEXTURE_HEIGHT);
    if (texture == NULL){
        ExitWithError("Texture creation failed");
    }

    
    toolbarTexture = SDL_CreateTexture(renderer, PIXEL_FORMAT, TEXTURE_ACCESS, TOOLBAR_WIDTH, TOOLBAR_HEIGHT);
    if (toolbarTexture == NULL){
        ExitWithError("Texture creation failed");
    }


    
    // ----- Création des rectangles ----- //
    SDL_Rect *camera = malloc(sizeof(SDL_Rect));
    SDL_Rect *gridDestRect = malloc(sizeof(SDL_Rect));
    SDL_Rect *toolbarSrcRect = malloc(sizeof(SDL_Rect));
    SDL_Rect *toolbarDestRect = malloc(sizeof(SDL_Rect));


    
    camera->x = 0;
    camera->y = 0;
    camera->w = GRID_DISP_WIDTH;
    camera->h = GRID_DISP_HEIGHT;

    gridDestRect->x = 0;
    gridDestRect->y = 0;
    gridDestRect->w = GRID_DISP_WIDTH;
    gridDestRect->h = GRID_DISP_HEIGHT;

    toolbarSrcRect->x = 0;
    toolbarSrcRect->y = 0;
    toolbarSrcRect->w = TOOLBAR_WIDTH;
    toolbarSrcRect->h = TOOLBAR_HEIGHT;

    toolbarDestRect->x = GRID_DISP_WIDTH;
    toolbarDestRect->y = 0;
    toolbarDestRect->w = TOOLBAR_WIDTH;
    toolbarDestRect->h = TOOLBAR_HEIGHT;
    
    
    // ----- Déclaration des variables ----- //
    SDL_bool program_launched = SDL_TRUE;

    // Tableau des touches abaissés
    int * KEY_DOWN_STATUS = NULL;
    KEY_DOWN_STATUS = CREATE_TAB_0(315);


    // Variable pour savoir si la souris est pressée
    bool* isMouseButtonPressed = malloc(sizeof(bool));
    *isMouseButtonPressed = false;

    // savoir si la souris à précédement été bougée
    bool* MOUSE_MOVING = malloc(sizeof(bool));
    *MOUSE_MOVING = false;


    // Matrice des cases de la grille

    matrix matmp = CREATE_MATRIX(CASE_NUMBER_WIDTH, CASE_NUMBER_HEIGHT);
    matrix *XY_CASE_TAB = malloc(sizeof(matrix));
    XY_CASE_TAB = &matmp;
    
    // ---------- Var ---------- //
    Var *var = malloc(sizeof(var));
    
    MALLOC_VAR(var);
    var->window = window;
    var->renderer = renderer;
    var->texture = texture; 
    var->toolbar->toolbarTexture = toolbarTexture;
    var->KEY_DOWN_STATUS = KEY_DOWN_STATUS;
    var->XY_CASE_MAT = XY_CASE_TAB;
    var->camera = camera;
    var->gridDestRect = gridDestRect;
    var->toolbar->toolbarSrcRect = toolbarSrcRect;
    var->toolbar->toolbarDestRect = toolbarDestRect;
    
    // Initialisation de la barre d'outils
    TOOLBAR_INIT(var);

    while (program_launched)
    {
        
        SDL_Event *event = malloc(sizeof(SDL_Event));
        program_launched = GESTION(var, *event, isMouseButtonPressed, MOUSE_MOVING);
        
        // Actualise le rendu
        VERIF_SDL_COMMAND(SDL_RenderCopy(var->renderer, var->texture, var->camera, var->gridDestRect), "RenderCopy");
        VERIF_SDL_COMMAND(SDL_RenderCopy(var->renderer, var->toolbar->toolbarTexture, var->toolbar->toolbarSrcRect, var->toolbar->toolbarDestRect), "RenderCopy");
        SDL_RenderPresent(var->renderer);
        

    }
    printf("quit \n");


    
    // ----- Clear le rendu + vérif erreur ----- //
    VERIF_SDL_COMMAND(SDL_RenderClear(var->renderer), "RenderClear");
    



    // BIIIIIIIIIIIIIIIIIIIIIIIG FREE //
    DESTROY_MENU(var->menu);
    DESTROY_VAR(var);
    

    TTF_CloseFont(font);
    TTF_Quit();
    SDL_Quit();
    return EXIT_SUCCESS;
}



// gcc -o main main.c $(sdl2-config --cflags --libs) && ./main
// gcc -o main main.c -l SDL2_ttf $(sdl2-config --cflags --libs) && ./main
// Les fichiers SDL sont dans : usr/include/SDL2
