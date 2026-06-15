#include <stdio.h>

int main (){

    /*
    Increment (++)
    Pré-Incremento ++a
    Pós-decremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int num1 = 1;
    int resultado;

    printf("Antes do Encremento: %d\n", num1);

    //Encremento simples
    num1++;
    printf("Após Encremento: %d\n", num1);

    //Pós-Encremento simples
    resultado = num1++;
    printf("Após o Pós-Encremento - Num1: %d - Resultado: %d\n", num1, resultado);

    //Pré-Encremento simples
    resultado = ++num1;
    printf("Após o Pré-Encremento - Num1: %d - Resultado: %d\n", num1, resultado);

    //Decremento simples
    num1--;
    printf("Após Decremento: %d\n", num1);

    return 0;
}