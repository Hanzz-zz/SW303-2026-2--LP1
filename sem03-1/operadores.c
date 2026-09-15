#include <stdio.h>

int main(){
    int a=25, b=7, c=129;

    printf("\nOperadore Aritmeticos\n");
    printf("La suma de %d + %d es %d\n",a,b,a+b);
    printf("La suma de %d - %d es %d\n",a,b,a-b);
    printf("La suma de %d * %d es %d\n",a,b,a*b);
    printf("La division entera de %d / %d es %d\n",a,b,a/b);
    printf("La division real de %d / %d es %lf\n",a,b,(double)a/b);
    printf("El resto de %% de dividir de %d + %d es %d\n",a,b,a%b);

    printf("\nOperadores de comparacion\n");
    printf("a = %d\tb = %d\tc = %d\n",a,b,c);
    printf("%d > %d? es %d\n",a,b,a>b);
    printf("%d > %d? es %d\n",b,c,b>c);
    printf("%d > %d y %d > %d es %d\n",a,b,a,c,(a>b)&&(b<c)); // y logico
    printf("%d > %d o %d > %d es %d\n",a,b,a,c,(a>b)||(b>c)); // o logico
    
    return 0;
}


