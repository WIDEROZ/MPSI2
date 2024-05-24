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
            tab[b-c-1] = a[c];
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

    free(tab);
    return rendu;
}


int main(int argc, char const *argv[])
{
    Keke A;
    
    rendu_glouton(15, [1, 2, 5, 10, 20], 5);
    printf("test : %d", A.size);
    return 0;
}
