#include <stdio.h>

int main(){

    int firstValue;
    printf("Digite o primeiro valor: ");
    scanf("%d", &firstValue);

    int secondValue;
    printf("Digite o segundo valor: ");
    scanf("%d", &secondValue);

    int sumOfValues =  firstValue + secondValue;

    if(sumOfValues < 10){

        printf("O resultado da soma entre os valores é menor que 10!\n");
    
    }

    if(sumOfValues > 10){

        printf("O resultado da soma entre os valores é maior que 10!\n");

    }

    if(sumOfValues == 10){

        printf("O resultado da soma entre os valores é igual a 10!\n");

    }

    return 0;
}