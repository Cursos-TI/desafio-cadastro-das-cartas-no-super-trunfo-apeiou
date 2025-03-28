#include <stdio.h>

int main(){
    //banco de variáveis
        //carta 1
        char estado1, codigo1[5], cidade1[50];
        int pontoTur1;
        unsigned long int populacao1;
        float area1, pib1, densidadePop1, pibConversao1, pibCapita1, superPoder1;

        //carta 2
        char estado2, codigo2[5], cidade2[50];
        int pontoTur2;
        unsigned long int populacao2;
        float area2, pib2, densidadePop2, pibConversao2, pibCapita2, superPoder2;


    //leitura dos dados das cartas
        //carta 1
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

        //carta 2
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
        

    //cálculo dos dados e comparações entre cartas
        //carta 1
        densidadePop1 = (float)((float)populacao1 / area1);
        pibConversao1 = (pib1 * 1000000000);
        pibCapita1 = (float)(pibConversao1 / populacao1);
        superPoder1 = populacao1 + pib1 + pontoTur1 + pibCapita1 + (-densidadePop1);

        //carta 2
        densidadePop2 = (float)((float)populacao2 / area2);
        pibConversao2 = (pib2 * 1000000000);
        pibCapita2 = (float)(pibConversao2 / populacao2);
        superPoder2 = populacao2 + pib2 + pontoTur2 + pibCapita2 + (-densidadePop2);

    
    //impressão dos dados das cartas
        //carta 1
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

        //carta 2
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


    //comparação dos valores entre as cartas
        int compPopulacao = populacao1 > populacao2;
        int compArea = area1 > area2;
        int compPib = pib1 > pib2;
        int compPontoTur = pontoTur1 > pontoTur2;
        int compDensidade = densidadePop1 < densidadePop2;
        int compPibCapita = pibCapita1 > pibCapita2;
        int compSuperPoder = superPoder1 > superPoder2;

    
    //impressão das comparações entre as cartas
        printf("\nComparação de Cartas: \n");
        printf("População: Carta 1 venceu? (%d)\n", compPopulacao);
        printf("Área: Carta 1 venceu? (%d)\n", compArea);
        printf("PIB: Carta 1 venceu? (%d)\n", compPib);
        printf("Pontos Turísticos: Carta 1 venceu? (%d)\n", compPontoTur);
        printf("Densidade Populacional: Carta 2 venceu? (%d)\n", compDensidade);
        printf("PIB per Capita: Carta 1 venceu? (%d)\n", compPibCapita);
        printf("Super Poder: Carta 1 venceu? (%d)\n", compSuperPoder);
    

    return 0;
}
