#include <stdio.h>

int main(){
    int a; // yang kebawah
    scanf("%d", &a);
    for(int i=0; i<=a; i++){
        for(int j=i;j<=a;j++){
            printf(" ");
        }
            for(int j=1;j<=i;j++){
                printf("*");
            }
                for(int j=1; j<i; j++){
                    printf("*"); 
                }
        printf("\n");
    }
}