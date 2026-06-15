#include <stdio.h>

int main (){

    float nota1, nota2, nota3, media;

    printf("Calculo da Média do Aluno\n");
    printf("Nota 1: ");
    scanf("%e", &nota1);
    printf("Nota 2: ");
    scanf("%e", &nota2);
    printf("Nota 3: ");
    scanf("%e", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("-------------------------\n");
    printf("A média do aluno é: %.1f", media);


    return 0;
}