#include <stdio.h>

unsigned long long int deekuh(int a, int b){ 
     if (a - b <= 1) {
        return a; 
    } 
    else if(a < 209 && b >= 1 && b < a && a > 1){
        return a * deekuh(a - b, b);
    }
}

int main(){
    int n, a, b;
    long long int hasil[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        hasil[i] = deekuh(a, b);

    }
    for(int i = 0; i < n; i++){
        printf("%lld\n", hasil[i]);

    }

}
/* 

6 2; 
6 * (6-2) * (6-2-2)
6*4*2=48

4 1; 
4 * (4-1) * (4-1)-1 * ((4-1)-1)-1
4*3*2*1=24

8 3; 
8 * (8-3) * (8-3)-3 
8*5*2=80

*/
