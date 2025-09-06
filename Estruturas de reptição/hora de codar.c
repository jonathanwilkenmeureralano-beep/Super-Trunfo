#include <stdio.h>

int main() {

    int numero;

    do {

        printf("Digite um numero par para sair do program... \n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            print("%d esse número é par \n", numero);
        } else {
            printf("%d esse número é impar \n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um número par, saindo do programa...\n");
    
    return 0;

}