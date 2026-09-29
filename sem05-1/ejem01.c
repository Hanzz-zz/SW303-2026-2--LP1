//Instrucciones de preprocesamiento
#include <stdio.h>
#define ANIO_ACTUAL 2027

#ifdef __linux__
#define __SO__ "Windows"
#else
#define __SO__ "Linux"
#endif

////////////Zona de prototipos////////////
void saludar();
int deolver_anio_actual();

//Funcion principal (main), aqui comienza todo
int main(){
    //Llamada o uso de la funcion saludar()
    saludar(); //Toda funcion que se use, debe estar declarada y/o definida
    return 0;
}


/////////////////////////Zona de definiciones de funciones/////////////////////////
//Definicion de la funcion llamada deolver_anio_actual()
//Parametros : NINGUNO
//Salida : 1

//                Numerico de tipo entero
int deolver_anio_actual(){
    return ANIO_ACTUAL;    // ----> no es bueno usar valores literales//
}

//Definicion de la funcion llamada saludar()
//Parametros : NINGUNO
//Salida : NINGUNO (void)

void saludar(){
    printf("Bienvenidos a SW303 en este anio %d\n", deolver_anio_actual());
}


