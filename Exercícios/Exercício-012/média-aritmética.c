#include <stdio.h>

int main(){
    float sum = 0.0;

    for(int i = 1; i <= 3; i++){
        float note = 0;

        do
        {
            printf("Informe a %d nota alcançada pelo aluno (sendo maior igual a zero ou menor do que 11): ", i);
            scanf("%f", &note);
        
        } while (note < 0 || note > 10);

        sum += note;
    }

    printf("A média aritmética entre as notas informadas é: %.2f \n", sum / 3);

    return 0; 
}