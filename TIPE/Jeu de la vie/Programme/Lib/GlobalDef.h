#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL.h>

/* ----- Variables Globales et Définition préprocésseur ----- */
/*  Pour que le rendu s'adapte parfaitement aux cases (qu'elles soient pas coupés)
    Pour 20 pixel d'espace mettre : 1840, 1120
    Pour 25 pixel d'espace mettre : 1850, 1125
    Pour 30 pixel d'espace mettre : 1830, 1110  */

// Longeur et hauteur de la fenètre d'affichage
#ifndef WINDOW_WIDTH
#define WINDOW_WIDTH 1850
#endif

#ifndef WINDOW_HEIGHT
#define WINDOW_HEIGHT 1200
#endif


// Longeur et hauteur du rendu
#ifndef RENDER_WIDTH
#define RENDER_WIDTH 1850
#endif

#ifndef RENDER_HEIGHT
#define RENDER_HEIGHT 1200
#endif

// Nombre de cases en longeur de l'écran
#ifndef CASE_NUMBER_WIDTH
#define CASE_NUMBER_WIDTH 500
#endif

// Nombre de cases en heuteur de l'écran
#ifndef CASE_NUMBER_HEIGHT
#define CASE_NUMBER_HEIGHT 100
#endif

// Nombre de pixels de large pour une case
#ifndef SQUARE_WIDTH
#define SQUARE_WIDTH 20
#endif



// Longeur et hauteur de la texture
#ifndef TEXTURE_WIDTH
#define TEXTURE_WIDTH (CASE_NUMBER_WIDTH*SQUARE_WIDTH)
#endif

#ifndef TEXTURE_HEIGHT
#define TEXTURE_HEIGHT (CASE_NUMBER_HEIGHT*SQUARE_WIDTH)
#endif


// Variables générales de la texture
#ifndef PIXEL_FORMAT
#define PIXEL_FORMAT SDL_PIXELFORMAT_UNKNOWN
#endif

#ifndef TEXTURE_ACCESS
#define TEXTURE_ACCESS SDL_TEXTUREACCESS_TARGET
#endif







