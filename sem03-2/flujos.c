#include <stdio.h>
int main(void){
    fprintf(stdout, "Mensaje  normal por stdout\n");
    fprintf(stderr, "Mensaje de error por stderr\n");

//prog.exe < salida.txt < error.txt
    return 0;
}