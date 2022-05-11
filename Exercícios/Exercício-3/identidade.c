#include <stdio.h>
#include <string.h>

void getString(char string[], int stringSize){

    fgets(string,stringSize,stdin);
    string[strcspn(string, "\n")] = 0;
}

int main(){

    char name[250];
    printf("Qual o seu nome: ");
    getString(name,250);
    
    char sex[15];
    printf("Informe seu sexo: ");
    getString(sex,15);
    
    char job[50];
    printf("informe sua profissao: ");
    getString(job,50);
    
    char street[20];
    printf("Qual o nome da rua onde voce vive: ");
    getString(street,20);

    char neighborhood[15];
    printf("Qual é o nome do bairro em que voce vive? ");
    getString(neighborhood,15);

    char city[30];
    printf("Qual a cidade onde voce mora? ");
    getString(city,30);

    char stateAbbreviation[2];
    printf("Informe a sigla do seu estado: ");
    scanf("%s", &*stateAbbreviation);
    
    int age;
    printf("Quantos anos voce tem? ");
    scanf("%d", &age);
    
    float height;
    printf("Informe sua altura: ");
    scanf("%f", &height);
    
    int cep;
    printf("Informe o cep de sua residencia: ");
    scanf("%d", &cep);

    printf("\e[1;1H\e[2J");
    
    printf("--------------------------------------------------------------------\n");
    printf( "%s, voce tem %d anos, do sexo %s com altura de %.2f\n", &*name, age, &*sex, height);
    printf("Sua profissão é %s, Mora na Rua: %s, Bairro %s\n", &*job, &*street, &*neighborhood);
    printf("CEP: %d, na cidade de %s (%s)\n", cep, &*city, &*stateAbbreviation);
    printf("--------------------------------------------------------------------\n");
    
    return 0;
}


