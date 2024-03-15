#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *left;
    struct Node *right;
    int v;
} arbre;

int main(){
    arbre *a = malloc(sizeof(arbre));
    arbre *b = malloc(sizeof(arbre));
    a -> left = b;
    a -> v = 12;
    b -> v = 1;
    printf("text : %d", a->left->v);

    return 0;
};



