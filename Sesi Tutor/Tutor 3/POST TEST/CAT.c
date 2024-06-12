#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    int angka[x];
    for(int i=0; i<x; i++){
        scanf("%d", &angka[i]);
    }

    int max = angka[0];
    for(int i=0; i<x; i++){
        if(angka[i]>max){
            max = angka[i];
        }
    }

    printf("%d", max);

}