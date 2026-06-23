#include <stdio.h>

int main (){
    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if (num1 > 0){
        printf("POSITIVO.");
        if (num1 % 2 == 0){
            printf("Numero par.");
        } else {
            printf("Numero impar.");
        }
    } else if (num1 == 0){
        printf("ZERO.");
        }
        else {
            printf("NEGATIVO.");
        } 

    return 0;
}