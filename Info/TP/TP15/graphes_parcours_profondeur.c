#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


// Définition des structures et opérations

struct mat_graphe{
    int taille;
    bool **mat;
};
typedef struct mat_graphe mat_graphe;

struct l_sommet{
    int valeur;
    struct l_sommet *next;
};
typedef struct l_sommet l_sommet;

l_sommet *ajout_l_sommet(l_sommet *l,int e){
    l_sommet *l1 = malloc(sizeof(l_sommet));
    l1->valeur = e;
    l1->next = l;
    return l1;
}

struct liste_graphe{
    int taille;
    l_sommet **tab;
};
typedef struct liste_graphe liste_graphe;

liste_graphe *creer_liste_graphe(int n){
    liste_graphe *l = malloc(sizeof(liste_graphe));
    l->taille = n;
    l->tab = malloc(sizeof(l_sommet*)*n);
    return l;
}



// Définition des listes pour les piles

struct liste{
    int valeur;
    struct liste* next;
};
typedef struct liste liste;

liste *ajout_liste(liste *l, int n){
    liste *l1 = malloc(sizeof(liste));
    l1->valeur = n;
    l1->next = l;
    return l1;
}


// Implémentation d'une pile avec une liste, et opérations

struct pile{
    liste *premier;
};
typedef struct pile pile;

bool isempty_pile(pile *p){
    return (p->premier == NULL);
}

void *ajout_pile(pile *p,int e){
    p->premier = ajout_liste(p->premier,e);
}

int dernier_elt_pile(pile *p){
    assert(!isempty_pile(p));
    liste *l1 = p->premier;
    int v = l1->valeur;
    return v;
}

int depiler(pile *p){
    assert(!isempty_pile(p));
    liste *l1 = p->premier;
    int v = l1->valeur;
    p->premier = l1->next;
    free(l1);
    return v;
}

pile *creer_pile(){
    pile *p = malloc(sizeof(pile));
    p->premier=NULL;
    return p;
}



// Parcours en profondeur avec une pile

void parcours_profondeur(liste_graphe *l, int s){
    
    // champs de *l
    int n = l->taille;
    l_sommet **t = l->tab;
    
    // initialisation de la pile et du tableau est_visite
    pile *p = creer_pile();
    bool *est_visite = malloc(sizeof(bool)*n);
    for (int i = 0; i < n; i++){
        est_visite[i] = false;
    }
    ajout_pile(p,s);
    
    // parcours du graphe
    while(!isempty_pile(p)){
        int s1 = depiler(p);
        if (!est_visite[s1]){ // visite de s1
            printf("Sommet parcouru : %d \n",s1);
            est_visite[s1] = true;
            
            l_sommet *ls = t[s1];
            
            while(ls != NULL){ // empilement des voisins de s1 pas encore visités
                int v = ls->valeur;
                if (!est_visite[v]){
                    ajout_pile(p,v);
                }
                ls = ls->next;
            }
        }
    }
    free(est_visite);
}




// Parcours en profondeur récursif

void visite(liste_graphe *l,int s, bool *t){
    if(!t[s]){
        
        // visite de s
        printf("Sommet parcouru : %d \n",s);
        t[s] = true;
        l_sommet *ls = l->tab[s];
        
        while(ls != NULL){
            int v = ls->valeur;
            visite(l,v,t); // appel récursif sur les voisins pas encore visités
            ls = ls->next;
        }
    }
}

void parcours_profondeur_bis(liste_graphe *l, int s){
    int n = l->taille;
    
    // initialisation du tableau de visites
    bool *est_visite = malloc(sizeof(bool)*n);
    for (int i = 0; i < n; i++){
        est_visite[i] = false;
    }
    
    // appel de visite sur le premier Sommet
    visite(l,s,est_visite);
    free(est_visite);
}



// Composantes connexes d'un graphe orienté à l'aide d'un parcours en profondeur

void composantes_connexes(liste_graphe *l){
    int n = l->taille;
    
    // initialisation du tableau de visites
    bool *est_visite = malloc(sizeof(bool)*n);
    for (int i = 0; i < n; i++){
        est_visite[i] = false;
    }
    
    int numero_cc = 0;
    int i1 = 0;
    
    while (i1 < n){
        if(!est_visite[i1]){
            numero_cc++;
            printf("Composante connexe numéro %d :\n", numero_cc);
            visite(l,i1,est_visite);
        }
        i1++;
    }
    free(est_visite);
}

int main()
{
    liste_graphe *l = creer_liste_graphe(7);
    
    l_sommet *l0 = NULL;
    l0 = ajout_l_sommet(l0,2);
    l->tab[0] = l0;
    
    l_sommet *l1 = NULL;
    l1 = ajout_l_sommet(l1,3);
    l->tab[1] = l1;
    
    l_sommet *l2 = NULL;
    l2 = ajout_l_sommet(l2,0);
    l2 = ajout_l_sommet(l2,4);
    l->tab[2] = l2;
    
    l_sommet *l3 = NULL;
    l3 = ajout_l_sommet(l3,1);
    l3 = ajout_l_sommet(l3,5);
    l->tab[3] = l3;
    
    l_sommet *l4 = NULL;
    l4 = ajout_l_sommet(l4,2);
    l->tab[4] = l4;
    
    
    l_sommet *l5 = NULL;
    l5 = ajout_l_sommet(l5,3);
    l5 = ajout_l_sommet(l5,6);
    l->tab[5] = l5;
    
    l_sommet *l6 = NULL;
    l6 = ajout_l_sommet(l6,5);
    l->tab[6] = l6;
    
    composantes_connexes(l);
    
    return 0;
}