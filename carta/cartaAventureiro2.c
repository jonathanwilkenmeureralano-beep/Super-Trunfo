#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char estado1, cdcard1[4], nmcidade1[30];
    int populacao1, NPT1;
    float Km1, PIB1, densidade1;

    // Variáveis da segunda cidade
    char estado2, cdcard2[4], nmcidade2[30];
    int populacao2, NPT2;
    float Km2, PIB2, densidade2;

    int opcao;

    // --- Entrada dos dados da primeira carta ---
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf(" %3s", cdcard1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nmcidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &Km1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NPT1);

    densidade1 = populacao1 / Km1;

    // --- Entrada dos dados da segunda carta ---
    printf("\n--- Agora a segunda cidade ---\n");

    printf("Digite a inicial do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): \n");
    scanf(" %3s", cdcard2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nmcidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &Km2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NPT2);

    densidade2 = populacao2 / Km2;

    // --- Menu de Comparação ---
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%.2f) vs %s (%.2f):\n", nmcidade1, Km1, nmcidade2, Km2);

    // --- Comparações com Switch ---
    switch(opcao) {
        case 1:
            printf("\nPopulação: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nmcidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nmcidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nÁrea: %.2f km² vs %.2f km²\n", Km1, Km2);
            if (Km1 > Km2)
                printf("Vencedor: %s\n", nmcidade1);
            else if (Km2 > Km1)
                printf("Vencedor: %s\n", nmcidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nPIB: %.2f vs %.2f\n", PIB1, PIB2);
            if (PIB1 > PIB2)
                printf("Vencedor: %s\n", nmcidade1);
            else if (PIB2 > PIB1)
                printf("Vencedor: %s\n", nmcidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nPontos Turísticos: %d vs %d\n", NPT1, NPT2);
            if (NPT1 > NPT2)
                printf("Vencedor: %s\n", nmcidade1);
            else if (NPT2 > NPT1)
                printf("Vencedor: %s\n", nmcidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nDensidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s (menor densidade)\n", nmcidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (menor densidade)\n", nmcidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor escolha entre 1 e 5.\n");
    }

    return 0;
}
