#include <stdio.h>

void changePositionOfValues(int *value1, int *value2){
    int aux = *value1;
    *value1 = *value2;
    *value2 = aux;
}


int main(){

    int value1;
    printf("Digite um número: ");
    scanf("%d", &value1);
    
    int value2;
    printf("Digite outro número: ");
    scanf("%d", &value2);

    changePositionOfValues(&value1, &value2);

    printf("Depois da troca o primeiro valor é: %d\n", value1);
    printf("enquanto o segundo valor é: %d\n", value2);

    return 0;
}