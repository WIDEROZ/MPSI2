#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>
/* ----- Global variables ----- */
// Longeur et hauteur du rendu
int generalWidth;
int generalHeight;

// Nombre de pixels de large pour une case
int caseNumber = 25;

/* ----- Error gestion ----- */

void SDL_ExitWithError(const char *message){
    SDL_Log("ERREUR : %s > %s \n", message, SDL_GetError());
    exit(EXIT_FAILURE);
}

void ExitWithError(const char *message){
    printf("ERREUR : %s \n", message);
    exit(EXIT_FAILURE);
}





/* ##### Tab part ##### */

int * CREATE_TAB_0(const int len){
    int *tab = malloc(len * sizeof(int));
    if(tab == NULL){
        ExitWithError("Space allocution failed");
    }

    for (int i = 0; i < len; i++)
    {
        tab[i] = 0;
    }
    
    return tab;
}

/* ##### Matrix module ##### */

typedef struct Matrix{
    int width;
    int height;
    int **mat;
} matrix;

matrix CREATE_MATRIX(int width, int height){
    /* Create a matrix 
    */
    matrix matr;
    matr.width = width;
    matr.height = height;
    matr.mat = malloc(height * sizeof(int*));

    for (int i = 0; i < width; i++) {
        matr.mat[i] = CREATE_TAB_0(width);
    }

    return matr;
}

void DESTROY_MATRIX(matrix mat){
    for (int i = 0; i < mat.width; i++)
    {
        free(mat.mat[i]);
    }
    free(mat.mat);
}

void DESTROY_POINTER_MATRIX(matrix * mat){
    DESTROY_MATRIX(*mat);
    free(mat);
}




/* ###___### Grid ###____### */
/* ----- Création des grilles ----- */

typedef struct Grid{
    int 
} grid;

// Fonction qui créée la grille de départ
// Variables globales utilisées : generalWidth, generalHeight
void SDL_CREATE_GRID(SDL_Renderer *renderer, const int X, const int Y, int color[3]){
    /*  Start to create columns first and lines after
        X     : space between lines
        Y     : space between columns
        color : tab [R;G;B] */
    

    if(SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
        SDL_ExitWithError("Impossible to create the color for the render");
    }
    

    for (int i = 0; i <= generalWidth/X; i++) 
    {
        if(SDL_RenderDrawLine(renderer, i*X, 0, i*X, generalHeight) != 0){
                SDL_ExitWithError("Impossible to create the column");
            }
    }

    for(int j = 0; j <= generalHeight/Y; j++){
            if(SDL_RenderDrawLine(renderer, 0, j*Y, generalWidth, j*Y) != 0){
                SDL_ExitWithError("Impossible to create the line");
            }
    }
    SDL_RenderPresent(renderer);
}

// Fonction qui créée la grille de départ a partir des cases
// Variables globales utilisées : generalWidth, generalHeight
void SDL_CREATE_GRID_CASE(SDL_Renderer *renderer, const int caseX, const int caseY, int color[3]){
    /*  Start to create columns first and lines after
        caseX : case number on the lines
        caseY : case number on the columns
        color : tab [R;G;B] */
    
    
    int X = generalWidth/caseX;
    int Y = generalHeight/caseY;
    SDL_CREATE_GRID(renderer, X, Y, color);


}



/* ----- Intéraction avec l'inteface ----- */

// Fonction qui dessine un rectangle dans la case
// Variables globales utilisées : caseNumber, generalWidth, generalHeight
void SDL_CASE_CLICK(SDL_Window *window, SDL_Renderer *renderer, matrix* XY_CASE_TAB , const int x, const int y){
    // Ajout de la case dans la matrice
    if((0 <= x <= generalWidth) && (0 <= y <= generalHeight))
    {
        XY_CASE_TAB -> mat[x/(generalWidth/caseNumber)][y/(generalHeight/caseNumber)] = 1;

        
    }
    else{
        ExitWithError("Out of range of the matrix");
    }
    if(SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
        SDL_ExitWithError("Impossible to create the color for the render");
    }

    // Création graphique du rectangle
    SDL_Rect *rectangle = malloc(sizeof(SDL_Rect));
    rectangle->x = (x/caseNumber)*caseNumber;
    rectangle->y = (y/caseNumber)*caseNumber;
    rectangle->w = caseNumber;
    rectangle->h = caseNumber;

    if(SDL_RenderFillRect(renderer, rectangle) != 0){
        ExitWithError("Cannot create the rectangle");
    }
    
    free(rectangle);
    SDL_RenderPresent(renderer);

}




