/* Gestion de matrices con puntero a puntero (int **) */
#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free

#define MAX_FIL 4
#define MAX_COL 4

void ini_matriz(int **matriz){
    for(size_t i = 0; i < MAX_FIL; i++){
        for(size_t j = 0; j < MAX_COL; j++){
            matriz[i][j] = 0;
        }
    }
}

// Mostrar la matriz
void mostrar_mat(int **matriz){
    for(size_t i = 0; i < MAX_FIL; i++){
        for(size_t j = 0; j < MAX_COL; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int** crear_matriz() {
    int **mat = (int **)malloc(MAX_FIL * sizeof(int *));
    for (int i = 0; i < MAX_FIL; i++) {
        mat[i] = (int *)malloc(MAX_COL * sizeof(int));
    }
    return mat;
}

void liberar_matriz(int **mat) {
    for (int i = 0; i < MAX_FIL; i++) {
        free(mat[i]);
    }
    free(mat);
}

int main(){
    
    int **mat1 = crear_matriz();
    
    int **mat2 = crear_matriz();
    
    int contador = 1;
    for(int i = 0; i < MAX_FIL; i++){
        for(int j = 0; j < MAX_COL; j++){
            mat2[i][j] = contador++;
        }
    }

    //matriz1
    printf("Matriz 1\n");
    ini_matriz(mat1);
    mostrar_mat(mat1);
    
    printf("\n");

    //matriz2
    printf("Matriz 2\n");
    mostrar_mat(mat2);

    liberar_matriz(mat1);
    liberar_matriz(mat2);

    return 0;
}