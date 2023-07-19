#include <stdio.h>

int main(void)
{
    // para alterar a quantidade de elementos basta alterar o tamanho do vetor

    int numeros[10];

    // lendo os numeros
    size_t n = sizeof(numeros) / sizeof(numeros[0]);
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        printf("Digite o %do numero: ", j);
        scanf("%d", &numeros[i]);
    }

    // ordena o vetor
    int permutacoes;
    do
    {
        permutacoes = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (numeros[i] > numeros[i + 1])
            {
                int aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
                permutacoes++;
            }
        }
    } while (permutacoes > 0);

    // exibe na ordem
    printf("Os numeros na ordem sao: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", numeros[i]);
    }

    getchar();
    return 0;
}