#include <stdio.h>

int main(){

    //dados da carta 1
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontoTur1;
    float area1, pib1;

    //entrada dos dados da carta 1
    printf("Insira os dados da primeira carta \n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);
    printf("Digite o número da população: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área (em km²): \n");
    scanf(" %f", &area1);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &pontoTur1);

    //visualização dos dados da carta 1
    printf("Dados da primeira carta: \n");
    printf("Estado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais\nPontos turísticos: %d \n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontoTur1);

    return 0;
}
