#include <stdio.h>
#include "racional.h"
int main(){
    int valor_n1, valor_d1, valor_n2, valor_d2;
    int resp_n[1], resp_d[1];


    printf("Fraccion 1: ");
    scanf("%d %d", &valor_n1, &valor_d1);

    printf("Fraccion 2: ");
    scanf("%d %d", &valor_n2, &valor_d2);

    sumar(valor_n1, valor_d1, valor_n2, valor_d2, resp_n, resp_d);

    printf("Suma: %d / %d\n", resp_n[0], resp_d[0]);










    return 0;
}