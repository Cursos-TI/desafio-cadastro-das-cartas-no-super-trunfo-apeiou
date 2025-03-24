#include <stdio.h>

int main(){

    int populacao1, pontoTur1;
    float area1, pib1;
    char estado1;
    char codigo1[3], cidade1[50];

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

    printf();
    


    return 0;
}
