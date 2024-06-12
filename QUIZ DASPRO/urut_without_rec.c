#include <stdio.h>

int angka(int n, int *arr){
    int menurun = 1; 
    for(int i = 1; i < n; i++){
        if(arr[i - 1] < arr[i]){
            menurun = 0; 
            break;
        }
    }

    if(menurun){
        printf("URUT\n");
    } 
    else{
        printf("TIDAK\n");
    }

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    angka(n,&arr);
}

