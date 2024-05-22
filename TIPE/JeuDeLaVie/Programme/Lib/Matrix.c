#include "Matrix.h"


matrix CREATE_MATRIX(int width, int height){
    /* Create a matrix */
    matrix matr;
    matr.width = width;
    matr.height = height;

    matr.mat = malloc(width * sizeof(int*));

    for (int i = 0; i < width; i++) {
        matr.mat[i] = CREATE_TAB_0(height);
    }

    return matr;
}

void DESTROY_MATRIX(matrix mat){
    for (int i = 0; i < mat.width; i++)
    {
        free(mat.mat[i]);
    }
    free(mat.mat);
}

void DESTROY_POINTER_MATRIX(matrix * mat){
    DESTROY_MATRIX(*mat);
    free(mat);
}
