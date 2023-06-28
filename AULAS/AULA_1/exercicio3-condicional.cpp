#include <stdio.h>

int main(void){

    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero > 10)
    {
        printf("O numero eh maior que 10");
    }
    else{
        if(numero < 10)
        {
            printf("O numero eh menor que 10");
        }
        else{
             printf("O numero eh igual a 10");
        }
    }
    

    getchar();
    return 0;
}