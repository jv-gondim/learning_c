#include <stdio.h>

int main (){

    float height;
    printf("Informe sua altura:");
    scanf("%f", &height);
    
    int op;
    printf("Por favor, digite '1' se você for do sexo masculino ou '2' se for do sexo feminino: ");
    scanf("%d", &op);
    
    printf("\e[1;1H\e[2J");

    switch (op)
    {
    case 1:
        printf("O seu peso ideal é de: %.2f\n", (72.7 * height) - 58);
        break;
    
    case 2:
        printf("O seu peso ideal é de: %.2f\n", (62.1 * height) - 44.77);

        break;

    default:
        
        printf("Número invalido. Tente novamente\n");
    }

    return 0;
}