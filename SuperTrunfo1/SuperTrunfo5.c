#include <stdio.h>
#include <string.h>

int main(){

    //Variáveis Carta1
    unsigned long int populacao1;
    int pturistico1;
    float area1, pib1;
    float densidade1, pibpc1;
    char cidade1[100], cod1[10], estado1[100];
    unsigned int superPoder1;

    //Variáveis Carta2
    unsigned long int populacao2;
    int pturistico2;
    float area2, pib2;
    float densidade2, pibpc2;
    char cidade2[100], cod2[10], estado2[100];
    unsigned int superPoder2;

    //Variáveis gerais
    int opcao;
    
    // Cabeçalho
    printf("------------------------------\n");
    printf("---- Super Trunfo Cidades-----\n");
    printf("------------------------------\n");
    printf("\n");

    // Cadastro Carta 1
    printf("------------------------------\n");
    printf("---- Cadastre a 1a Carta  ----\n");
    printf("------------------------------\n");
    printf("\n");
    
    printf("Digite o codigo da carta: ");
    fgets(cod1, sizeof(cod1), stdin);
    cod1[strcspn(cod1, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite o nome do Estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturistico1);

    getchar(); // limpa o Enter deixado pelo scanf

    // Cadastro Carta 2

    printf("------------------------------\n");
    printf("---- Cadastre a 2a Carta  ----\n");
    printf("------------------------------\n");
    printf("\n");
    
    printf("Digite o codigo da carta: ");
    fgets(cod2, sizeof(cod2), stdin);
    cod2[strcspn(cod2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o nome do Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturistico2);

    //calculos
    densidade1 = populacao1 / area1;
    pibpc1 = (pib1 / populacao1) * 1000;
    densidade2 = populacao2 / area2;
    pibpc2 = (pib2 / populacao2) * 1000;
    superPoder1 = (float) populacao1 + area1 + pib1 + pturistico1 + pibpc1 + (1.0 / densidade2);
    superPoder2 = (float) populacao2 + area2 + pib2 + pturistico2 + pibpc2 + (1.0 / densidade2);

    // Menu de escolha para comparar cartas

    printf("-------------------------------------------- \n");
    printf("         MENU DE ESCOLHAS - COMPARAÇÃO       \n");
    printf("-------------------------------------------- \n");
    printf("   1. População \n");
    printf("   2. Area \n");
    printf("   3. PIB \n");
    printf("   4. Numero de Pontos Turisticos \n");
    printf("   5. Densidade demografica \n");
    printf("-------------------------------------------- \n");
    printf(" Digite a opcao: ");
    scanf("%d", &opcao);
    printf("-------------------------------------------- \n");

    switch (opcao)
    {
        case 1:
            printf("Comparação da carta 1 (%s) e carta 2 (%s) \n", cidade1, cidade2);
            printf("Comparando a População. \n");
            printf("Com o valores de carta 1 (%lu) e carta 2 (%lu) \n", populacao1, populacao2);
            if (populacao1 > populacao2){
                printf("Resultado: CARTA 1 VENCEU! \n");
            } else if (populacao1 == populacao2){
                printf("Resultado: EMPATE! \n");
            } else
            {
                printf("Resultado: CARTA 2 VENCEU! \n");
            }
            break;
        case 2:
            printf("Comparação da carta 1 (%s) e carta 2 (%s) \n", cidade1, cidade2);
            printf("Comparando a Area. \n");
            printf("Com o valores de carta 1 (%.1f) e carta 2 (%.1f) \n", area1, area2);
            if (area1 > area2){
                printf("Resultado: CARTA 1 VENCEU! \n");
            } else if (area1 == area2){
                printf("Resultado: EMPATE! \n");
            } else
            {
                printf("Resultado: CARTA 2 VENCEU! \n");
            }
            break;
        case 3:
            printf("Comparação da carta 1 (%s) e carta 2 (%s) \n", cidade1, cidade2);
            printf("Comparando o PIB. \n");
            printf("Com o valores de carta 1 (%.1f) e carta 2 (%.1f) \n", pib1, pib2);
            if (pib1 > pib2){
                printf("Resultado: CARTA 1 VENCEU! \n");
            } else if (pib1 == pib2){
                printf("Resultado: EMPATE! \n");
            } else
            {
                printf("Resultado: CARTA 2 VENCEU! \n");
            }
            break;
        case 4:
            printf("Comparação da carta 1 (%s) e carta 2 (%s) \n", cidade1, cidade2);
            printf("Comparando os Pontos Turisticos. \n");
            printf("Com o valores de carta 1 (%d) e carta 2 (%d) \n", pturistico1, pturistico2);
            if (pturistico1 > pturistico2){
                printf("Resultado: CARTA 1 VENCEU! \n");
            } else if (pturistico1 == pturistico2){
                printf("Resultado: EMPATE! \n");
            } else
            {
                printf("Resultado: CARTA 2 VENCEU! \n");
            }
            break;
        case 5:
            printf("Comparação da carta 1 (%s) e carta 2 (%s) \n", cidade1, cidade2);
            printf("Comparando os Densidade Demografica. \n");
            printf("Com o valores de carta 1 (%.1f) e carta 2 (%.1f) \n", densidade1, densidade2);
            if (densidade1 < densidade2){
                printf("Resultado: CARTA 1 VENCEU! \n");
            } else if (densidade1 == densidade2){
                printf("Resultado: EMPATE! \n");
            } else
            {
                printf("Resultado: CARTA 2 VENCEU! \n");
            }
            break;
    default:
        printf("opcao invalida. Fechando o jogo...");
        break;
    }

    return 0;
}