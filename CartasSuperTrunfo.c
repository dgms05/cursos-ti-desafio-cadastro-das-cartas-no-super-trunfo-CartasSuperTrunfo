#include <stdio.h>
// Programa para cadastrar e exibir duas cartas do Super Trunfo de Países
int main() {
    // Variáveis Carta 1
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis Carta 2
    char estado2[50];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    //Cadastro Carta 1
    printf("Digite o estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da primeira carta: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da primeira carta (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    //Cadastro Carta 2
    printf("\nDigite o estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta (ex: A02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da segunda carta: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da segunda carta (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);  
    
    //Lógica para calcular duas novas propriedades
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    //Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);  
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);    
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("populacao1 > populacao2: %d\n", populacao1 > populacao2);
    printf("area1 > area2: %d\n", area1 > area2);
    printf("pib1 > pib2: %d\n", pib1 > pib2);
    printf("pontosTuristicos1 > pontosTuristicos2: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("densidadePopulacional1 < densidadePopulacional2: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("pibPerCapita1 > pibPerCapita2: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("superPoder1 > superPoder2: %d\n", superPoder1 > superPoder2);

    return 0;

}
