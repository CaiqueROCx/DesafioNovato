#include <stdio.h>

int main(){

    char estado, estado2;
    char codigo[30], codigo2[30];
    char cidade[30], cidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontoTuristico, pontoTuristico2;
    float densidade, densidade2;
    float pibPerCapita, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("Insira as informações da primeira carta\n");
    printf("Digite o estado da carta: \n");
    scanf(" %c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontoTuristico);

    printf("Insira as informações da segunda carta\n");
    printf("Digite o estado da carta: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontoTuristico2);

    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    pibPerCapita = (float) pib / populacao;
    pibPerCapita2 = (float) pib2 / populacao2;

    superPoder1 = populacao + area + pib + pontoTuristico + pibPerCapita + (1.0 / densidade);
    superPoder2 = populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapita2 + (1.0 / densidade2);

    printf("Carta 1 \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", 
           estado, codigo, cidade, populacao, area, pib, pontoTuristico, densidade, pibPerCapita, superPoder1);
    printf("Carta 2 \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n", 
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2, superPoder2);

    printf("\nResultados das Comparações:\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional (menor vence): %d\n", densidade < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
