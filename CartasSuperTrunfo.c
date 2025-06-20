#include <stdio.h>

int main(){
    char estado1[2], codigo1[4], nomeCidade1[20], estado2[2], codigo2[4], nomeCidade2[20];
    int numPontosTuristicos1, numPontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    
    //entrada de dados da primeira carta
    printf("-> Insira os dados da primeira carta \n");

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", &estado1);
    
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nomeCidade1);
    
    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2) da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o pib (em bilhões de reais) da primeira carta: \n");
    scanf("%f", &pib1);
        
    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &numPontosTuristicos1);

    //entrada de dados da segunda carta
    printf("-> Insira os dados da segunda carta \n");

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", &estado2);
    
    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nomeCidade2);
    
    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2) da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o pib (em bilhões de reais) da segunda carta: \n");
    scanf("%f", &pib2);
        
    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &numPontosTuristicos2);

    // Cálculo de variáveis

    float densidadePopulacional1 = (float) populacao1 / area1;
    float densidadePopulacional2 = (float) populacao2 / area2;

    float pibPerCapita1 = pib1 * (1e9) / (float) populacao1;
    float pibPerCapita2 = pib2 * (1e9) / (float) populacao2;

    // Cálculo do super poder
    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) numPontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) numPontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    //Impressão dos dados
    printf("\n Suas cartas são: \n \n");
    
    //Primeira carta
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);    
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km2 \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapita1);
    
    //Segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);    
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapita2);


    // Comparação de Cartas
    printf("\n Comparação de Cartas: \n");
    
    char populacaoVencedora = (populacao1 > populacao2) ? '1' : '2';
    printf("População: Carta %c venceu (%d)\n", populacaoVencedora, populacao1 > populacao2);

    char areaVencedora = (area1 > area2) ? '1' : '2';
    printf("Área: Carta %c venceu (%d)\n", areaVencedora, area1 > area2);

    char pibVencedor = (pib1 > pib2) ? '1' : '2';
    printf("PIB: Carta %c venceu (%d)\n", pibVencedor, pib1 > pib2 );

    char pontosTurVencedor = (numPontosTuristicos1 > numPontosTuristicos2) ? '1' : '2';
    printf("Número de Pontos Turísticos: Carta %c venceu (%d)\n", pontosTurVencedor, numPontosTuristicos1 > numPontosTuristicos2);

    char densidadePopVencedora = (densidadePopulacional1 < densidadePopulacional2) ? '1' : '2';
    printf("Densidade Populacional: Carta %c venceu (%d)\n", densidadePopVencedora, densidadePopulacional1 < densidadePopulacional2);

    char pibPerCapitaVencedora = (pibPerCapita1 > pibPerCapita2) ? '1' : '2';
    printf("PIB per Capita: Carta %c venceu (%d)\n", pibPerCapitaVencedora, pibPerCapita1 > pibPerCapita2 );

    char superPoderVencedor = (superPoder1 > superPoder2) ? '1' : '2';
    printf("Super Poder: Carta %c venceu (%d)\n", superPoderVencedor, superPoder1 > superPoder2 );

    return 0;

}