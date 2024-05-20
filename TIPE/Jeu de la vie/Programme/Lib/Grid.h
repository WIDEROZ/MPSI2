#include "GlobalDef.h"

void CREATE_GRID(SDL_Renderer *renderer, const int X, const int Y, int color[3]);
void CREATE_GRID_CASE(SDL_Renderer *renderer, const int caseX, const int caseY);
void GRID_DISPLAY_CREATION(SDL_Renderer *renderer, SDL_Texture * texture, SDL_Rect camera);
void CASE_CLICK_DISPLAY(SDL_Window *window, SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect camera,  matrix* XY_CASE_TAB , const int x, const int y);
void MOVE_CAMERA_MOUSE(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect *camera, int xRel, int yRel);