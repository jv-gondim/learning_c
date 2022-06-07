#include <stdio.h>

int main(){

    int firstNumber;
    printf("Digite o primeiro valor: ");
    scanf("%d", &firstNumber);

    int secondNumber;
    printf("Digite o segundo valor: ");
    scanf("%d", &secondNumber );

    if(firstNumber < secondNumber){

        printf("O segundo valor é maior que o primeiro!\n");

    }

    if(firstNumber > secondNumber){

        printf("O primeiro valor é maior que o segundo!\n");

    }

    if(firstNumber == secondNumber){

        printf("os valores são iguais!\n");

    }

    return 0;
}