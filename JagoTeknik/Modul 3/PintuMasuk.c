#include <stdio.h>

void pola(int n, int temp){
    if(n == temp){ 
        printf("%d ", n);
        return;
    }

    printf("%d ", temp); 
    pola(n, temp+1);
    printf("%d ", temp);
    
}

int main(){
    int n;
    scanf("%d", &n);

    pola(n,1); 

}