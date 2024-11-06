#include <stdio.h>

int hasil = 0;
void fib(int num, int a, int b){
    if(a > num){
        return;
    }
    
    fib(num, b, a + b);
    printf("%d ", a);
    hasil += a;

}

int main(){
    int n;
    scanf("%d", &n);

    fib(n, 0, 1);
    printf("\n%d\n", hasil);
}