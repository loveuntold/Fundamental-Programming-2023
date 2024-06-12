#include <stdio.h>
int Fibonacci(int N);	/*prototype fungsi*/

int main(){	
    int N;
    printf("Suku bilangin ke ? "); 
    scanf("%d",&N);
    printf("Nilai suku ke %d adalah %d\n", N, Fibonacci(N));
}

/*----- Fungsi deret Fibonacci tidak secara rekursi -----*/
int Fibonacci(int N){	/*definisi fungsi*/
    int Fibo_Bawah, Fibo_Atas, X, I;
    if(N<2){
        return(N);
    }

    Fibo_Bawah = 0;
    Fibo_Atas = 1;
    
    for(I=2; I<=N; I++){	
        X = Fibo_Bawah;		
        Fibo_Bawah = Fibo_Atas;
        Fibo_Atas = X + Fibo_Bawah;
    }
    /* misal n = 5

    iterasi i = 2
    x = 0
    1 = 1
    atas = 1 + 0 = 1

    iterasi i = 3
    x = 1
    1 = 1
    atas = 1 + 1 = 2

    iterasi i = 4
    x = 1
    2 = 2
    atas = 1 + 2 = 3

    iterasi i = 5
    x = 2
    3 = 3
    atas = 2 + 3 = 5
    
    
    */
    return(Fibo_Atas);
}