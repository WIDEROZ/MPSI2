#include "Error.h"

void SDL_ExitWithError(const char *message){
    SDL_Log("ERREUR : %s > %s \n", message, SDL_GetError());
    exit(EXIT_FAILURE);
}

void ExitWithError(const char *message){
    printf("ERREUR : %s \n", message);
    exit(EXIT_FAILURE);
}


void VERIF_SDL_COMMAND(int command, char *nameCommand){
    if(command !=0){
        SDL_ExitWithError(strcat("%s failed ! \n", nameCommand));
    }
}



void DefinitionError(){
    if (TEXTURE_HEIGHT < RENDER_HEIGHT){
        ExitWithError("La taille du rendu est supérieure au nombre de carrés que l'on veut afficher (Effet : strech texture)");
    }
}



