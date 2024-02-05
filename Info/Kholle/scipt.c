#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float re;
    float im;
} Complexe;

Complexe addition(Complexe z1, Complexe z2){
    Complexe z;
    z.re = z1.re + z2.re;
    z.im = z1.im + z2.im;
    return z;
}

Complexe multiplication(Complexe z1, Complexe z2){
    Complexe z;
    z.re = z1.re * z2.re - z1.im * z2.im ;
    z.im = z1.re * z2.im + z1.im * z2.re;
    return z;
}

Complexe conjugue(Complexe z){
    z.im = -z.im;
    return z;
}

Complexe division(Complexe z1, Complexe z2){
    Complexe z;
    z.re = multiplication(z1, conjugue(z2)).re/multiplication(z2, conjugue(z2)).re;
    z.im = multiplication(z1, conjugue(z2)).im/multiplication(z2, conjugue(z2)).re;
    return z;
}

void swap (int* x, int* y){
    int tmp = *x;
    printf("point %d", tmp);
    *x = *x;
    *y = tmp;
}

void minmax(int* x, int* y){
    if (*x < *y){
        swap(x, y);
    }
}

void swaptab(int a[], int i, int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

typedef struct Cell{
    int t;
    struct Cell* next;
    }
list;

list* ajout(int v, list* lst){
    list* l = malloc(sizeof(list));
    l -> t = v;
    l -> next = lst;
    return l;
}


typedef struct Stack {
    int capacity;
    int size;
    int* data;
} stack;


int isEmpty(stack P){
    return P.size == 0;
}

stack push(int v, stack P){
    stack S;
    S.capacity = P.capacity;
    S.size = P.size + 1;
    S.data = malloc(S.size * sizeof(int));
    
    for (int i = 0; i < P.size; i++){
        S.data[i] = P.data[i];
    }

    S.data[S.size - 1] = v;

    return S;
}

int pop(stack P){
    if(!isEmpty(P)){
        P.size -= 1;
        return P.data[P.size];
    }
}


typedef struct Queue {
    int size;
    list* debut;
    list* fin;
} queue;

queue* ajoute(int v, queue* F){
    list* l = ajout(v, NULL);

    if (F->debut == NULL) {
        F->fin = F->debut = l;
    }
    else {
        F->debut->next = l;
        F->debut = l;
    }
    F->size++;
    return F;

}


queue* dequeue(queue* F){
    F->fin = F->fin->next;
    F->size--;
    return F;
}


void afficherFile(queue* F) {
    list* current = F->fin;
    while (current != NULL) {
        printf("%d \n", current->t);
        current = current->next;
    }
    printf("\n");
}



int main(){
    stack P;
    P.capacity = 100;
    P.size = 0;
    P.data = NULL;

    printf("Is empty : %d \n", isEmpty(P));
    P = push(10, P);
    P = push(11, P);
    P = push(12, P);

    printf("data : %p et %d\n", &P.data[0], P.data[0]);
    printf("data : %p et %d\n", &P.data[1], P.data[1]);
    printf("data : %p et %d\n", &P.data[2], P.data[2]);
    printf("data : %p et %d\n", &P.data[-10], P.data[-10]);

    pop(P);
    printf("data : %p et %d\n", &P.data[2], P.data[2]);

    printf("\n\n");

    queue* F = malloc(sizeof(queue));
    F->debut = NULL;
    F->fin = NULL;
    F->size = 0;

    F = ajoute(122, F);
    F = ajoute(45, F);

    printf("ajout : %d \n", F->debut->t);
    printf("ajout : %d \n", F->fin->next->t);
    printf("ffffff : %d\n", F->fin->t);
    afficherFile(F);
    dequeue(F);
    printf("ffffff : %d\n", F->fin->t);

    return 0;
}







