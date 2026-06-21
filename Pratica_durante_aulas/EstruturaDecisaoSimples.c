#include <stdio.h>

int main (){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // checagem de idade para votar
    if (idade > 16) {
        printf("Você pode votar \n");
    } else {
        printf("Você ainda não pode votar \n");
    }

    // Checagem se a idade é par ou impar
    if (idade % 2 == 0){
        printf("Sua idade é par \n");
    } else {
        printf("Sua idade é impar \n");
    }

    return 0;
}