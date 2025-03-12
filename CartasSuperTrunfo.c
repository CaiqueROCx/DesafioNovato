#include <stdio.h>

int main(){

    char estado;
    char codigo[30];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;
    float densidade;
    float pibPerCapita;

    char estado2;
    char codigo2[30];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densidade2;
    float pibPerCapita2;

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

    printf("Carta 1 \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, pontoTuristico, densidade, pibPerCapita);
    printf("Carta 2 \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2);

}