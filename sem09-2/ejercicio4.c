//recorrriendo la memoria cde numeros char a char
#include <stdio.h>
int main(void){
    //long long ocupa 8 bytes
    long long numeros[5]={10, 20, 30, 40, 50};
    char *ptr;
    ptr = (char *)numeros; //ptr apunta a la direccion de memoria del primer elemento del arreglo
    for(int i = 0; i < 50; i++){
        printf("Valor %d, direccion %p\n", *(ptr+ i), (ptr + i));
    }
    return 0;
}