#include <stdio.h>

int main(void){

    int par;
    printf("Os 20 primeiros numeros pares sao:\n");
    for(int i=1;i<=20;i++)
    {
        par = i*2;
        printf("%d\n",par);
    }

    getchar();
    return 0;
}