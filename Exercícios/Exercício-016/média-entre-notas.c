#include <stdio.h>

const char* varifyingAverage(float average) {
    if(average < 4) return "Reprovado!\n";

    if(average < 6) return "Recuperação!\n";

    return "Aprovado!\n";    
}

int main(){
    float sum = 0.0;

    for(int i = 1; i <= 4; i++){
        float note = 0;

        do
        {
            printf("Informe a %d nota alcançada pelo aluno (sendo maior, igual a zero ou menor do que 11): ", i);
            scanf("%f", &note);
        
        } while (note < 0 || note > 10);

        sum += note;
    }

    float average = sum / 4;

    printf("A média entre as notas informadas é: %.2f \n", average);
    
    printf("%s", varifyingAverage(average));

    return 0; 
}