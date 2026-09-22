 #include <stdio.h>
int main(){
    //mostrar los multiplos de 3 que hay en lo primeros 25 numero senteros
    int hasta = 25;
    int desde = 1;
    for(;;){
        if(desde > hasta)
            break;
        if(desde % 3 == 0){
            printf("%d\n", desde);
        }
        desde++;
    }
   return 0;
}