#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int x, y;
    
    printf("Entrez la valeur de x : ");
    scanf("%d", &x);
    printf("Entrez la valeur de y : ");
    scanf("%d", &y);
    
    int z = x+y;
    
    printf("Variable x : %d", x);
    printf("\nVariable y : %d", y);
    printf("\nVariable z : %d", z);
    
    return 0;
}
