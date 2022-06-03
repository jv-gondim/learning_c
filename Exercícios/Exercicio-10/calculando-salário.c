#include <stdio.h>
#include <string.h>

void getString(char string[], int stringSize) {

    fgets(string,stringSize,stdin);
    string[strcspn(string, "\n")] = 0;
}

float percent(int value) {
    return value / 100.0;
}

float applySalaryAdjustment(float salary, float adjustmentPercent) {
    return salary + (salary * adjustmentPercent);
}

int main(){

    char name[250];
    printf("Informe seu nome: ");
    getString(name,250);
    
    char office[50];
    printf("Informe seu cargo: ");
    getString(office,50);
    
    int age;
    printf("Informe sua idade: ");
    scanf("%d", &age);

    float grossSalary;
    printf("Informe seu salário bruto: ");
    scanf("%f", &grossSalary);

    float salary = applySalaryAdjustment(grossSalary, percent(20));

    printf("Ápos o reajuste seu salário bruto é de: %.2f\n", salary);
    printf("O seu novo salário líquido é: %.2f\n", salary - (salary * percent(15)));

    return 0;
}