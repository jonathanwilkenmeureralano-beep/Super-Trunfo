#include <stdio.h>

int main (){
    int numero1;
    int numero2;

    numero1 = 20;
    numero2 = 30;
    if (numero1 > numero2) {
        //bloco de código a ser executado se a condição for verdadeira
        printf("Numero 1 é maior que numero 2\n"); 
    }else {
        //bloco de código a ser executado se a condição for falsa
        printf("Numero 1 não é maior que numero 2\n");
    }
}