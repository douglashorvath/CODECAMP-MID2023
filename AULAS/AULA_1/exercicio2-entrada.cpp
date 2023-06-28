#include <stdio.h>

int main(void)
{
    // declaração de variável
    int numero;

    // printa escrava um numero e pula uma linha com \n
    printf("Escreva um numero: \n");

    // vários marcadores: %d é para inteiros, %f para racionais, %s para string, %c para caractere, entre outros
    scanf("%d", &numero);

    // imprimir o numero que eu digitei
    printf("o numero digitado foi: %d", numero);

    // sempre vai ter no final
    getchar();
    return 0;
}
