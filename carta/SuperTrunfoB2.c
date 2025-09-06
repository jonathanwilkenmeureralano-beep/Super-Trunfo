// SUPER TRUNFO - DESENVOLVIMENTO A LOGICA DO JOGO - NIVEL AVENTUREIRO

#include <stdio.h>

int main() {
    // Declaração de variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração de variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Leitura dos dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe a inicial de seu Estado: ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta: ");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Informe a População: ");
    scanf("%d", &populacao1);
    printf("Informe a Área (km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + pibPerCapita1 + (1.0f / densidade1) + pontosTuristicos1;

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe a inicial de seu Estado: ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta: ");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Informe a População: ");
    scanf("%d", &populacao2);
    printf("Informe a Área (km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + pibPerCapita2 + (1.0f / densidade2) + pontosTuristicos2;

    // Menu de comparação
    int opcao;

    printf("\n---- MENU DE COMPARAÇÃO ----\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nPopulação: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nÁrea: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomeCidade2);                
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nPIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nPontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nDensidade Populacional: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s (menor densidade)\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (menor densidade)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("\nPIB per Capita: %.2f vs %.2f\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("\nSuper Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 0:
            printf("Encerrando o jogo...\n");
            break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }


    return 0;
}