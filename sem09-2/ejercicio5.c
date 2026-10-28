#include<stdio.h>
int main(void){
    int numero = 100;
    int *ptr = &numero; //ptr apunta a la direccion de memoria de numero;
    int **pptr = &ptr; //pptr apunta a la direccion de memoria de ptr

    printf("numero       = %d, direccion: %p\n", numero, &numero);
    printf("*ptr         = %d, direccion: %p\n", *ptr, ptr);
    printf("**pptr       = %d, direccion: %p\n", **pptr, *pptr);

    **pptr = 200; //cambiamos el valor de numero a traves de pptr
    printf("nuevo numero = %d\n", numero);
    return 0;
}