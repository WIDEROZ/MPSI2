#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct mat_graphe
{
    int taille;
    bool **mat;

}mat_graphe;

typedef struct list_chain
{
    int v;
    list_chain *next;
}list_chain;


typedef struct liste_graphe
{
    int taille;
    list_chain l;

}liste_graphe;

mat_graphe creer_mat_graphe(int n){
    mat_graphe graphe = malloc(sizeof(mat_graphe));
    graphe.taille = n;
    graphe.mat = malloc(n * sizeof(bool*));
    for (int i = 0; i < n; i++)
    {
        graphe.mat[i] = malloc(n * sizeof(bool));
        for (int j = 0; j < n; j++)
        {
            graphe.mat[i][j] = 0;
        }
    }

    return graphe;    
}



int main(int argc, char const *argv[])
{
    
    return 0;
}
