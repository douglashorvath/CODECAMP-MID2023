#include <stdio.h>

int main(void)
{
    float nota, soma, media;

    soma = 0;
    for(int i=0;i<4;i++)
    {
        int j = i+1;
        printf("Digite a %da nota: ",j);
        scanf("%f",&nota);
        soma = soma + nota;
    }
    media = soma/4;
    if(media>=5)
    {
        printf("Aluno APROVADO!");
    }
    else{
        printf("Aluno REPROVADO");
    }
    

    getchar();
    return 0;
}