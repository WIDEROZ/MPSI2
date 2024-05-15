#include "Dictionnaire.h"

dict CREATE_DICT(int len){
    dict dict;
    dict.keys = malloc(len * sizeof(int));
    dict.values = malloc(len * sizeof(int));
    return dict;
}

dict ADD_VAL_DICT(dict dict, int key, int val){
    
}

void DESTROY_DICT(dict dict){
    free(dict.keys);
    free(dict.values);
}