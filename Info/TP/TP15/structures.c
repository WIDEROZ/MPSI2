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