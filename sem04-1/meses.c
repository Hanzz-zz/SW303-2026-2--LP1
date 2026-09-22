#include <stdio.h>

int main() {
    int meses;
    meses = 5;
    switch(meses){
        case 1: printf("Enero tiene 31 días\n");
        case 2: printf("Febrero tiene 28 días\n");
        case 3: printf("Marzo tiene 31 días\n");
        case 4: printf("Abril tiene 30 días\n");
        case 5: printf("Mayo tiene 31 días\n");
        case 6: printf("Junio tiene 30 días\n");
        case 7: printf("Julio tiene 31 días\n");
        case 8: printf("Agosto tiene 31 días\n");
        case 9: printf("Septiembre tiene 30 días\n");
        case 10: printf("Octubre tiene 31 días\n");
        case 11: printf("Noviembre tiene 30 días\n");
        case 12: printf("Diciembre tiene 31 días\n");
    }
    return 0;
}