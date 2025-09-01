#include <stdio.h>

int main() {
  int numero = 14;
  int resultado;

  resultado = numero %2;

  if (resultado == 0) {
    printf("O número é par\n");
  } else {
    printf("O número é impar\n");
    }

  return 0;
}
