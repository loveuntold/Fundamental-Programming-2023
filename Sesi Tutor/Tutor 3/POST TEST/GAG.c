#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int angka[x];
    for(int i=0; i<x; i++){
        scanf("%d", &angka[i]);
    }

    for(int i=0; i<x; i++){
        if(angka[i]%2==0){
            printf("GENAP\n");
        }
        else if(angka[i]%2==1){
            printf("GANJIL\n");
        }
    }


}