#include <stdio.h>

int n, v, x;
unsigned long long f(int n, int i){
    if(n-i <= 1){
        return n;
    }
    else{
        return n*f(n-i,i);
    }
}

int main(){ 
    scanf("%d", &x);
    long long result[100];
    for(int j = 0; j < x; j++){
        scanf("%d %d", &n, &v);
        result[j]=f(n, v);
    }
    for(int j = 0; j < x; j++){
        printf("%lld\n", result[j]);
    }
}
/* ini tar hapus aja komennya 
yang line 5 itu n-i karena kalo i lebih besar, tar dia minus kan gak boleh makanya gitu. 
kalo dia n<=1 aja tar kayak gini resultnya

1
6 2
156863269512 (entah ini angka random atau kurang dibatesin makanya bisa gitu)

terus itu ada long long result[100] buat nyimpen hasilnya, karena nanti di-looping
*/
