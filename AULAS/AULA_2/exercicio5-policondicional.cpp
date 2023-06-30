#include <stdio.h>

int main(void){

    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    if(numero == 0 || numero == 5 || numero == 10)
    {
        printf("O numero informado esta dentro dos parametros");
    }
    else{
        printf("O numero nao esta dentro dos parametros");
    }

    getchar();
    return 0;
}