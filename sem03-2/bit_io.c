#include <stdio.h>

int main(void) {
    unsigned int n;
    
    // leer el entero sin signo
    printf("Numero: ");
    if (scanf("%u", &n) != 1) return 1; // Si el usuario ingresa letras en vez de un numero, aborta

    // imprimir su representación binaria de 32 bits
    printf("Binario : ");
    for (int i = 31; i >= 0; i--) {
        // desplaza el bit actual a la primera posicion y revisa si es 1 o 0
        putchar((n >> i) & 1 ? '1' : '0'); 
        // agrega un espacio cada 4 bits para que sea facil de leer (nibbles)
        if (i % 4 == 0 && i) putchar(' ');
    }
    putchar('\n');

    // contar los unos usando el truco de Brian Kernighan
    unsigned int t = n; // hacemos una copia en 't' para no destruir el numero original 'n'
    int unos = 0;
    while (t) { 
        t &= (t - 1); 
        unos++; 
    }

    // imprimir en hex y octal con formato alineado
    printf("Hex     : 0x%08X\n", n);
    printf("Octal   : 0%o\n", n);
    printf("Unos    : %d\n", unos);




    
    return 0;
}