#include <stdio.h>

int main() {
    // Primeira cidade
    char estado, cdcard[4], nmcidade[30];
    int populacao, NPT;
    float Km, PIB;

    // Segunda cidade
    char estado2, cdcard2[4], nmcidade2[30];
    int populacao2, NPT2;
    float Km2, PIB2;

    // --- Entrada da primeira cidade ---
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta (uma letra de A a H e um número de 01 a 04): \n");
    scanf(" %3s", cdcard);

    printf("Digite o nome de sua cidade: \n");
    scanf(" %[^\n]", nmcidade);

    printf("Digite o total da população de sua cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área em km² de sua cidade: \n");
    scanf(" %f", &Km);

    printf("Digite o PIB de sua cidade: \n");
    scanf(" %f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &NPT);

    // --- Entrada da segunda carta ---
    printf("\nDigite a inicial do estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf(" %3s", cdcard2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", nmcidade2);

    printf("Digite a população da segunda cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da segunda cidade (em km²): \n");
    scanf(" %f", &Km2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf(" %f", &PIB2);

    printf("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf(" %d", &NPT2);

    // --- Saída das informações ---
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Inicial do estado: %c\n", estado);
    printf("Código da carta: %s\n", cdcard);
    printf("Nome da cidade: %s\n", nmcidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", Km);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", NPT);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Inicial do estado: %c\n", estado2);
    printf("Código da carta: %s\n", cdcard2);
    printf("Nome da cidade: %s\n", nmcidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Km2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", NPT2);

    return 0;
}
