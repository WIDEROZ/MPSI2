#include <stdio.h>
#include <math.h>
#include <assert.h>

int syracuse(int x){
    assert (x > 0);
    int i = 0;
    
    while (x != 1)
    {
        
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else
        {
            x = 3 * x + 1;
        }
        
        i++;
        printf("Le %d eme terme de la suite de syrracuse est %d \n", i, x);
        
    }

    return x;
}

int factorielle(int n)
{
    assert (n >= 0);
    int x = 1;
    for (int i = 2; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}



int main()
{
    float x;
    int n;
    printf("Hello World \n");
    
    // Factorielle : 
    scanf("%d", &n);
    printf("\n %d factorielle = %d", n, factorielle(n));


    // Suite de syrracuse
    printf("Premier terme de la suite : \n");
    scanf("%d", &x);

    printf("\n Le dernier terme dans la suite de syrracuse de premier terme %d est %d ", x, syracuse(x));
    
    
    return 0;
}
