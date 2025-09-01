#include <stdio.h>

int main() {
    int numeroNormal = 2147483647; // Este valor excede o limite de um int normal
    long long int numeroGrande = 2147483647;

    printf("Número normal (int): %d\n", numeroNormal);
    printf("Número grande (log int): %lld\n", numeroGrande);

    numeroGrande = 2147483648; // Valor maior que o máximo int
    printf("Número grande atualizado (long int): %lld\n", numeroGrande);

    return 0;
}