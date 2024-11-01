#include <stdio.h>

int main(){
    long long A, B;
    scanf("%lld %lld", &A, &B);

    if(((A+B)%2==0) && ((A-B)%2==0) && ((A*B)%2==0)){
        if(A > B){
            if(A%B == 0){
                printf("We are soulmates");
            } else{
                printf("We are NOT soulmates");
            }
        }else{
            if(B%A == 0){
                printf("We are soulmates");
            } else{
                printf("We are NOT soulmates");
            }
        }
    }else{
        printf("We are NOT soulmates");
    }
}