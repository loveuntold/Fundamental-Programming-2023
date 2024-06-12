// Counting Blob
    
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int count = 0;
    int angka[n];
    int *blob = (int*)calloc(1000001, sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &angka[i]);

        if(blob[angka[i]+1]){
            blob[angka[i]]++;
            blob[angka[i]+1]--;
        }

        else{
            blob[angka[i]]++;
        }
    }

    for(int i=0; i<=1000000; i++){
        count+=blob[i];
    }

    printf("%d", count);
    free(blob);
}