#include <stdio.h>

int main() {
   
    char estado1[2], codigo1[4], nomeCidade1[20], estado2[2], codigo2[4], nomeCidade2[20];
    int populacao1, numPontosTuristicos1, populacao2, numPontosTuristicos2;
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

    //Impressão dos dados

    printf("\n Suas cartas são: \n \n");
    
    //Primeira carta
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);    
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %2.f km2 \n", area1);
    printf("PIB: %2.f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n \n", numPontosTuristicos1);
    
    //Segunda carta
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);    
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %2.f km2 \n", area2);
    printf("PIB: %2.f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);
    
    return 0;
}
