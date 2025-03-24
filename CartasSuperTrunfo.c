#include <stdio.h>

int main(){

    //dados da carta 1
    char estado1;
    char codigo1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoTur1;

    //entrada dos dados da carta 1
    printf("Insira os dados da primeira carta \n");
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

    /*
    Considerando a visualização da carta, em ordem, como:
    Estado:
    Código:
    Nome da Cidade:
    População:
    Área
    PIB:
    Número de Pontos Turísticos:
    */
    printf("Dados da primeira carta: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turísticos: %d \n", pontoTur1);

    return 0;
}
