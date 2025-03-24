#include <stdio.h>

int main(){

    //variaveis da primeira carta
    int populacao1, pontoTur1;
    float area1, pib1;
    char estado1;
    char codigo1[10], cidade1[50];

    //dados da primeira carta
    printf("Insira os dados da primeira carta\n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontoTur1);

    //variaveis da segunda carta
    int populacao2, pontoTur2;
    float area2, pib2;
    char estado2;
    char codigo2[3], cidade2[50];

    //dadps da segunda carta
    printf("Agora insira os dados da segunda carta\n");
    printf("Digite a letra do estado? \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontoTur2);  
    
    //imprime os dados de ambas as cartas
    printf("As cartas são: \n");
    //mostra da carta 1
    printf("Carta 1: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n", estado1, codigo1, cidade1); //dados da primeira carta
    printf(" População: %d\n Área: %.2fkm²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n\n", populacao1, area1, pib1, pontoTur1);
    //mostra da carta 2
    printf("Carta 2: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n", estado2, codigo2, cidade2); //dados da segunda carta
    printf(" População: %d\n Área: %.2fkm²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n", populacao2, area2, pib2, pontoTur2);

    return 0;
}
