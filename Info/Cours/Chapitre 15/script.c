#include <stdio.h>
#include <stdbool.h>

typedef struct Graphe
{
    int taille;
    bool **mat;

} mat_graphe;

typedef struct LGraphe
{
    int taille;
    int valeur;
    liste_graphe *l;

} liste_graphe;

typedef struct l_sommet
{
    int v;
    l_sommet *next;

} l_sommet;

typedef struct list_graphe
{
    int taille;
    l_sommet *l;

} list_graphe;




int main(int argc, char const *argv[])
{
    
    return 0;
}
