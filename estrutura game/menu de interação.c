#include <stdio.h>

int main(){
    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Jogo iniciando...\n");
        break;
    case 2:
        printf("Regras do jogo...\n");
        break;
    case 3: 
        printf("Deslogando...\n");
        break;
    
    default:
        printf("Opção Invalida\n");
        break;
    }

    return 0;
}