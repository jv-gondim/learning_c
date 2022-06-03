#include <stdio.h>

float celsiusToFarenhait(float farenhait){

    return 5.0 / 9.0 * (farenhait - 32.0);
}


int main(){

    printf("-----------------------------------------\n");
    printf("Conversor de farenhait para graus celsius\n");
    printf("-----------------------------------------\n\n");
    
    float farenhait;
    printf("Informe a temperatura em farenhait: ");
    scanf("%f", &farenhait);
    
    printf("O resultado final é: %.2f\n",celsiusToFarenhait(farenhait));

    return 0;
}