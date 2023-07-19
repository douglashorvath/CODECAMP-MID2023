#include <stdio.h>

int main(void)
{
    int dias,meses,anos,resultado;
    printf("Quantos anos voce tem?");
    scanf("%d",&anos);
    printf("Quantos meses?");
    scanf("%d", &meses);
    printf("Quantos dias?");
    scanf("%d",&dias);

    resultado = dias + (anos*365) + (meses*30);

    printf("Voce tem %d dias desde seu nascimento.",resultado);
    

    getchar();
    return 0;
}