#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Mutiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, mutiplicacao, divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    //operação soma
    subtracao = numero1 - numero2;
    //operação subtração

    mutiplicacao = numero1 * numero2;
    //operção mutiplicação

    divisao = numero1 / numero2;
    //operação divisão

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplificação é: %d\n", mutiplicacao);
    printf("A Divisão é: %d\n", divisao);

    return 0;

}