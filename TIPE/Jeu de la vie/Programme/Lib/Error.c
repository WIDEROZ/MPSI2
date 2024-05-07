#include "Error.h"

void SDL_ExitWithError(const char *message){
    SDL_Log("ERREUR : %s > %s \n", message, SDL_GetError());
    exit(EXIT_FAILURE);
}

void ExitWithError(const char *message){
    printf("ERREUR : %s \n", message);
    exit(EXIT_FAILURE);
}

