// Ucup’s Final Wish

int main(){
    int n;
    scanf("%d", &n);

    int angka[n];
    for(int i=0; i<n; i++){
        scanf("%d", &angka[i]);
    }

    int arr[n][n-1];

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(i==0){
                arr[i][j] = angka[j+1] - angka[j];
            } 
            else{
                arr[i][j] = arr[i-1][j+1] - arr[i-1][j];
            }
            }
        }

        int hasil = angka[n-1];
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                if(j==n-i-2){
                    hasil += arr[i][j];
                }
            }
        }

    printf("%d", hasil);
}  