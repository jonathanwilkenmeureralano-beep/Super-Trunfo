#include <stdio.h>

int main (){

    int nota = 50;

    if (nota >= 60) {
        printf("Parabéns, você passou!\n");
    } else {
        //bloco de código a ser executado se a condição for falsa
        printf("Você não passou infelizmente\n");
    }
    printf("Fora IF");
}