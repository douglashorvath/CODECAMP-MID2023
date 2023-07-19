#include <stdio.h>

int main(void)
{
    int numeros[3];

    // lendo os numeros
    for (int i = 0; i < 3; i++)
    {
        int j = i + 1;
        printf("Digite o %do numero: ", j);
        scanf("%d", &numeros[i]);
    }

    //ordena o vetor
    int permutacoes;
    do{
        permutacoes=0;
        for (int i = 0; i < 2; i++)
        {
            if(numeros[i]>numeros[i+1])
            {
                int aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
                permutacoes++;
            }
        }
    }while(permutacoes>0);

    //exibe na ordem
    printf("Os numeros na ordem sao: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", numeros[i]);
    }

    getchar();
    return 0;
}