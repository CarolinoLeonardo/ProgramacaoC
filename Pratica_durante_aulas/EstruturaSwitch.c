#include <stdio.h>

int main (){

    int variavel;

    printf("Digite um numero: ");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        printf("Valor = 1");
    break;
    case 2:
        printf("Valor = 2");
    break;
    default:
        printf("Valor aleatorio.");
    }


    return 0;
}