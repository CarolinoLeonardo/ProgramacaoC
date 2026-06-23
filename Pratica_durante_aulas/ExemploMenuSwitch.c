#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;


    printf("-- Caixa Eletronico -- \n");
    printf("1. Verificar saldo. \n");
    printf("2. Fazer deposito. \n");
    printf("3. Fazer saque. \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu saldo: R$1.000,00.");
        break;
    case 2:
        printf("Qual o valor você deseja depositar?");
        break;
    case 3:
        printf("Qual o valor você deseja sacar");
        break;
    default:
        printf("Opção Invalida.");
        break;
    }

    return 0;
}