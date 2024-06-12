#include <stdio.h>

int main(){
    //kode dan jumlah barang
    int kode, harga, jumlah;
    scanf("%d %d", &kode, &jumlah);

    //kondisi kode
    switch(kode){
        case 101:
        harga = 20000;
        break;

        case 102:
        harga = 100000;
        break;

        case 103:
        harga = 45000;
        break;

        case 104:
        harga = 60000;
        break;

    }
    //total barang
    int total = harga * jumlah;
    
    double diskon;
    if(total>=25000 && total<50000){
        diskon = 0.1 * total;
    }
    else if(total>=50000 && total<100000){
        diskon = 0.2 * total;
    }
    else if(total>=100000 && total<150000){
        diskon = 0.3 * total;
    }
    else if(total>=150000){
        diskon = 0.4 * total;
    }

    int final = total - diskon;
    printf("%d", final);
return 0;
}