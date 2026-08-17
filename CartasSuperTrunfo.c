#include <stdio.h>

int main() {

    
    // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Declaração de variáveis da carta 1
    char estado1;
    char cidade1[50], codigo1[50];
    int ponto_turistico1;
    unsigned long int populacao1;
    float area1, pib1;
    float densidade1, capita1;
    float superPoder1;

    // Declaração de variáveis da carta 2
    char estado2;
    char cidade2[50], codigo2[50];
    int ponto_turistico2;
    unsigned long int populacao2;
    float area2, pib2;
    float densidade2, capita2;
    float superPoder2;

    // Declaração de variáveis da comparaçaõ das carta1 e carta2
    int resultadoP, resultadoPt;
    float resultadoA, resultadoPi, resultadoDp, resulatdoPc, resultadoSp;

    // Área para entrada de dados

    // Entrada de dados para a carta 1
    printf("\n--- Carta 1 ---\n");
    fflush(stdout);

    printf("Estado: \n");
    fflush(stdout);
    scanf(" %c", &estado1);

    printf("Codigo: \n");
    fflush(stdout);
    scanf(" %s", codigo1);
    
    printf("Nome da Cidade: \n");
    fflush(stdout);
    scanf(" %[^\n]", cidade1);

    printf("População: \n");
    fflush(stdout);
    scanf("%lu", &populacao1);

    printf("Área: \n");
    fflush(stdout);
    scanf("%f", &area1);

    printf("PIB: \n");
    fflush(stdout);
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    fflush(stdout);
    scanf("%d", &ponto_turistico1);

    // Cálculo da densidade populacional e do PIB per capita

    densidade1 = populacao1 / area1;
    capita1 = (float) pib1 / populacao1;

    // Cálculando os Super Poderes

    superPoder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + capita1 + (1 / densidade1);

    // Entrada de dados para a carta 2
    printf("\n--- Carta 2 ---\n");
    fflush(stdout);

    printf("Estado: \n");
    fflush(stdout);
    scanf(" %c", &estado2);

    printf("Codigo: \n");
    fflush(stdout);
    scanf(" %s", codigo2);

    printf("Nome da Cidade: \n");
    fflush(stdout);
    scanf(" %[^\n]", cidade2);

    printf("População: \n");
    fflush(stdout);
    scanf("%lu", &populacao2);

    printf("Área: \n");
    fflush(stdout);
    scanf(" %f", &area2);

    printf("PIB: \n");
    fflush(stdout);
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    fflush(stdout);
    scanf("%d", &ponto_turistico2);

    // Cálculo da densidade populacional e do PIB per capita

    densidade2 = populacao2 / area2;
    capita2 = (float) pib2 / populacao2;

    superPoder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + capita2 + (1 / densidade2);

    // Área para exibição dos dados da cidade carta 1

    printf("\n--- Carta 1 ---\n");

    printf("Estado: %c\n", estado1);
    printf("Codígo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %f reais\n", capita1);
    printf("Super Poder %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Codígo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %f reais\n", capita2);
    printf("Super Poder %.2f\n", superPoder2);
    
    //Comparação de Cartas

    resultadoP = populacao1 > populacao2;
    resultadoA = area2 > area2;
    resultadoP = pib1 > pib2;
    resultadoPt = ponto_turistico1 > ponto_turistico2;
    resultadoDp = densidade1 > densidade2;
    resulatdoPc = capita1 > capita2;
    resultadoSp = superPoder1 > superPoder2;

    printf("\n--- Comparação das Cartas ---\n");
    printf("População: (%d)\n", resultadoP);
    printf("Área: (%d)\n", resultadoA);
    printf("PIB: (%d)\n", resultadoPi);
    printf("Ponto Turísticos: (%d)\n", resultadoPt);
    printf("Densidade Populacional: (%d)\n", resultadoDp);
    printf("PIB per Capita: (%d)\n", resulatdoPc);
    printf("Super Poder: (%d)\n", resultadoSp);

    return 0;
}