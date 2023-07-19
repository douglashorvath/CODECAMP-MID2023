#include <stdio.h>

int main(void)
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if(numero > 0)
    {
        printf("O numero eh positivo");
    }
    else{
        if(numero<0)
        {
            printf("O numero eh negativo");
        }
        else{
            printf("O numero eh zero");
        }
    }
    

    getchar();
    return 0;
}