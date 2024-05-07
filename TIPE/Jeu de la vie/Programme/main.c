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



int main(int argc, char **argv){
    // ----- Initialisation de la fenetre, du rendu et de la texture ----- //
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    if(SDL_Init(SDL_INIT_VIDEO) != 0){  // SDL_INIT_VIDEO | SDL_INIT_AUDIO
        SDL_ExitWithError("Init Error");
    }



    // ----- Creation de la fenêtre : -----//

    
    window = SDL_CreateWindow("Fenêtre Titrée", 70, 0, RENDER_WIDTH, RENDER_HEIGHT, 0); // Pour le dernier on peut mettre un flag : SDL_WINDOW_FULLSCREEN par exemple
    if(window == NULL){
        SDL_ExitWithError("Window creation failed");
    }
    
    // ----- Creation du rendu ----- //: 
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    if(renderer == NULL){
        SDL_ExitWithError("Renderer creation failed");
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

    // ----- Déclaration des variables ----- //
    SDL_bool program_launched = SDL_TRUE;

    // Tableau des touches abaissés
    int * KEY_DOWN_STATUS = NULL;
    KEY_DOWN_STATUS = CREATE_TAB_0(315);

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

                        // Creation de la grille //
                        int *colorLine = malloc(3 * sizeof(int));
                        if(colorLine == NULL){
                            SDL_ExitWithError("Allocation issue");
                        }
                        colorLine[0] = 255;
                        colorLine[1] = 255;
                        colorLine[2] = 255;
                        
                        //SDL_CREATE_GRID_CASE(window, renderer, SQUARE_WIDTH, SQUARE_WIDTH, colorLine);
                        SDL_CREATE_GRID(renderer, SQUARE_WIDTH, SQUARE_WIDTH,colorLine);
                        
                        free(colorLine);
                        // Fin de la création de la grille //

                        continue;
                
                    default:
                        continue;
                    
                    }
                
                case SDL_KEYUP : 
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_c:
                        KEY_DOWN_STATUS[SDLK_c] = 0;
                        continue;

                    
                    default:
                        continue;
                    }

                case SDL_MOUSEMOTION :
                    //printf("Coordonée : (%d, %d) \n", event.motion.x, event.motion.y);
                    //printf("Vitesse : (%d, %d) \n", event.motion.xrel, event.motion.yrel);
                    break;

                case SDL_MOUSEBUTTONDOWN :
                    printf("Case x : %d, Case y : %d \n", GET_CASE_FROM_COORD_X(event.motion.x), GET_CASE_FROM_COORD_Y(event.motion.y));
                    SDL_CASE_CLICK(window, renderer, XY_CASE_TAB, event.motion.x, event.motion.y);
                    break;





                case SDL_QUIT :
                    program_launched = SDL_FALSE;
                    printf("quit \n");
                    break;


                default:
                    break;
            }

        }

    }


    
    // ----- Clear le rendu + vérif erreur ----- //
    if(SDL_RenderClear(renderer) != 0){
        SDL_ExitWithError("Création du rendu échouée");
    }
    

    // Clear tout les pointeurs
    free(KEY_DOWN_STATUS);
    DESTROY_POINTER_MATRIX(XY_CASE_TAB);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}



// gcc -o main main.c $(sdl2-config --cflags --libs) && ./main
// Les fichiers SDL sont dans : usr/include/SDL2
