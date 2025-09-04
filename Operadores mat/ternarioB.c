#include <stdio.h>

int main() {
    int num1, num2;
    int maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O númeor maior é: %d", maior);
    
    return 0;
}