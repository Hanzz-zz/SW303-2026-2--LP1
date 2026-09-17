#include <stdio.h>

// truco de Brian Kernighan
unsigned int contar_unos(unsigned int n) {
    int cuenta = 0;
    while (n) {
        n &= (n - 1);  // borra el bit 1 menos significativo
        cuenta++;
    }
    return cuenta;
}

int main() {
    unsigned int numero;
    printf("Ingrese un numero entero positivo: ");
    
    // usamos %u porque estamos trabajando con "unsigned int" (enteros sin signo)
    scanf("%u", &numero); 
    unsigned int resultado = contar_unos(numero);
    printf("El numero ingresado tiene %u bits en '1' dentro de su version binaria.\n", resultado);
    
    return 0;
}


