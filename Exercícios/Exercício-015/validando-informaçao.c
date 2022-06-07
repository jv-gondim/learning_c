#include <stdio.h>
#include <time.h>
#include <string.h>
#include <time.h>

void getString(char string[], int stringSize){

    fgets(string,stringSize,stdin);
    string[strcspn(string, "\n")] = 0;
}

int getYear(){
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int now_year = tm.tm_year + 1900;

    return now_year;
}

int main(){

    char name[250];
    printf("Digite seu nome: ");
    getString(name,250);

    if(strlen(name) < 3){

        printf("Nome invalido! Tente novamente.\n");

        return 1;
    }

    int yearOfBirth;
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &yearOfBirth);

    if(yearOfBirth < 1900){

        printf("Ano de nascimento invalido! Tente novamente");

        return 1;
    }

    printf("Olá senhor(a) %s, você possui %d anos.\n", &*name,getYear() - yearOfBirth);

    

    return 0;
}