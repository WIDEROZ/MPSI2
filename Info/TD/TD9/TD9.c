typedef struct Keke
{
    int *pieces; // Pièces rendues
    int size; // Nombre de pièces rendues
} Keke;

// b la longeur du tableau a
Keke rendu_glouton(int n, int * a, int b){
    Keke rendu;

    int *tab = malloc(sizeof(int) *n);
    int c = b-1;
    int count = 0;
    while(c >= 0){
        if (a[c] <= n){
            rendu.pieces[b-c-1] = a[c];
        }
        while(a[c] <= n){
            n -= a[c];
        }

        c--;


    }







    free(tab);
    return rendu;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
