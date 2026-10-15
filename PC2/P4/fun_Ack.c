#include <stdio.h>
int ackermann(int m, int n){
    
    static int num_llamadas = 0;
    num_llamadas++;
    
    int temp_res;
    
    if(m == 0){
        temp_res = n + 1;
    } 
    else if(m > 0 && n == 0){
        temp_res = ackermann(m - 1, 1);
    } 
    else if(m > 0 && n > 0){
        temp_res = ackermann(m - 1, ackermann(m, n - 1));
    }

    if(m == 3 && n == 4){
        printf("Llamadas totales: %d\n", num_llamadas);
    }

    return temp_res;
}

int main() {
    int calculo = ackermann(3, 4);
    printf("Resultado: %d\n", calculo);


    return 0;
}