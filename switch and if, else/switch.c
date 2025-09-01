#include <stdio.h>

int main (){
    int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel) {
  case 1:
    printf("Código a ser executado se variavel == 1\n");
    break;
  case 2:
    printf("Código a ser executado se variavel == 2\n");
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    printf("Código a ser executado se nenhum dos casos acima for verdadeiro \n");
}

}