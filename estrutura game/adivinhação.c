#include <stdio.h>
#include <stdbit.h>
#include <time.h>


int main(){
    int opcao;
    int numeroSecreto, palpite, regras;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand (time(0));
        numeroSecreto = rand() %10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite) 
        {
            printf("Você acertou!!!\n");
            printf("numero secreto %d\n", numeroSecreto);
        } else {
            printf("Você errou!\n");
            printf("numero secreto %d\n", numeroSecreto);
        }
        break;
    case 2:
        printf("Regras!\n");
        printf("Digite a opção relacionadas as regras do jogo!\n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
        printf("Regra 1. Você deve colocar um numero de 0 a 9 para tentar a advinhação e caso colocar qualquer outro numero vai dar erro!!!\n");
            break;
        case 2:
        printf("Regra 2.\n");
            break;
        default:
        printf("opção invalida\n");
            break;
        }
        break;
    case 3:
        printf("saindo do j.....\n");
        break;
    
    default:
        printf("Opção invalida\n");
        break;
    }

    return 0;
}