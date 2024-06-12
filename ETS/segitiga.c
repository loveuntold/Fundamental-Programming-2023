#include <stdio.h>

int main(){
    int a; // yang kebawah
    scanf("%d", &a);
    int x=1;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", x); 
            x++;
        }
        printf("\n");
    
    }

}