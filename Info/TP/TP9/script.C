#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    struct Node *left;
    struct Node *right;
    int Value;
} bintree;


bintree *bintree_create(bintree *g, bintree *d, int v){
    bintree *t = malloc(sizeof(bintree));
    t->left = g;
    t->right = d;
    t->Value = v;
    return t;
}

int taille(bintree *t){
    if (t = NULL){
        return 0;
    }
    else{
        return taille(t->right) + taille(t->left) + 1;
    }
}


int main(){
    bintree *x = bintree_create(NULL, NULL, 1);
    bintree *a = bintree_create(NULL, x, 2);
    bintree *b = bintree_create(NULL, NULL, 3);
    bintree *t = bintree_create(a, b,12);
    int length = taille(x);
    printf("Bintree value : %d \n", t->Value);
    printf("Bintree length : %d", length);
    return 0;
}

