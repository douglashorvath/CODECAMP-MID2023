#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//protótipo de função
int multiplica(int n1, int n2);
double potencia(double n1, double n2);
float divisao(float a, float b);
float raiz(float n);

int main(void){

    int mult = multiplica(10,2);
    printf("O resultado da multiplicacao eh: %d", mult);
    double pot = potencia(10,2);
    printf("\nO resultado da potenciacao eh: %f", pot);
    float div = divisao(10,2);
    printf("\nO resultado da divisao eh: %.2f",div);
    float raizquadrada = raiz(25);
    printf("\nO resultado da raiz eh: %.2f", raizquadrada);

    float f = 1.555;
    //função que arredonda pra cima
    float f_cima = ceil(f);
    printf("\n\nArredondando f pra cima: %.0f",f_cima);
    //função que arredonda pra baixo
    float f_baixo = floor(f);
    printf("\nArredondando f pra baixo: %.0f",f_baixo);

    // a math tem outras funções:
    //sin(); seno
    //cos(); cosseno
    //tan(); tangente
    //log(); logaritmo natural (Log na base e)
    //log10(); logaritmo base 10
    

    getchar();
    return 0;
}

float raiz(float n){
    float resultado;
    resultado = sqrt(n);
    return resultado;
}

float divisao(float a, float b){
    float resultado;
    resultado = a/b;
    return resultado;
}

double potencia(double n1, double n2){
    double resultado;
    resultado = pow(n1,n2);
    return resultado;
}

int multiplica(int n1, int n2){

    int resultado;
    resultado = n1*n2;
    return resultado;

}