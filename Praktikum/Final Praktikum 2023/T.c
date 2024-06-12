// Top 3 Combinations
#include <stdio.h>
#include <stdlib.h>
#define ull unsigned long long int


void merge(ull arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    ull L[n1], R[n2];

    for(i=0; i<n1; i++){
        L[i] = arr[l + i];
    }

    for(j=0; j<n2; j++){
        R[j] = arr[m + 1 + j];
    }
 
    i = 0;
    j = 0;
    k = l;

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(ull arr[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

// merge sort source: https://www.geeksforgeeks.org/merge-sort/

int LinearCombination(ull n, ull x, ull y){
    for(ull i=0; x * i <= n; i++){
        if((n-x*i)%y == 0){
                return 1;
            }
    }

    return 0;
}

int main(){
    ull x,y;
    scanf("%llu %llu", &x, &y);

    int n;
    scanf("%d", &n);

    ull* arr = (ull*)malloc(n * sizeof(ull));
    for(int i=0; i<n; i++){
        scanf("%llu", &arr[i]);
    }

    mergeSort(arr, 0, n-1);
    int count = 0;
    for(int i=n-1; i>=0; i--){
        if(LinearCombination(arr[i], x, y)){
            printf("%llu ", arr[i]);
            count++;
        }
        if(count == 3){
            break;
        }
    }

    free(arr);
    
}