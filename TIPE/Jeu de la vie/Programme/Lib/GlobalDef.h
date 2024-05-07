#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>

/* ----- Variables Globales et Définition préprocésseur ----- */
// Longeur et hauteur du rendu
#ifndef RENDER_WIDTH
#define RENDER_WIDTH 1840
#endif

#ifndef RENDER_HEIGHT
#define RENDER_HEIGHT 1120
#endif

/*  Pour 20 pixel d'espace mettre : 1840, 1120
    Pour 25 pixel d'espace mettre : 1850, 1125
    Pour 30 pixel d'espace mettre : 1830, 1110  */


// Nombre de pixels de large pour une case
#ifndef SQUARE_WIDTH
#define SQUARE_WIDTH 20
#endif


// Nombre de cases en longeur de l'écran
#ifndef CASE_NUMBER_WIDTH
#define CASE_NUMBER_WIDTH (RENDER_WIDTH/SQUARE_WIDTH)
#endif

// Nombre de cases en heuteur de l'écran
#ifndef CASE_NUMBER_HEIGHT
#define CASE_NUMBER_HEIGHT (RENDER_HEIGHT/SQUARE_WIDTH)
#endif
