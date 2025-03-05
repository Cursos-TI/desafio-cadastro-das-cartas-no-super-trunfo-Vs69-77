#include <stdio.h>

int main() {

    char estado = 'A'; 
    char cod[10] = "A03";
    char city[10] = "Miami";
    int populacao = 100000;
    float area = 1432.98;
    float pib = 586.65;
    int point = 14;
    float dp = (float) populacao / area;   
    float pper = (float) pib / (populacao / 1000);


    printf(" Carta 1: \n Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %f km² \n PIB: %f bilhoes de reais \n Numero de Pontos Turisticos: %d \n Densidade Populacional: %.2f hab/km2\n O PIB per capita e de: R$%.3f \n", estado, cod, city, populacao, area, pib, point, dp, pper);

    char estado2 = 'B'; 
    char cod2[10] = "B02";
    char city2[10] = "Phoenix";
    int populacao2 = 90000;
    float area2 = 954.12;
    float pib2 = 379.24;
    int point2 = 9;
    float dp2 = (float) populacao2 / area2;
    float pper2 = (float) pib2 / (populacao2 / 1000);

    printf("\n Carta 2: \n Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %f km² \n PIB: %f bilhoes de reais \n Numero de Pontos Turisticos: %d \n Densidade Populacional: %.2f hab/km2\n O PIB per capita e de: R$%.3f \n", estado2, cod2, city2, populacao2, area2, pib2, point2, dp2, pper2);
    
        return 0;

}
