#include <stdio.h>


int piktor(int a, int v) {
    if (a - v <= 1) {
        return a;
    } 
    else if(a < 209 && v >= 1 && v < a && a > 1){
        // buat ngecek overflow.
        long long int result = a * piktor(a - v, v);
    
        return result;
        
    }
}
int main(){
    int n, a, v;
    long long int hasil[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &v);
        hasil[i] = piktor(a, v);

    }
    for(int i = 0; i < n; i++){
        printf("%lld\n", hasil[i]);

    }

}