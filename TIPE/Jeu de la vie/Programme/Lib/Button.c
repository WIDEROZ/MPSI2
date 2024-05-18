#include <stdlib.h>
#include "Button.h"

SDL_Button_t * button = malloc(sizeof(SDL_Button_t));
	button->internal_surface = surface;
	
	SDL_Rect * rect = malloc(sizeof(SDL_Rect));
	rect->x = x_location;
	rect->y = y_location;
	rect->w = button_width;
	rect->h = button_height;
	button->location_and_size = rect;