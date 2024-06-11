#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

// définition des structures et opérations

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

l_sommet *ajout_l_sommet(l_sommet *l, int e){
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

bool **creer_matrice(int n, int m){
    bool **p = malloc(sizeof(bool*)*n);
    for(int i = 0; i < n; i++){
        p[i] = malloc(sizeof(bool)*m);
    }
    return p;
}

mat_graphe* creer_mat_graphe(int n){
    bool **m1 = creer_matrice(n,n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            m1[i][j] = false;
        }
    }
    mat_graphe *m = malloc(sizeof(mat_graphe));
    m->taille = n;
    m->mat = m1;
    return m;
}

void detruire_matrice(bool **p, int n){
    for (int i = 0; i < n; i++){
        free(p[i]);
    }
    free(p);
}

void supprimer_mat_graphe(mat_graphe *m){
    detruire_matrice(m->mat,m->taille);
    free(m);
}



// Fonction ajoute_arete_go

void ajout_arete_go(mat_graphe *m, int s1, int s2){
    assert(s1 < m->taille);
    assert(s1 >= 0);
    assert(s2 < m->taille);
    assert(s2 >= 0);

    bool **m1 = m->mat;
    m1[s1][s2] = true;
}
// Dans le cas d'un GNO, on rajoute une arete dans les deux sens : s1->s2 et s2->s1




// Fonctions mat_to_list et list_to_mat

liste_graphe *mat_to_list(mat_graphe *m){
    int n = m->taille;
    bool **m0 = m->mat;
    
    liste_graphe *l = creer_liste_graphe(n);
    
    /* pour chaque (i,j) avec m0_ij = true, on ajoute le sommet j à la
    liste des successeurs de i */
    for (int i = 0; i < n; i ++){
        l_sommet *ls = malloc(sizeof(l_sommet));
        for (int j = 0; j < n; j++){
            if (m0[i][j]){
                ls = ajout_l_sommet(ls,j);
            }
        }
        l->tab[i] = ls;
    }
    return l;
}

mat_graphe *list_to_mat(liste_graphe *l){
    int n = l->taille;
    l_sommet **t = l->tab;
    mat_graphe *m1 = creer_mat_graphe(n);
    
    // pour chaque successeur j d'un sommet i, on affecte la valeur true à m1_ij
    for (int i = 0; i < n; i++){
        l_sommet *ls = t[i];
        while (ls != NULL){
            int j = ls->valeur;
            m1->mat[i][j] = true;
            ls = ls->next;
        }
    }
    return m1;
}



// Fonction est_gno

bool est_gno(mat_graphe *m){
    int n = m->taille;
    bool **m0 = m->mat;
    
    // On parcourt le tableau m0 en cherchant (i,j) tel que m0_ij != m0_ji
    for (int i = 0; i<n-1;i++){
        for (int j = i+1; j<n; j++){
            if (m0[i][j] != m0[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    mat_graphe *m0 = creer_mat_graphe(4);
    ajout_arete_go(m0,2,3);
    bool **mat0 = m0->mat;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ",mat0[i][j]);
        }    
        printf("\n \n");
    }
    
    liste_graphe *l_graphe = mat_to_list(m0);
    printf("%d",est_gno(m0));

    return 0;
}