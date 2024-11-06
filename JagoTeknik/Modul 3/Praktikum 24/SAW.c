#include <stdio.h>
 // 3*f(n-1)

int pola(int n){
    if(n == 1){
        return 2;
    }

    return 3*pola(n-1); 
}

int main(){
    int n;
    scanf("%d", &n);
    int hasil = pola(n);
    printf("%d\n", hasil);    
}