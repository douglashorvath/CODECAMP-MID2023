#include <stdio.h> // biblioteca padrao de input e output
#include <stdlib.h> // biblioteca padrão de localizao das bibliotecas
#include <locale.h> // necessária para uso de acentos

int main(void){

    printf("LOCALIZAÇÃO ATUAL: %s\n\n", setlocale(LC_ALL,NULL));
    setlocale(LC_ALL, "");
    //Para sistemas operacionais em outras línguas:
    //setlocale(LC_ALL, "Portuguese");
    //ou
    //setlocale(LC_ALL, "Portuguese_Brazil.1252");
    printf("NOVA LOCALIZAÇÃO ATUAL: %s", setlocale(LC_ALL, ""));

    getchar();
    return 0;
}