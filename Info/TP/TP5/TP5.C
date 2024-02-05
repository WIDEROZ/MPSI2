#include <stdio.h>
struct complexe
    {
        float im;
        float re;
    };



complexe addition(complexe x, complexe y){
    complexe z;
    z.im = x.im + y.im;
    z.re = x.re + y.re;
    
    return z ;
};




void syrracuse(int *i){
    if (*i % 2 == 0){
        *i = *i / 2;
    }
    else{
        *i = 3*(*i) + 1;
    }
}


void minmax(int *x, int *y){
    int tmp = *x;
    if (*x < *y){
        *x = *y;
        *y = tmp;
    }
}


int main(){
    complexe i;
    i.re = 12.0;
    i.im = 10.0;

    complexe z;
    i.re = 0.0;
    i.im = 6.0;

    complexe add = addition(i, z);

    printf("test : %f %f i", add.re, add.im);


    int x = 12;
    syrracuse(&x);
    printf("%d", x);

    int y = 0;
    minmax(&x, &y);
    printf("%d ; %d", x, y);
    return 0;
};



