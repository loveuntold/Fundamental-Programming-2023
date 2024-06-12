// Lontong Sayur

#include <stdio.h>
#include <math.h>

int main(){
    int xPeta, yPeta, xPusat, yPusat, xKecil, yKecil, xHasil, yHasil;

    scanf("%d %d", &xPeta, &yPeta);
    scanf("%d %d %d %d", &xPusat, &yPusat, &xKecil, &yKecil);
    scanf("%d %d", &xHasil, &yHasil);

    if(xHasil>=xPusat-(xKecil/2) && yHasil>=yPusat-(yKecil/2) && xHasil<=xPusat+(xKecil/2) && yHasil<=yPusat+(yKecil/2)){
        printf("KAMU SUDAH SAMPAI");
    }
    else{
        int power = pow(xPusat-xHasil,2) + pow(yPusat-yHasil,2);
        float hasil = (float)sqrt(power);

        printf("%.2f METER LAGI", hasil);
    }


}