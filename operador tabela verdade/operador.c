#include <stdio.h>

int main (){

    int a = -10, b = -5;

    if (a > 0 || b > 0) //&&, ||
    {
        printf("Pelomenos um dos numeros é positivo\n");
    } else {
        printf("Os dois numeros são negativos\n");
    }
}    