#include <stdio.h>

int main(){

    int idade = 34;
    float altura = 1.77;
    char opcao = 'S';
    char nome[10] = "Leonardo";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);

    return 0;

    /*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %.2f: Imprime um número de ponto flutuante com apenas 2 casas decimais.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    \n: Pula a linha.
    */


}