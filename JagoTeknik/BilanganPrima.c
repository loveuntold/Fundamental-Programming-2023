#include <stdio.h>

int main(){
    int prime;
    printf("Masukkan bilangan: ");
    scanf("%d", &prime);

    int isPrime = 1;
    for(int i=2; i<prime; i++){
        if(prime % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1){
        printf("%d adalah bilangan prima", prime);
    }
    else{
        printf("%d bukan bilangan prima", prime);
    }
}