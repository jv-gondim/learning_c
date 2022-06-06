#include <stdio.h>

int main(){

    int number;
    printf("Informe um número inteiro: ");
    scanf("%d", &number);

    if(number < 0) {

        printf("Número inválido, por favor tente novamente.\n");

        return 1;
    }

    printf("O cubo do número informado é: %d\n", number * number *number);

    return 0;
}