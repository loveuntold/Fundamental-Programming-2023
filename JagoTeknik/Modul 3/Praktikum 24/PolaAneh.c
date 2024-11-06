#include <stdio.h>

int hasil = 0;
void Pola(int n){
    if(n == 1){
        hasil += 1;
        return;
    }

    Pola(n-1);

    for(int i=1; i<=n; i++){
        hasil += i;
    }

    Pola(n-1);
}

int main(){
    int n;
    scanf("%d", &n);

    Pola(n);
    printf("%d\n", hasil);
}