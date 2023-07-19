#include <stdio.h>

int main(void)
{
    float x,y;
    printf("Digite o 1o numero: ");
    scanf("%f",&x);
    printf("Digite o 2o numero: ");
    scanf("%f",&y);
    if(x>y)
    {
        printf("O maior eh %f",x);
    }
    else{
        printf("O maior eh %f",y);
    }
    

    getchar();
    return 0;
}