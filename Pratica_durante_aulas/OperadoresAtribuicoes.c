#include <stdio.h>
#include <string.h>

int main(){

    /* 
    Operadores matematicos com atribuição
    Simples (=)
    Soma (+=)
    Subtração (-=)
    Multiplicação (*=)
    Divisão (/=)
    */

    int num1, num2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    // resultado = resultado + 20
    resultado += 20;
    printf("Resultado (+=): %d\n", resultado);

    // resultado = resultado - 10
    resultado -= 10;
    printf("Resultado (-=): %d\n", resultado);

    // resultado = resultado * 5
    resultado *= 5;
    printf("Resultado (*=): %d\n", resultado);
    
    // resultado = resultado / 2
    resultado /= 2;
    printf("Resultado (/=): %d\n", resultado);

    return 0;


}