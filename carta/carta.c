#include <stdio.h>

int main() {
    char estado, estado2;
    char cdcard[4], cdcard2[4];        // 3 caracteres + '\0'
    char nmcidade[30], nmcidade2[30];     // Nome da cidade
    int populacao, NPT, populacao2, NPT2;    // População e pontos turísticos
    float Km, PIB, Km2, PIB2;        // Área e PIB

    // Lê a inicial do estado
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado);  // espaço antes de %c para ignorar o \n anterior

    // Lê o código da carta (ex: A01, B03)
    printf("Digite o código da carta (uma letra de A a H e um número de 01 a 04): \n");
    scanf(" %3s", cdcard);  // %3s limita a entrada e ignora espaços em branco

    // Lê o nome da cidade (com espaços)
    printf("Digite o nome de sua cidade: \n");
    scanf(" %[^\n]", nmcidade);  // lê até a quebra de linha

    // População
    printf("Digite o total da população de sua cidade: \n");
    scanf("%d", &populacao);

    // Área
    printf("Digite a área em km² de sua cidade: \n");
    scanf("%f", &Km);

    // PIB
    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &PIB);

    // Número de pontos turísticos
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NPT);

    // Exibe os dados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Inicial do estado: %c \n", estado);
    printf("Código da carta: %s \n", cdcard);
    printf("Nome da cidade: %s \n", nmcidade);
    printf("População da cidade: %d \n", populacao);
    printf("Área Territorial: %.2f km² \n", Km);
    printf("PIB: %.2f \n", PIB);
    printf("Total de pontos turísticos: %d \n", NPT);

    return 0;
}
