#include <stdio.h>

int main(){

    //dados da carta 1
        char estado1, codigo1[5], cidade1[50];
        int populacao1, pontoTur1;
        float area1, pib1, densidadePop1, pibConversao1, pibCapita1;
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
        //cálculo densidadePop e pibCapita
        densidadePop1 = (float)(populacao1 / area1);
        pibConversao1 = (pib1 * 1000000000);
        pibCapita1 = (float)(pibConversao1 / populacao1);


    //dados da carta 2
        char estado2, codigo2[5], cidade2[50];
        int populacao2, pontoTur2;
        float area2, pib2, densidadePop2, pibConversao2, pibCapita2;
        //entrada dos dados da carta 2
        printf("Insira os dados da segunda carta \n");
        printf("Digite a letra do estado: \n");
        scanf(" %c", &estado2);
        printf("Digite o código da carta: \n");
        scanf(" %s", codigo2);
        printf("Digite o nome da cidade: \n");
        scanf(" %s", cidade2);
        printf("Digite o número da população: \n");
        scanf(" %d", &populacao2);
        printf("Digite a área (em km²): \n");
        scanf(" %f", &area2);
        printf("Digite o PIB: \n");
        scanf(" %f", &pib2);
        printf("Digite o número de pontos turísticos: \n");
        scanf(" %d", &pontoTur2);
        //cálculo densidadePop e pibCapita
        densidadePop2 = (float)(populacao2 / area2);
        pibConversao2 = (pib2 * 1000000000);
        pibCapita2 = (float)(pibConversao2 / populacao2);

    //visualização dos dados da carta 1
        printf("\nA primeira carta é: \n");
        printf("Estado: %c \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("População: %d \n", populacao1);
        printf("Área: %.2f km² \n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos turísticos: %d \n", pontoTur1);
        printf("Densidade Populacional: %.2f hab/km² \n", densidadePop1);
        printf("PIB per Capita: %.2f reais \n", pibCapita1);

    //visualização dos dados da carta 2
        printf("\nA primeira carta é: \n");
        printf("Estado: %c \n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2f km² \n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d \n", pontoTur2);
        printf("Densidade Populacional: %.2f hab/km² \n", densidadePop2);
        printf("PIB per Capita: %.2f reais \n", pibCapita2);
        return 0;
}
