#include <stdio.h>

int main(){
    int tahun;
    scanf("%d", &tahun);

    if(tahun>=1500 && tahun<=5000){
    if(tahun % 400 == 0){
        printf("Perjalanan waktu telah dimulai! Selamat mengeksplorasi tahun %d.", tahun);
    }
    else if(tahun % 100 == 0){
        printf("Tahun %d bukan tahun kabisat. Coba tahun lain.", tahun);
    }
    else if(tahun % 4 == 0){
        printf("Perjalanan waktu telah dimulai! Selamat mengeksplorasi tahun %d.", tahun);
    }
    else{
        printf("Tahun %d bukan tahun kabisat. Coba tahun lain.", tahun);
    }
    }
   return 0;
}