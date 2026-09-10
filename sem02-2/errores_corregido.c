#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <windows.h>
#endif

int main (){
    #ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #endif

    //CORECCION 1: Inicializar variable
    int contador = 0;
    printf("Contador: %d\n", contador);

    //CORRECIÓN 2: Verificar division por cero
    int a = 10, b = 2;
    if (b != 0){

        int  division = a / b;
        printf("Divison: %d\n", division);

    }else{
        printf("Error: Division por cero\n");
    }

    //CORRECCION 3: Usar fgets en lugar de sacnf
    char nombre[10];
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Nombre: %s", nombre);

    //CORRECIÓN 4: Formato correcto
    float precio = 19.99;
    printf("Precio: %.2f\n", precio);

    //CORRECIÓN 5: Retunr adecuado
    return 0;
}