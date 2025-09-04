#include <stdio.h>

int main() {
    int temperatura;
    int resultado;

    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    //condição ? verdadeiro : falso
    temperatura >= 30 ? printf("Está calor!\n") : printf("Está frio!\n");

    return 0;
}