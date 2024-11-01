#include <stdio.h>

int fibbonacci(int n){
    if(n == 0){
        return 2;
    }
    if(n == 1){
        return 3;
    }

    return fibbonacci(n-1) + fibbonacci(n-2);
}

void pattern(int num){
    if(num == 0){
        printf(">>\n");
        return;
    } else if(num == 1){
        pattern(0);
        printf(">>>\n");
        pattern(0);
        return;
    } else if (num > 1){
        pattern(num-1);

        for(int i=0; i<fibbonacci(num); i++){
            printf(">");
        }
        printf("\n");

        pattern(num-1);
    }

}

int main(){
    int n;
    scanf("%d", &n);

    pattern(n);

}