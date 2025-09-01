#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Descremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    //Pos Incremento:
    //resultado = numero1;
    //numero1++;

    resultado = numero1++;
    //printf("Pós incremento: %d\n", numero1);
    printf("Após PósIncremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-Incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    //numero1 = numero1 +1;
    //numero1 -= 1;
    //numero1--;
    //printf("Pós Decremento: %d\n", numero1);

    resultado= numero1--;
    printf("Após Pos-Decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-Decremento - numero1: %d - Resultado: %d\n", numero1, resultado);
}