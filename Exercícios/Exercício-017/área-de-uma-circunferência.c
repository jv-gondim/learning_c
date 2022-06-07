#include <stdio.h>
#include <math.h>

double getArea(double radius){
    double area = 3.14 * pow(radius,2);
    return area;
}

int main(){

    double radius;
    printf("Informe o tamanho do raio: ");
    scanf("%lf", &radius);

    if(radius <= 0){

        printf("Número invalido! Tente novamente.");

        return 1;
    }

    printf("A área é %.2lf\n", getArea(radius));
    
    return 0;
}