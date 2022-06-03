#include <stdio.h>

int main(){

    int age;
    printf("Quantos anos você tem? ");
    scanf("%d", &age);

    int year;
    printf("Informe o ano atual: ");
    scanf("%d", &year);

    printf("O ano de seu nascimento é: %d\n", year - age);
    
    return 0;
}