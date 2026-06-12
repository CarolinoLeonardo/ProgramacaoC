#include <stdio.h>

// Função genérica para entrada de dados
void entradaDados(float *nota1, float *nota2){
    // código para função entradaDados
    printf("Digite a 1a nota: ");
    scanf("%f", nota1);

    printf("Digite a 2a nota: ");
    scanf("%f", nota2);
}

// Função genérica para cálculo da média
float calcularMedia(float nota1, float nota2){
    // código para a função calcularmédia
    return (nota1 + nota2) / 2;
}

// Função genérica para exibir dados
void exibirMedia(float media){
    // código para função exibirMedia
    printf("A média é: %.2f", media);
}

int main (){

    float nota1, nota2;
    float media;

    entradaDados(&nota1, &nota2);
    media = calcularMedia(nota1, nota2);
    exibirMedia(media);

    return 0;
}