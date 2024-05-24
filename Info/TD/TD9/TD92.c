#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 55;
    int p = 10;
    int **mat = malloc(sizeof(int*)*n);

    for (int i = 0; i < n; i++)
    {
        mat[i] = malloc(sizeof(int)*p);
    }

    mat[5][6] = 6;

    for (int i = 0; i < n; i++)
    {
        free(mat[i]);
    }


    free(mat);
    return 0;
}
