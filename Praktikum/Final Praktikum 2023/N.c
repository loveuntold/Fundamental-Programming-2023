// Professor Deez Ingin Pamit (PDIP)

#include <stdio.h>

int hari(int arr[], int n, int max){
    int days = 0;
    int temp = 0;

    for(int i=0; i<n; i++){
        if(temp+arr[i]<=max){
            temp+=arr[i];
        }

        else{
            days++;
            temp = arr[i];
        }
    }

    if(temp>0){
        days++;
    }
    return days;
}

int binary(int arr[], int n, int m, int min, int max){
    if(min==max){
        return min;
    }
    
    int mid = min + (max-min) / 2;
    int days = hari(arr, n, mid);

    if(days>m){
        return binary(arr, n, m, mid+1, max);
    }

    else{
        return binary(arr, n, m, min, mid);
    }

}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int min = 1;
    int max = 1000000;

    int hasil = binary(arr, n, m, min, max);
    printf("%d\n", hasil);


}
