#include <stdio.h>

int main(){

    printf("Caro úsuario, vamos realizar algumas somas entre três valores a sua escolha\n");

    float firstValue;
    printf("Por favor, informe o primeiro valor: ");
    scanf("%f", &firstValue);

    float secondValue;
    printf("Informe o segundo valor: ");
    scanf("%f", &secondValue);

    float thirdValue;
    printf("Informe o valor final: ");
    scanf("%f", &thirdValue);

    printf("A soma dos dois primeiros valores é: %.2f \n", firstValue + secondValue);
    printf("A soma entre o primeiro valor e o terceiro valor é: %.2f \n", firstValue + thirdValue);
    printf("A soma entre o segundo valor e terceiro valor é: %.2f \n", secondValue + thirdValue);
    
    return 0;
}