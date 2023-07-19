#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Digite o 1o numero: ");
    scanf("%d",&x);
    printf("Digite o 2o numero: ");
    scanf("%d",&y);
    int mult = x*y;
    printf("O resultado da multiplicacao eh %d",mult);
    

    getchar();
    return 0;
}