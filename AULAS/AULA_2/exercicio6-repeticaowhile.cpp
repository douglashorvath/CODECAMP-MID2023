#include <stdio.h>

int main(void){

    int numero;
    printf("Digite um numero pra ser contado");
    scanf("%d", &numero);
    int i=0;
    while(i<=numero)
    {
        printf("%d\n",i);
        i=i+1; // i++; ++i; i+=1;
    }

    getchar();
    return 0;
}