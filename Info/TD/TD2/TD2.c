#include <stdio.h>

// Exercice 1
int sommeRecu(int n){
    if (n == 1){
        return n;
    }
    else
    {
        return sommeRecu(n-1) + n;
    }
}

// Exercice 2.1
int suiteRecu(int u0, int n){
    if (n == 0){
        return u0;
    }
    else{
        return (1/2)*suiteRecu(u0, n-1) + 3;
    }
}

// Exercice 2.2
int f(int x){
    return x*x;
}

int suiteFunctRecu(int u0, int n){
    if (n == 0){
        return u0;
    }
    else{
        return f(suiteFunctRecu(u0, n-1));
    }
}

// Exercice 3
int coefBinRecur(){
    
    return 0;
}


int main(){
    printf("%d", sommeRecu(1));

    return 0;
}
