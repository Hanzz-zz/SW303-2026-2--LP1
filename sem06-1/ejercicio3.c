#include<stdio.h>
int main(){
    int cantidad =200;
    int *ptr;   //se define ptr como puntero
                //es una variable que opera con direccion de memoria
                //inicialmente apunta a algun lugar de la memoria
                //si se crea el puntero se requiere inicializar antes de usar 
ptr=NULL;//
if(ptr ==NULL){
    ptr=&cantidad;
    printf("puntero inicializado, su direccion es %p y su valor es %d",ptr,*ptr);


}else{
    printf("el puntero ya tiene memoria,\n");
}
return 0;
}