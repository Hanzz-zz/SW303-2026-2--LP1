/*#include<stdio.h>
int main(void){
    char arr_unidimen[4] = {'a', 'b', 'c', 'd'};//vector de 4 elementos
    char arr_bidimen[3][2] = {{'h', 'o'}, 
                              {'1', 'a'},
                              {'2', '6'}};//matriz de 3x2 elementos
    return 0;
}
*/

#include <stdio.h>
int main(void) {
 int matriz[2][3] = {
                    {10, 20, 30},
                    {40, 50, 60}
                    };
 int (*ptr)[3] = matriz;//arreglo de 3 punteros a enteros, apuntando a la primera fila de la matriz
 for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", *(*(ptr + i) + j));//aprovechando la aritemtica de punteros para acceder a los elementos de la matriz
    }
    printf("\n");
 }

 return 0;
}