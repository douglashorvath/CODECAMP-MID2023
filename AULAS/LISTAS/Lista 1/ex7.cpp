#include <stdio.h>

int main(void)
{
    int x;
    printf("Digite o numero:");
    scanf("%d",&x);
    int resto = x%2; //resto da divisão por 2
    if(resto == 0)
    {
        printf("O numero eh par");
    }
    else{
        printf("O numero eh impar");
    }
    

    getchar();
    return 0;
}