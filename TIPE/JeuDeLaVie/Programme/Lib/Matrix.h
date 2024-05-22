#include "GlobalDef.h"

typedef struct Matrix{
    int width;
    int height;
    int **mat;
} matrix;

int * CREATE_TAB_0(const int len);
matrix CREATE_MATRIX(int width, int height);
void DESTROY_MATRIX(matrix mat);
void DESTROY_POINTER_MATRIX(matrix * mat);

