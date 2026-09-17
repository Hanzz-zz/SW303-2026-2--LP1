#include <stdio.h>
int main(){
    int n ;
    printf("Ingrese un numero entero de 4 digitos: ");
    scanf("%d", &n);

    printf("Miles: %d\n", n / 1000);
    printf("Centenas: %d\n", (n / 100) % 10);
    printf("Decenas: %d\n", (n / 10) % 10);
    printf("Unidades: %d\n", n % 10);

    return 0;
}