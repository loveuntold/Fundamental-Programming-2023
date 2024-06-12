#include <stdio.h>
// 0 1 1 2 3 5 8 13
// 1 2 3 4 5 6 7 8 

int fib(int s){
        if(s <= 1){
            return 0;
        }
        else if(s >= 2 && s < 4){
            return 1;
        }
        else{
            return fib(s-1) + fib(s-2);
        }
}

int main(){
   int angka;
    scanf("%d", &angka);

    int hasil = fib(angka);
    printf("%d", hasil);
    return 0;

}