int main(int argc, char **argv){
    // ----- Initialisation de la fenetre et du rendu ----- //
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    

    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Vesrion : %d.%d.%d  \n", nb.major, nb.minor, nb.patch);

    if(SDL_Init(SDL_INIT_VIDEO) != 0){  // SDL_INIT_VIDEO | SDL_INIT_AUDIO
        SDL_ExitWithError("Init Error");
    }

    // On fait le programme //

    // Creation de la fenêtre :
    // Pour 20 pixel d'espace mettre : 1840, 1120
    // Pour 25 pixel d'espace mettre : 1850, 1125
    // Pour 30 pixel d'espace mettre : 1830, 1110
    window = SDL_CreateWindow("Fenêtre Titrée", 70, 0, 1850, 1125, 0); // Pour le dernier on peut mettre un flag : SDL_WINDOW_FULLSCREEN par exemple
    if(window == NULL){
        SDL_ExitWithError("Window creation failed");
    }
    
    // Creation du rendu : 
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

    // Creation de la couleur du tracé
    if(SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
        SDL_ExitWithError("Impossible to create the color for the render");
    }

    if(SDL_RenderDrawPoint(renderer, 200, 10) != 0){
        SDL_ExitWithError("Impossible to create the point");
    }

    if(SDL_RenderDrawLine(renderer, 0, 0, 500, 50) != 0){ 
        SDL_ExitWithError("Impossible to create the line");
    }


    // Changement de couleur pour le tracé
    if(SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE) != 0){ // On peut mettre 255 a la place de SDL opaque
        SDL_ExitWithError("Impossible to create the color for the render");
    }

    // Creation d'un rectangle
    SDL_Rect rectangle;
    rectangle.x = 50;  // Début en x
    rectangle.y = 50;  // Début en y
    rectangle.w = 100; // Largeur du rectange (longeur sur x)
    rectangle.h = 100; // Hauteur du rectange (longeur en y)

    if(SDL_RenderDrawRect(renderer, &rectangle) != 0){
        SDL_ExitWithError("Impossible to create the rectangle");
    }

    
    SDL_RenderPresent(renderer);

    // --- Taille du rendu --- //
    int* width = malloc(sizeof(int));
    int* height = malloc(sizeof(int));
    SDL_GL_GetDrawableSize(window, width, height);
    generalWidth  = *width;
    generalHeight = *height;
    free(width);
    free(height);


    // ----- Déclaration des variables ----- //
    SDL_bool program_launched = SDL_TRUE;


    int * KEY_DOWN_STATUS = NULL;
    KEY_DOWN_STATUS = CREATE_TAB_0(315);

    matrix *XY_CASE_TAB = malloc(sizeof(matrix));
    *XY_CASE_TAB = CREATE_MATRIX(caseNumber, caseNumber);

    



    while (program_launched)
    {
        SDL_Event event; // un seul évènement pour les prgm normaux
        while (SDL_PollEvent(&event)) // Elle va lire tout les évènements
        /*on a aussi : SDL_WaitEvent(&event) mais ca bloque la fenêtre*/
        {
            
            switch (event.type) // Le switch c'est comme un match en ocaml mais que pour les int
            {
                case SDL_KEYDOWN : 
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_c:
                        printf("SDL_c Down %i \n", SDL_KEYDOWN);
                        KEY_DOWN_STATUS[SDLK_c] = 1;

                        // Creation de la grille //
                        int *colorLine = malloc(3 * sizeof(int));
                        if(colorLine == NULL){
                            SDL_ExitWithError("Allocation issue");
                        }
                        colorLine[0] = 255;
                        colorLine[1] = 255;
                        colorLine[2] = 255;
                        
                        //SDL_CREATE_GRID_CASE(window, renderer, caseNumber, caseNumber, colorLine);
                        SDL_CREATE_GRID(renderer, caseNumber, caseNumber,colorLine);
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

                        printf("SDL_c Up %d \n", SDL_KEYUP);
                        KEY_DOWN_STATUS[SDLK_c] = 0;
                        continue;

                    case SDLK_v :
                        printf("event : ");
                        continue;
                    
                    default:
                        continue;
                    }

                case SDL_MOUSEMOTION :
                    //printf("Coordonée : (%d, %d) \n", event.motion.x, event.motion.y);
                    //printf("Vitesse : (%d, %d) \n", event.motion.xrel, event.motion.yrel);
                    break;

                case SDL_MOUSEBUTTONDOWN :
                    printf("Case x : %d, Case y : %d \n", event.motion.x/(generalWidth/caseNumber), event.motion.y/(generalHeight/caseNumber));
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


    
    // ----- Clear le rendu + vérif erreur -----
    if(SDL_RenderClear(renderer) != 0){
        SDL_ExitWithError("Création du rendu échouée");
    }
    

    free(KEY_DOWN_STATUS);
    DESTROY_POINTER_MATRIX(XY_CASE_TAB);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}



// gcc -o script script.c $(sdl2-config --cflags --libs) && ./script
// Les fichiers SDL sont dans : usr/include/SDL2
