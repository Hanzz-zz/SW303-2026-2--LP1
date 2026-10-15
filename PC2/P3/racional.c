#include "racional.h"
static int es_primo(int n){
    if(n < 2){
        return 0;
    }
    for(int k = 2; k * k <= n; k++){
        if(n % k == 0){
            return 0;
        }
    }
    return 1;
}

int mcd(int a, int b){
    if(b == 0){
        return a;
    }
    return mcd(b, a % b);
}

void simplificar(int num[], int den[]){
    int val_comun = mcd(num[0], den[0]);
    num[0] = num[0] / val_comun;
    den[0] = den[0] / val_comun;

    if(es_primo(num[0])){
        val_comun = 1;
    }
}

void sumar(int n1, int d1, int n2, int d2, int n_res[], int d_res[]){
    n_res[0] = (n1 * d2) + (n2 * d1);
    d_res[0] = d1 * d2;
    simplificar(n_res, d_res);


}