#include <stdio.h>

int angka(int start, int end, int arr[]){
   if(start==end){
        return 1;
    }
    
    if(arr[start]<arr[start+1]){
        return 0;
    }
    else{
        angka(start+1,end,arr);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    if(angka(0,n,arr)){
        printf("URUT");
    }
    else{
        printf("TIDAK");
    }
}
