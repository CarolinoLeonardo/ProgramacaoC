#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Variaveis
    int escolhaJogador, escolhaComputador;

    //Inicio do jogo

    srand(time(0));
    escolhaComputador = rand() % 3 + 1;

    printf("--- Bem vindo ao Jogo de Jo Ken Po --- \n");
    printf("    1. Pedra \n");
    printf("    2. Papel \n");
    printf("    3. Tesoura \n");
    printf("-------------------------------------- \n");
    printf("    Escolha uma opcao: ");
    scanf("%d", &escolhaJogador);
    printf("-------------------------------------- \n");

    switch (escolhaJogador)
    {
        case 1:
        if (escolhaComputador == 1)
        {
            printf("Voce escolheu: Pedra \n");
            printf("O computador escolheu: Pedra \n");
            printf("Resultado: EMPATE! \n");
            printf("-------------------------------------- \n");
        } else if (escolhaComputador == 2)
        {
            printf("Voce escolheu: Pedra \n");
            printf("O computador escolheu: Papel \n");
            printf("Resultado: VOCE PERDEU! \n");
            printf("-------------------------------------- \n");
        } else
        {
            printf("Voce escolheu: Pedra \n");
            printf("O computador escolheu: Tesoura \n");
            printf("Resultado: VOCE VENCEU! \n");
            printf("-------------------------------------- \n");
        }         
        break;
        
        case 2:
        if (escolhaComputador == 1)
        {
            printf("Voce escolheu: Papel \n");
            printf("O computador escolheu: Pedra \n");
            printf("Resultado: VOCE VENCEU! \n");
            printf("-------------------------------------- \n");
        } else if (escolhaComputador == 2)
        {
            printf("Voce escolheu: Papel \n");
            printf("O computador escolheu: Papel \n");
            printf("Resultado: EMPATE! \n");
            printf("-------------------------------------- \n");
        } else
        {
            printf("Voce escolheu: Papel \n");
            printf("O computador escolheu: Tesoura \n");
            printf("Resultado: VOCE PERDEU! \n");
            printf("-------------------------------------- \n");
        }
        break;

        case 3:
        if (escolhaComputador == 1)
        {
            printf("Voce escolheu: Tesoura \n");
            printf("O computador escolheu: Pedra \n");
            printf("Resultado: VOCE PERDEU! \n");
            printf("-------------------------------------- \n");
        } else if (escolhaComputador == 2)
        {
            printf("Voce escolheu: Tesoura \n");
            printf("O computador escolheu: Papel \n");
            printf("Resultado: VOCE VENCEU! \n");
            printf("-------------------------------------- \n");
        } else
        {
            printf("Voce escolheu: Tesoura \n");
            printf("O computador escolheu: Tesoura \n");
            printf("Resultado: EMPATE! \n");
            printf("-------------------------------------- \n");
        }
        break;
    
    default:
        printf("Escolha invalida. Finalizando o jogo. \n");
        printf("-------------------------------------- \n");
        break;
    }

    return 0;
}