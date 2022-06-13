#include <stdio.h>

int main(){

    int firstNumber;
    printf("Digite o primeiro número: ");
    scanf("%d", &firstNumber);
    
    int secondNumber;
    printf("Digite o segundo número: ");
    scanf("%d", &secondNumber);

    if(firstNumber < secondNumber){

        printf("%d, %d\n", secondNumber, firstNumber);

        return 0;
    }

    printf("%d, %d\n", firstNumber, secondNumber);

    return 0;
}