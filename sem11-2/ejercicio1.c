//las estructura tienen un byte adicional por cada atributo
//porque en memoria si ecistira un fin de atributo 
#include<stdio.h>
/*
struct  Dato {

     int entero; // 4 bytes +1 byte de finalizacion 
     float decimal; 
     char caracter;// 1 byte +1 byte de finalizacion 
};/**/
// toma la dimension de memoriadel atributo que tiene mayor tamaño de memoria 
union  Dato {

     int entero; // 4 bytes +1 byte de finalizacion 
     float decimal; 
     char caracter;// 1 byte +1 byte de finalizacion 
};
int main()
{union Dato u1;
    printf("el tipo entero ocupa %d bytes\n", sizeof(int));
    printf("el tipo float ocupa %d bytes\n", sizeof(float));
    printf("el tipo char ocupa %d bytes\n", sizeof(char));
    printf("un tipo de dato del tipo  estructura dato ocupa %d \n", sizeof(union Dato));
//inicializacion 
u1.entero=120;
printf("entero: %d \n", u1.entero);
u1.decimal=3.1416;
printf("entero: %f \n", u1.decimal);

    return 0;


}
