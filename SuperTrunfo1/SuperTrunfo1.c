#include <stdio.h>
#include <string.h>

int main(){

    int populacao1, populacao2, pturistico1, pturistico2;
    float area1, area2, pib1, pib2;
    char cidade1[100], cidade2[100], cod1[10], cod2[10], estado1[100], estado2[100];

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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturistico2);

    // Exibição das Cartas
    printf("\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pturistico1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pturistico2);

    return 0;
}