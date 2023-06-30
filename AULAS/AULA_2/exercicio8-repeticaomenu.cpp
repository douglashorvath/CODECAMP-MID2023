#include <stdio.h>

int main(void)
{
    int opcao;
    do
    {
        printf("Escolha uma opcao:\n1-Cadastro\n2-Leitura\n3-Edicao\n4-Exclusao\n0-Sair\n");
        scanf("%d", &opcao);
    } while (opcao != 0);

    // se torna desnecessário por causa do while
    // getchar();
    return 0;
}