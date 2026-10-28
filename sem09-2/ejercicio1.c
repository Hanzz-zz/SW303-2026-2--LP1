//puntero que cambia la direccion
#include <stdio.h>

int main(void){
    int numero[5]={10, 20, 30, 40, 50};
    int *ptr = numero;
    printf("Direccion incial del puntero *ptr es %p\n", ptr);
    for(int i=0; i<5; i++){
        printf("numeros[%d]: %d\n", i, *(ptr+i));
    }
    printf("Direccion final del puntero *ptr es %p\n", ptr);
    return 0;
}