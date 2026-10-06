#include<stdio.h>
int main(){
    int c[5];//se define el arreglo de 5 va enteros
    printf("la direccion del arreglo es  %p \n",c);//la direccion se encuentra en el primer elemento de arreglo 
    printf("la direccion del primer elemento es  %p\n",&c[0]);//obtener la direccin de memoria 
    printf("el valo es %d \n",c[0]);
     printf("la direccion del 2 elemento es  %p\n",&c[1]);
    printf("inicializar los valores a 1 \n");
    for( size_t i=0;i<5;i++){
        c[i]=1;
    }
    printf("la direccion del primer elemento es  %p\n",&c[0]);//obtener la direccin de memoria 
    printf("el valo es %d \n",c[0]);
     printf("la direccion del 2 elemento es  %p\n",&c[1]);
    printf("inicializar los valores a 1 \n");

    return 0;
    
}