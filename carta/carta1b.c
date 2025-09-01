#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1, cdcard1[4], cidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis para a carta 2
    char estado2, cdcard2[4], cidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Leitura dos dados da primeira cidade (carta 1)
    printf("=== Dados da Carta 1 ===\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado1);    

    printf("Digite o código da carta (Ex: A01): ");
    scanf(" %3s", cdcard1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda cidade (carta 2)
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Ex: B02): ");
    scanf(" %3s", cdcard2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados calculados
    printf("\n--- Cálculos ---\n");
    printf("%s (Estado: %c):\n", cidade1, estado1);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("- PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n%s (Estado: %c):\n", cidade2, estado2);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("- PIB per capita: R$ %.2f\n", pibPerCapita2);

    // ================================
    // COMPARAÇÃO (atributo escolhido)
    // ================================

    printf("\n=== Comparação de cartas (Atributo: Densidade Populacional) ===\n");
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! As duas cidades têm a mesma densidade populacional.\n");
    }

    return 0;
}