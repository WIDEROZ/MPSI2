#include <stdio.h>
#include <stdlib.h>

typedef struct Keke
{
    int *pieces; // Pièces rendues
    int size; // Nombre de pièces rendues
} Keke;

// b la longeur du tableau a
Keke rendu_glouton(int n, int * a, int b){
    Keke rendu;
    rendu.size = 0;

    int *tab = malloc(sizeof(int) *n);
    int c = b-1;
    int count = 0;
    while(c >= 0){
        if (a[c] <= n){
            tab[b-c-2] = a[c];
            count ++;
        }
        while(a[c] <= n){
            n -= a[c];
            rendu.size ++;
        }

        c--;
    }
    rendu.pieces = malloc(sizeof(int) * count);
    rendu.pieces = tab;
    return rendu;
}


int main(int argc, char const *argv[])
{
    Keke A;
    int *tab = malloc(sizeof(int) * 5);
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 5;
    tab[3] = 10;
    tab[4] = 20;

    A = rendu_glouton(15, tab, 5);
    free(tab);
    printf("test : %d, %d, %d \n", A.size, A.pieces[0], A.pieces[1]);
    return 0;
}
