#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao;
    int numeroSecreto, palpite;

    //Menu Principal
    printf("-- Menu Principal -- \n");
    printf("1. Iniciar o Jogo. \n");
    printf("2. Ver Regras. \n");
    printf("3. Sair. \n");
    printf("---------------------\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("bem vindo");


        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um numero (0-9): ");
        scanf("%d", &palpite);

        if (numeroSecreto == palpite){
            printf("Parabens, voce acertou o numero secreto!");
        } else {
            printf("Infelizmente voce errou! O numero secreto era: %d", numeroSecreto);
        }

        break;
    case 2:
        printf("A regras são...");
        break;
    case 3:
        printf("Saindo do jogo...");
        break;    
    default:
        printf("Opcao invalida");
        break;
    }







    return 0;
}