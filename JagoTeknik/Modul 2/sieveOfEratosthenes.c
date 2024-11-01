#include <stdio.h>

// Sieve of Eratosthenes adalah salah satu algoritma untuk mencari bilangan prima yang efisien.
// Algoritma ini bekerja dengan cara menghilangkan bilangan yang bukan prima dari list bilangan.

int main(){
    int n;
    printf("Masukkan batas bilangan: ");
    scanf("%d", &n);

    // Inisialisasi array of boolean
    int prime[n+1];
    for(int i=0; i<=n; i++){
        prime[i] = 1;
    }

    for(int p=2; p*p<=n; p++){
        if(prime[p] == 1){
            for(int i=p*p; i<=n; i+=p){
                prime[i] = 0; // jika bukan bilangan prima, maka di-set menjadi 0
            }
        }
    }

    for(int p=2; p<=n; p++){
        if(prime[p] == 1){
            printf("%d ", p);
        }
    }

    return 0;

}