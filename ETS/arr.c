#include <stdio.h>

int main(){
    int n, jumlah;
    scanf("%d", &n);

    int arr[100000];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &jumlah);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == jumlah){
                if(i < j){
                    printf("%d & %d\n", i, j);
                }
                else {
                    printf("%d & %d\n", j, i);
                }
                return 0;
            }
        }
    }


    return 0;
}