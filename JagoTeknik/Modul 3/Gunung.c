#include <stdio.h>

void Pola(int n){
    if(n == 1){
        printf("1\n");
        return;
    }

    Pola(n-1);

    for(int i=1; i<=n; i++){
        printf("%d ", i);
    }

    // for(int i=1; i<=n; i++){
    //     printf("*");
    // }

    printf("\n");

    Pola(n-1);

}

int main(){
    int n;
    scanf("%d", &n);

    Pola(n);
}