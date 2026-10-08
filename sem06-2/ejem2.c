#include<stdio.h>
#include <stdlib.h>
int main(){

    int *p;//puntero de a entero(s) o a tipo int
    char *msj="bienvenidos a la escuela de software - UNI";
    char*c = msj;
    p = (int *)malloc(sizeof(int)*5);//malloc duevuelve una region de memoria 
                                    // de tamaño 5 veces de un entero
    for(size_t i=0;i<5;i++){        //muestra la basura de la memoria
        printf("en la direccion %d esta el valor de %d\n",(p+i),*(p+i));
    }
    //dump memory- volcar el contenido de la memoria en pantalla 
    int cuenta = 0;
    printf("Imprimiendo la cadena :\n");
    while(*c != '\0'){ //mientras el caracter sea diferente de fin de cadenac
        printf("%x ", *c); //mostrar el caracter que esta en la memoria
        c++; // se aumenta la direccion del puntero
        cuenta++;
        if(cuenta % 16 == 0){
            printf("\n");
        }
    }
    free (p);
    return 0;
}