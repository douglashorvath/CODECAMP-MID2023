#include <stdio.h>

int main(void)
{
    int x;
    int maior,menor,medio;
    printf("Digite o 1o numero ");
    scanf("%d",&x);
    maior = x; //20
    menor = x; //15
    medio = x; //12
    printf("Digite o 2o numero ");
    scanf("%d",&x);
    if(x>maior)
    {
        medio = maior;
        maior = x;
    }
    else{
        if(x<menor)
        {
            medio = menor;
            menor = x;
        }
        else{
            medio = x;
        }
    }
    printf("Digite o 3o numero ");
    scanf("%d",&x);
    if(x>maior)
    {
        medio = maior;
        maior = x;
    }
    else{
        if(x<menor)
        {
            medio = menor;
            menor = x;
        }
        else{
            medio = x;
        }
    }
    

    printf("Os numeros em ordem sao: %d, %d, %d",menor,medio,maior);

    

    getchar();
    return 0;
}