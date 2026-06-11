#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[10];

    //sintaxe scanf
    //scanf("%formato1""%formato2", &variavel1, &variavel2 ...);

    printf("Escreva seu nome: ");
    scanf("%s", &nome);
    printf("Bem vindo, %s!\n", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Com %d anos, você está apto a jogar.\n", idade);

    return 0;

}