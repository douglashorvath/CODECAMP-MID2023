#include <stdio.h>

int main(void)
{

    int x;
    int resultado;

    printf("Qual o valor de x?");
    scanf("%d",&x);

    resultado = (x*x) + (4*x) + 10;

    printf("O resultado eh: %d",resultado);

    getchar();
    return 0;
}