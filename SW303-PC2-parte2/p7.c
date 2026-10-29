#include <stdio.h>
#include <stdlib.h>

int *apilar(int *pila, int *capacidad, int *tope, int valor) {
    if (capacidad == NULL || tope == NULL) {
        return NULL;
    }
    if (*tope < 0 || *capacidad < 0 || *tope > *capacidad) {
        return NULL;
    }
    if (*tope == *capacidad) {
        int espacio = (*capacidad == 0) ? 4 : (*capacidad * 2);
        int *reserva;
        if (*capacidad == 0) {
            reserva = malloc(espacio * sizeof(int));
        } 
        else {
            reserva = realloc(pila, espacio * sizeof(int));
        }
        if (reserva == NULL) {
            return NULL;
        }



        pila = reserva;
        *capacidad = espacio;
    }

    if (pila == NULL) {
        return NULL;
    }

    pila[*tope] = valor;
    (*tope)++;



    return pila;
}

int desapilar(int *pila, int *tope, int *salida) {
    if (pila == NULL || tope == NULL || salida == NULL) {
        return 0;
    }
    if (*tope <= 0) {
        return 0;
    }
    (*tope)--;
    *salida = pila[*tope];





    return 1;
}

int main(void) {
    int *datos = NULL;
    int capacidad = 0;
    int tope = 0;
    int valores[5] = {10, 20, 30, 40, 50};
    int retirado;

    for (int i = 0; i < 5; i++) {
        int *nuevo = apilar(datos, &capacidad, &tope, valores[i]);
        if (nuevo == NULL) {
            printf("Error al reservar memoria\n");
            free(datos);
            return 1;
        }
        datos = nuevo;
        printf("Apilar %d\n", valores[i]);
    }

    printf("Tope = %d, Capacidad = %d\n", tope, capacidad);


    for (int intento = 0; intento < 2; intento++) {
        if (desapilar(datos, &tope, &retirado) == 1) {
            printf("Desapilar -> %d\n", retirado);
        } 
        else {
            printf("La pila esta vacia\n");
        }
    }

    printf("Tope = %d, Capacidad = %d\n", tope, capacidad);

    while (desapilar(datos, &tope, &retirado)== 1) {
        printf("Desapilar -> %d\n", retirado);
    }

    if (desapilar(datos, &tope, &retirado) != 1) {
        printf("La pila esta vacia\n");
    }

    free(datos);














    return 0;
}



