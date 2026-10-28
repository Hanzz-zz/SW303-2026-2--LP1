//puntero que cambiade direccion de memoria
#include <stdio.h>

int main(void){
    int numero[5]={10, 20, 30, 40, 50};
    int *ptr = numero; //ptr apunta a la direccion de memoria del primer elemento del arreglo
    printf("Direccion de memoria del primer elemento: %p\n", ptr);
    for(int i=0; i<5; i++){
        printf("numero[%d]: %d\n", i, *ptr); //accedemos a los elementos del arreglo usando el arreglo
        ptr++; //incrementamos el puntero para apuntar al siguiente elemento del arreglo
    }
     printf("Direccion de memoria del ultimo elemento: %p\n", ptr); 
        return 0;
}