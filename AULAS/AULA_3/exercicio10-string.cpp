#include <stdio.h>
#include <conio.h>

int main(void)
{
    // char nome_da_string[30]; //caracter terminador \0
    // char nome[] = "Douglas Horvath";
    // char nome_sobra[100] = "Douglas";
    // char string_vetor[] = {'d','o','u','g','l','a','s'};

    // printf("%s\n",nome);
    // printf("%s\n",nome_sobra);
    // //printf("%s\n",string_vetor);

    char nome[20];

    printf("Digite seu nome: ");
    //scanf("%s",nome);
    printf("Seu nome eh: %s\n",nome);

    printf("Digite seu nome e sobrenome: ");
    fgets(nome,19,stdin);
    printf("Seu nome completo eh: %s", nome);

    getchar();
    return 0;
}