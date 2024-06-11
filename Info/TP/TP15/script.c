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




int main(int argc, char const *argv[])
{
    
    return 0;
}
