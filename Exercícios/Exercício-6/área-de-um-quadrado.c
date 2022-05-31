#include <stdio.h>

float area(float width, float length){

    return width * length;

}

int main(){

    float width;
    printf("Informe a largura do quadrado: ");
    scanf("%f", &width);

    float length;
    printf("Informe o comprimeto do quadrado: ");
    scanf("%f", &length);

    printf("Área = %.2f x %.2f \n", width, length);
    printf("A área do quadrado é: %.2f \n", area(width, length));

    return 0;
}