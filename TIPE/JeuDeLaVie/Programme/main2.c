#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>

/* !!! ATTENTION !!! */
/* --- Toutes les fichiers sont dépendants --- */
/* --- Changer l'ordre mènerait à la perte de toute logique ---*/
#include "Lib/Error.c"
#include "Lib/Array.c"
#include "Lib/Matrix.c"
#include "Lib/Grid.c"
#include "Lib/InterfaceTrade.c"
#include "Lib/RenderGestion.c"
#include "Lib/Toolbar.c"

#include "Lib/Button.c"





int main(int argc, char **argv){
    // ----- Vérifie si il y des erreur sur les définitions ----- //
    DefinitionError();

    // ----- Initialisation de la fenetre, du rendu et de la texture ----- //
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    SDL_Texture *toolbarTexture = NULL;
    SDL_Surface *windowSurface=NULL;
    SDL_Surface *gridSurface=NULL;
    SDL_Surface *toolbarSurface=NULL;
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    VERIF_SDL_COMMAND(SDL_Init(SDL_INIT_VIDEO), "INIT_VIDEO"); // SDL_INIT_VIDEO | SDL_INIT_AUDIO



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

    // ----- Création des surfaces ----- //

    gridSurface = SDL_CreateRGBSurfaceWithFormat(0, GRID_DISP_WIDTH, GRID_DISP_HEIGHT, 32, PIXEL_FORMAT);
    if (gridSurface == NULL){
        ExitWithError("gridSurface Surface creation failed");
    }

    toolbarSurface = SDL_CreateRGBSurfaceWithFormat(0, TOOLBAR_WIDTH, TOOLBAR_HEIGHT, 32, PIXEL_FORMAT);
    if (toolbarSurface == NULL){
        ExitWithError("toolbarSurface Surface creation failed");
    }

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
    SDL_Rect camera;
    SDL_Rect gridDestRect;
    SDL_Rect toolbarSrcRect;
    SDL_Rect toolbarDestRect;


    camera.x = 0;
    camera.y = 0;
    camera.w = GRID_DISP_WIDTH;
    camera.h = GRID_DISP_HEIGHT;

    gridDestRect.x = 0;
    gridDestRect.y = 0;
    gridDestRect.w = GRID_DISP_WIDTH;
    gridDestRect.h = GRID_DISP_HEIGHT;

    toolbarSrcRect.x = 0;
    toolbarSrcRect.y = 0;
    toolbarSrcRect.w = TOOLBAR_WIDTH;
    toolbarSrcRect.h = TOOLBAR_HEIGHT;

    toolbarDestRect.x = GRID_DISP_WIDTH;
    toolbarDestRect.y = 0;
    toolbarDestRect.w = TOOLBAR_WIDTH;
    toolbarDestRect.h = TOOLBAR_HEIGHT;

    // Initialisation de la barre d'outils

    
    
    // ----- Déclaration des variables ----- //
    SDL_bool program_launched = SDL_TRUE;

    // Tableau des touches abaissés
    int * KEY_DOWN_STATUS = NULL;
    KEY_DOWN_STATUS = CREATE_TAB_0(314);

    // Variable pour savoir si la souris est pressée
    bool isMouseButtonPressed = false;

    // savoir si la souris à précédement été bougée
    bool MOUSE_MOVING = false;


    // Matrice des cases de la grille
    matrix *XY_CASE_TAB = malloc(sizeof(matrix));
    *XY_CASE_TAB = CREATE_MATRIX(CASE_NUMBER_WIDTH, CASE_NUMBER_HEIGHT);





    while (program_launched)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event)) // Elle va lire tout les évènements
        /*on a aussi : SDL_WaitEvent(&event) mais ca bloque la fenêtre*/
        {
            
            switch (event.type) // Le switch c'est comme un match en ocaml mais que pour les int
            {
                case SDL_KEYDOWN : 
                    switch (event.key.keysym.sym)
                    {
                    
                    case SDLK_b:
                        KEY_DOWN_STATUS[SDLK_b] = 1;
                        RENDER_TARGET(renderer, toolbarTexture, toolbarSrcRect);
                        SDL_Delay(1000);
                        
                        continue;



                    case SDLK_c:
                        KEY_DOWN_STATUS[SDLK_c] = 1;
                        GRID_DISPLAY_CREATION(renderer, texture, camera);
                        continue;

                    // ---------- Déplacement de la caméra ----------- //
                    case SDLK_q:
                        KEY_DOWN_STATUS[SDLK_q] = 1;
                        
                        if(camera.x - 10 >= 0){
                            camera.x -= 10;
                        }
                        else
                        {
                            camera.x = 0;
                        }
                        
                        continue;

                    case SDLK_d:
                        KEY_DOWN_STATUS[SDLK_d] = 1;
                        if(camera.x + 10 <= TEXTURE_WIDTH - RENDER_WIDTH){
                            camera.x += 10;
                        }
                        else
                        {
                            camera.x = TEXTURE_WIDTH - RENDER_WIDTH;
                        }
                        
                        continue;

                    case SDLK_z:
                        KEY_DOWN_STATUS[SDLK_z] = 1; 
                        if(camera.y - 10 >= 0){
                            camera.y -= 10;
                        }
                        else{
                            camera.y = 0;
                        }
                        continue;

                    case SDLK_s:
                        
                        KEY_DOWN_STATUS[SDLK_s] = 1;
                        
                        if(camera.y + 10 <= TEXTURE_HEIGHT - RENDER_HEIGHT){
                            camera.y += 10;
                        }
                        else{
                            camera.y = TEXTURE_HEIGHT - RENDER_HEIGHT;
                        }
                        
                        continue;

                    // ------ Fin du déplacement de la caméra ----- //

                
                    default:
                        
                        continue;
                    }
                
                case SDL_KEYUP : 
                    switch (event.key.keysym.sym)
                    {

                    case SDLK_b:
                        KEY_DOWN_STATUS[SDLK_b] = 0;
                        continue;

                    case SDLK_c:
                        KEY_DOWN_STATUS[SDLK_c] = 0;
                        continue;

                    
                    case SDLK_q:
                        KEY_DOWN_STATUS[SDLK_q] = 0;
                        continue;

                    case SDLK_d:
                        KEY_DOWN_STATUS[SDLK_d] = 0;
                        continue;
                    
                    case SDLK_z:
                        KEY_DOWN_STATUS[SDLK_z] = 0;
                        continue;

                    case SDLK_s:
                        KEY_DOWN_STATUS[SDLK_s] = 0;
                        continue;

                    
                    default:
                        continue;
                    }

                case SDL_MOUSEMOTION :
                    //printf("Coordonée : (%d, %d) \n", event.motion.x, event.motion.y);
                    //printf("Vitesse : (%d, %d) \n", event.motion.xrel, event.motion.yrel);
                    
                    
                    // Actualisation du déplacement de la caméra avec la souris
                    if(isMouseButtonPressed){
                        MOVE_CAMERA_MOUSE(renderer, texture, &camera, event.motion.xrel, event.motion.yrel);
                        MOUSE_MOVING = true;
                    }
                    
                    
                    
                    
                    
                    continue;

                case SDL_MOUSEBUTTONDOWN :
                    isMouseButtonPressed = true;
                    printf("x : %d, y : %d \n", event.motion.x, event.motion.y);
                    printf("Case x : %d, Case y : %d \n", GET_CASE_FROM_COORD_X(event.motion.x), GET_CASE_FROM_COORD_Y(event.motion.y));




                    continue;

                case SDL_MOUSEBUTTONUP : 
                    isMouseButtonPressed = false;
                    if (!MOUSE_MOVING)
                    {
                        CASE_CLICK_DISPLAY(window, renderer, texture, camera, XY_CASE_TAB, event.motion.x, event.motion.y);
                    }
                    MOUSE_MOVING = false;
                    
                    continue;



                case SDL_QUIT :
                    program_launched = SDL_FALSE;
                    printf("quit \n");
                    break;


                default:
                    break;
            }

        }

        
        

        
        // Actualise le rendu et les textures
        VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, texture, &camera, &gridDestRect), "RenderCopy");
        VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, toolbarTexture, &toolbarSrcRect, &toolbarDestRect), "RenderCopy");
        SDL_RenderPresent(renderer);

    }


    
    // ----- Clear le rendu + vérif erreur ----- //
    VERIF_SDL_COMMAND(SDL_RenderClear(renderer), "RenderClear");
    

    // Clear tout les pointeurs
    free(KEY_DOWN_STATUS);
    DESTROY_POINTER_MATRIX(XY_CASE_TAB);

    // Pointeurs SDL
    SDL_DestroyTexture(texture);
    SDL_DestroyTexture(toolbarTexture);
    SDL_FreeSurface(gridSurface);
    SDL_FreeSurface(toolbarSurface);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}



// gcc -o main main.c $(sdl2-config --cflags --libs) && ./main
// Les fichiers SDL sont dans : usr/include/SDL2
