int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int menurun = 1; //urut secara menurun
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

