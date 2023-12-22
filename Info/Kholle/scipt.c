int expRapide(int a, int n){
    if (n == 0){
        return 1;
    }
    else if (n % 2 == 0){
        int expSuivante = expRapide(a, n/2);
        return expSuivante * expSuivante;
    }
    else{
        return a * expRapide(a, n-1);
    }

}

int main(){
    printf("%d", expRapide(2, 6));
    return 0;
}

