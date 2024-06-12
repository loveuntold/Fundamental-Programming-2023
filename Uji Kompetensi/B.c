#include <stdio.h>

int main(){
    int genap;
    scanf("%d", &genap);

    for(int i=1; i<=genap; i++){
        if(i%2==0){
            printf("%d ", i);
        }
        
    }
}