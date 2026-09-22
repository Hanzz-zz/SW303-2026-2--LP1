#include <stdio.h>
int main(){
    //mostrar los multiplos de 3 que hay en lo primeros 25 numero senteros
    int hasta = 25;
    int desde =1;
    for(desde = 1; desde <= hasta; desde++){
        if(desde % 3 == 0){
            printf("%d\n", desde);
        }
    }
    return 0;
}