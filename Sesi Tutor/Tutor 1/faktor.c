#include <stdio.h>

int main(){
    int bilangan;
    scanf("%d", &bilangan);

    for(int n=bilangan; n>0; n--){
        if(bilangan%n==0){
            printf("%d\n", n);
        }
    }

}