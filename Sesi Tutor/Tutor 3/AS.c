#include <stdio.h>
#include <stdlib.h>


int main (){
    int n, m;
    int hasil;
    n<m;
    scanf("%d %d", &m, &n);
    if(m%n>=1){
        hasil = m%n;
    }
    else if(m%n==0){
        hasil = n;
    }
    printf("%d", hasil);
}