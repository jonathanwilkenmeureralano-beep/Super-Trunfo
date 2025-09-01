#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolhaCPU;
    srand(time(0));

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: \n");
    scanf("%d", &escolhaJogador);

    escolhaCPU = rand() %3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra! -");
        break;
    case 2:
        printf("Jogador: Papel! -");
        break;
    case 3:
        printf("Jogador: Tesoura! -");
        break;
    
    default:
        printf("Opção invalida!!!\n");
        break;
    }

    switch (escolhaCPU)
    {
    case 1:
        printf("CPU: Pedra!\n");
        break;
    case 2:
        printf("CPU: Papel!\n");
        break;
    case 3:
        printf("CPU: Tesoura!\n");
        break;   
    }

    if (escolhaCPU == escolhaJogador)
    {
        printf("### Empate! ###\n");
    }else if ((escolhaJogador == 1) && (escolhaCPU == 3) || 
               (escolhaJogador == 2) && (escolhaCPU == 1) ||
               (escolhaJogador == 3) && (escolhaCPU == 2))
    {
        printf("*** VITORIA DO JOGADOR!!! ***\n");
    }else {
        printf("*** VITORIA DA CPU!!! ***\n");
    }

    return 0;
}