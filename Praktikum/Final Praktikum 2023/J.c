// Jeon Adventure : The Final
#include <stdio.h>

int main(){
    long long a,b,c,d,e;

    int n;
    scanf("%d", &n);

     for(int i=0; i<n; i++){
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);

        b = a % b;
        d = c * d;
        e = (b + d)%e;

        printf("%lld\n", e);
    }
}