#include "GlobalDef.h"

typedef struct Dictionnaire
{
    int * keys;
    int * values;
    int len;
} dict;

dict CREATE_DICT(int len);

dict ADD_VAL_DICT(dict dict, int key, int val);

void DESTROY_DICT(dict dict);
