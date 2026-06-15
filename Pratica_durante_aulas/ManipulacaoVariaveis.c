#include <stdio.h>

int main(){

    int a = 10, b = 3;
    int soma1 = a + b;
    int diferenca1 = a - b;
    int produto1 = a * b;
    int quociente1 = a / b; // Divisão de Inteiros resulta somente em inteiros

    float c = 5.5, d = 2.2;
    float soma2 = c + d;
    float diferenca2 = c - d;
    float produto2 = c * d;
    float quociente2 = c / d; // Divisão de Ponto Flutuante resulta na divisão completa

    printf("Soma: %d\n", soma1);
    printf("Diferença: %d\n", diferenca1);
    printf("Produto: %d\n", produto1);
    printf("Quociente: %d\n", quociente1);

    printf("---------------------------\n");

    printf("Soma: %.2f\n", soma2);
    printf("Diferença: %.2f\n", diferenca2);
    printf("Produto: %.2f\n", produto2);
    printf("Quociente: %.2f\n", quociente2);

    return 0;
}