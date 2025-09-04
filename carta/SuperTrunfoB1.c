// SUPER TRUNFO DESENVOLVIMENTO A LOGICA DO JOGO NOVATO

#include <stdio.h>

// Programa para cadastrar e exibir duas cartas do Super Trunfo de cidades

int main() {
    // Declaração de variáveis para a carta 1
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

    // Declaração de variáveis para a carta 2
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

    printf("Informe a inicial de seu Estado (ex: P de Paraná): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + pibPerCapita1 + (1.0f / densidade1) + (float)pontosTuristicos1;

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe a inicial de seu Estado (ex: P de Paraná): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + pibPerCapita2 + (1.0f / densidade2) + (float)pontosTuristicos2;

    // Exibição dos dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1); // Exibição do Super Poder

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2); // Exibição do Super Poder

     // Comparações com explicações e resultados mais legíveis
    printf("\n--- COMPARAÇÃO ENTRE AS CARTAS ---\n");

    // População
    printf("\nPopulação:\n");
    printf("Carta 1: %d habitantes | Carta 2: %d habitantes\n", populacao1, populacao2);
if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}

    // Área
    printf("\nÁrea:\n");
    printf("Carta 1: %.2f km² | Carta 2: %.2f km²\n", area1, area2);
if (area1 > area2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (area2 > area1) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}

    // PIB
    printf("\nPIB:\n");
    printf("Carta 1: %.2f bilhões | Carta 2: %.2f bilhões\n", pib1, pib2);
if (pib1 > pib2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (pib2 > pib1) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}

    // Pontos turísticos
    printf("\nPontos Turísticos:\n");
    printf("Carta 1: %d | Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
if (pontosTuristicos1 > pontosTuristicos2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (pontosTuristicos2 > pontosTuristicos1) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}

    // Densidade populacional (menor vence)
    printf("\nDensidade Populacional:\n");
    printf("Carta 1: %.2f hab/km² | Carta 2: %.2f hab/km²\n", densidade1, densidade2);
if (densidade1 < densidade2) {
    printf("Resultado: Carta 1 venceu! (menor densidade)\n");
} else if (densidade2 < densidade1) {
    printf("Resultado: Carta 2 venceu! (menor densidade)\n");
} else {
    printf("Resultado: Empate!\n");
}

    // PIB per capita
    printf("\nPIB per Capita:\n");
    printf("Carta 1: %.2f reais | Carta 2: %.2f reais\n", pibPerCapita1, pibPerCapita2);
if (pibPerCapita1 > pibPerCapita2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (pibPerCapita2 > pibPerCapita1) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}

    // Super Poder
    printf("\nSuper Poder:\n");
    printf("Carta 1: %.2f | Carta 2: %.2f\n", superPoder1, superPoder2);
if (superPoder1 > superPoder2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (superPoder2 > superPoder1) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}

return 0;
}