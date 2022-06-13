#include <stdio.h>

void printBetween(int init, int final) {
    for(int ix = init; ix <= final; ix++) {
        printf("%d\n", ix);
    }
}

int main(){

    int firstNumber;
    printf("Digite o primeiro número: ");
    scanf("%d", &firstNumber);

    int secondNumber;
    printf("Digite o segundo número: ");
    scanf("%d", &secondNumber);

    if(firstNumber > secondNumber) {
        printBetween(secondNumber, firstNumber);
        return 0;
    }

    printBetween(firstNumber, secondNumber);
    
    return 0;
}