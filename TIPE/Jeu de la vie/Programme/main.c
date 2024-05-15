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


int main(int argc, char **argv){
    // ----- Vérifie si il y des erreur sur les définitions ----- //
    DefinitionError();

    // ----- Initialisation de la fenetre, du rendu et de la texture ----- //
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    VERIF_SDL_COMMAND(SDL_Init(SDL_INIT_VIDEO), "INIT_VIDEO"); // SDL_INIT_VIDEO | SDL_INIT_AUDIO



    // ----- Creation de la fenêtre : -----//

    
    window = SDL_CreateWindow("Fenêtre Titrée", 70, 0, RENDER_WIDTH, RENDER_HEIGHT, 0); // Pour le dernier on peut mettre un flag : SDL_WINDOW_FULLSCREEN par exemple
    if(window == NULL){
        ExitWithError("Window creation failed");
    }
    
    // ----- Creation du rendu ----- //: 
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
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

    // Rectangle qu'on voit quand la fenètre s'ouvre
    SDL_Rect camera;
    camera.x = 0;
    camera.y = 0;
    camera.w = RENDER_WIDTH;
    camera.h = RENDER_HEIGHT;



    // ----- Déclaration des variables ----- //
    SDL_bool program_launched = SDL_TRUE;

    // Tableau des touches abaissés
    int * KEY_DOWN_STATUS = NULL;
    KEY_DOWN_STATUS = CREATE_TAB_0(314);

    // Variable pour savoir si la souris est pressée
    bool isMouseButtonPressed = false;


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
                    case SDLK_c:
                        KEY_DOWN_STATUS[SDLK_c] = 1;
                        GRID_DISPLAY_CREATION(renderer, texture, camera);
                        
                        continue;
                    

                    // ---------- Déplacement de la caméra ----------- //
                    case SDLK_q:
                        KEY_DOWN_STATUS[SDLK_q] = 1;
                        
                        if(camera.x - 10 > 0){
                            camera.x -= 10;
                        }
                        else
                        {
                            camera.x = 0;
                        }
                        
                        continue;

                    case SDLK_d:
                        KEY_DOWN_STATUS[SDLK_d] = 1;
                        if(camera.x + 10 < TEXTURE_WIDTH - RENDER_WIDTH){
                            camera.x += 10;
                        }
                        else
                        {
                            camera.x = TEXTURE_WIDTH - RENDER_WIDTH;
                        }
                        
                        continue;

                    case SDLK_z:
                        KEY_DOWN_STATUS[SDLK_z] = 1; 
                        if(camera.y - 10 > 0){
                            camera.y -= 10;
                        }
                        else{
                            camera.y = 0;
                        }
                        continue;

                    case SDLK_s:
                        
                        KEY_DOWN_STATUS[SDLK_s] = 1;
                        
                        if(camera.y + 10 < TEXTURE_HEIGHT - RENDER_HEIGHT){
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
                    if(){
                        
                    }
                    MOVE_CAMERA_MOUSE(renderer, texture, &camera);
                    
                    
                    
                    
                    continue;

                case SDL_MOUSEBUTTONDOWN :
                    isMouseButtonPressed = true;
                    printf("x : %d, y : %d \n", event.motion.x, event.motion.y);
                    printf("Case x : %d, Case y : %d \n", GET_CASE_FROM_COORD_X(event.motion.x), GET_CASE_FROM_COORD_Y(event.motion.y));
                    


                    
                    
                    continue;

                case SDL_MOUSEBUTTONUP : 
                    isMouseButtonPressed = false;
                    CASE_CLICK_DISPLAY(window, renderer, texture, camera, XY_CASE_TAB, event.motion.x, event.motion.y);
                    continue;



                case SDL_QUIT :
                    program_launched = SDL_FALSE;
                    printf("quit \n");
                    break;


                default:
                    break;
            }

        }

        
        

        
        // Actualise le rendu
        VERIF_SDL_COMMAND(SDL_RenderCopy(renderer, texture, &camera, NULL), "RenderCopy");
        SDL_RenderPresent(renderer);

    }


    
    // ----- Clear le rendu + vérif erreur ----- //
    VERIF_SDL_COMMAND(SDL_RenderClear(renderer), "RenderClear");
    

    // Clear tout les pointeurs
    free(KEY_DOWN_STATUS);
    DESTROY_POINTER_MATRIX(XY_CASE_TAB);

    // Pointeurs SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_DestroyTexture(texture);
    SDL_Quit();
    return EXIT_SUCCESS;
}



// gcc -o main main.c $(sdl2-config --cflags --libs) && ./main
// Les fichiers SDL sont dans : usr/include/SDL2
