#include "Array.h"


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

