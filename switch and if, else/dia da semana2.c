#include <stdio.h>

int main (){
    char dia;

    printf("Entre com o valor do dia\n");
    scanf(" %c", &dia);
    switch (dia) 
    {
    case 'a':
      printf("Domingo\n");
        break;
    case 'b':
      printf("Segunda-Feira\n");
        break;
    case 'c':
      printf("Terça-Feira\n");
        break;
    case 'd':
      printf("Quarta-Feira\n");
        break;
    case 'e':
      printf("Quinta-Feira\n");
        break;
    case 'f':
      printf("Sexta-Feira\n");
        break;
    case 'g':
      printf("Sabado\n");
        break;
    
    default:
      printf("Opção invalida!\n");
        break;
    }

    return 0;
}