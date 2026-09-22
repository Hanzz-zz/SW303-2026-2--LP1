#include <stdio.h>
int main(){
    int mes;
    mes = 8;
    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("El mes %d tiene 31 días\n", mes);
        break;

        case 4:
        case 6:
        case 9:
        case 11: printf("El mes %d tiene 30 días\n", mes);
        break;

        case 2: printf("El mes %d tiene 28 días\n", mes);
        break;  
        default: printf("El mes %d no es válido\n", mes);
}
    return 0;
}