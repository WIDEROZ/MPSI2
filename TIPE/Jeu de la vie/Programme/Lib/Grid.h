#include "GlobalDef.h"

/* Fonction qui créée la grille de départ */
void CREATE_GRID(SDL_Renderer *renderer, const int X, const int Y, int color[3]);
/* Fonction qui créée la grille de départ a partir des cases */
void CREATE_GRID_CASE(SDL_Renderer *renderer, const int caseX, const int caseY);
/* Fonction qui affiche la grille sur la texture du rendu voulue */
void GRID_DISPLAY_CREATION(SDL_Renderer *renderer, SDL_Texture * texture, SDL_Rect camera);
/* Fonction qui affiche la case en blanc ou en noir quand on clique dessus */
void CASE_CLICK_DISPLAY(SDL_Window *window, SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect camera,  matrix* XY_CASE_TAB , const int x, const int y);
/* Bouge la grille quand on click + bouge avec la souris */
void MOVE_CAMERA_MOUSE(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect *camera, int xRel, int yRel);

