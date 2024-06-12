#include <stdio.h>


int main(){
    int banyak, batas;
    scanf("%d %d", &banyak, &batas);
    
    int angka[1000];
    for(int i=0; i<banyak; i++){
        scanf("%d", &angka[i]);
    }

    int cari, count=0;
    scanf("%d", &cari);
    for(int i=0; i<banyak; i++){
        if(angka[i]==cari){
        count++;
        }
    }
    printf("%d", count);


}