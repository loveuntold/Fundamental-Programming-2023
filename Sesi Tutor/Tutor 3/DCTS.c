#include <stdio.h>
// organik 0
// non organik 1

int main(){
    int x;
    scanf("%d", &x);

    int angka[x];
    for(int i=0; i<x; i++){
        scanf("%d", &angka[i]);
    }

    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<x; i++){
        if(angka[i]==0){
            printf("%d ", i+1);
            count1++;
        } 
        
    }
    if(count1>0){
            printf("\n");
        } 
    if(count1==0){
            printf("Bersih banget bjir\n");
        }

    for(int i=0; i<x; i++){
       if(angka[i]==1){
            printf("%d ", i+1);
            count2++;
        } 
        
    }
    if(count2>0){
            printf("\n");
        } 

    if(count2==0){
            printf("Bersih banget bjir");
        }
    

}