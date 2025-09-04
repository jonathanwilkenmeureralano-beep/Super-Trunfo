#include <stdio.h>

int main(){
    int idade;
    int resultado;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //condição ? verdadeiro : falso
    resultado = idade >= 18 ? 1 : 0 ;


    if(resultado == 1) 
    {
    printf("Você é maior de idade!\n");
    } else {
    printf("Você é menor de idade!\n");
    }



    return 0;
}