#include <stdio.h>
#include <stdlib.h>

float sum(float numero1, float numero2) {
    return numero1 + numero2;
}

int main(){

    float numero1, numero2;

    printf("Por favor, digite um numero: ");
    scanf("%f", &numero1);

    printf("Por favor, digite outro numero: ");
    scanf("%f", &numero2);
    
    printf("O resultado final da soma é: %.2f \n", sum(numero1, numero2));

    return 0;
}

