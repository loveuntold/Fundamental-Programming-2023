// Bagi-Bagi

#include <stdio.h>
#include <math.h>

int gcd(int x, int y){
    int hasil;
    if(x<y){
        hasil = x;
    }
    else{
        hasil = y;
    }

    while(hasil>0){
        if(x%hasil==0 && y%hasil==0){
            break;
        }

        hasil--;
    }

    return hasil;
}   

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    int hasil = gcd(x,y);
    int length = floor(log10(hasil)) + 1;

    if(length%2==0){
        printf("Yey brankas berhasil dibuka :D");
    }
    else{
        printf("Yah gagal :(");
    }

}