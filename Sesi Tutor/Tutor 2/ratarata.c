#include <stdio.h>

int main(){
    int banyak;
    scanf("%d", &banyak);

    int angka[100];
    for(int i=0; i<banyak; i++){
        scanf("%d", &angka[i]);
    }

    int total=0;
    for(int i=0; i<banyak; i++){
        total += angka[i];
    }

    float hasil = (float)total / banyak;
    printf("%.2f", hasil);
   
}