#include <stdio.h>
#include <stdlib.h>

#define Km 1.60934

int main(int argc, char *argv[]) {

    float ml = atof(argv[1]);
    float km = ml * Km;

    printf("%.2f milhas = %.2f km\n" , ml, km);
    
    return 0;
}
