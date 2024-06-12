#include <stdio.h>

void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void bubbleSort(int arr[], int n) {
   int i, j, swapped;        // dioptimasi dengan bool `swapped`:
   for (i = 0; i < n-1; i++) {
      swapped = 0;
      for(j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            swapped = 1;
         }
      }
      if(swapped == 0)
         break;
   }
    for(i = 0; i < n; i++) {
         printf("%d ", arr[i]);
      }
}

int binarySearch(int arr[], int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    // If we reach here, then element was not present
    return -1;

}
   
 
int main(){
    int n;
    scanf("%d",&n);

    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr,n);
    printf("\n");

    int n2, x;
    scanf("%d",&n2);
    for(int i=0; i<n2; i++){
        scanf("%d", &x);
        int result = binarySearch(arr,0,n-1,x);

        if(result == -1){
            printf("TIDAK ADA\n");
        }
        else{
            printf("ADA, DI ARRAY KE-%d \n", arr[n]); // ini gimana ngeprint dia array ke berapa??
        }
    }

}