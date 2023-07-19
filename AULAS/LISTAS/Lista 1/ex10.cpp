#include <stdio.h>

int main(void)
{
    int x, quadrado;
    printf("Digite um numero: ");
    scanf("%d",&x);
    quadrado = x*x;
    printf("O quadrado desse numero eh %d",quadrado);
    

    getchar();
    return 0;
}