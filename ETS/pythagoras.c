#include <stdio.h>
#include <math.h>

void bubbleSort(int angka[], int n){
    for(int i = 0; i < n - 1; i++){

        for(int j = 0; j < n - 1; j++){

            if(angka[j] > angka[j + 1]){

                int temp = angka[j];  
                angka[j] = angka[j+1];
                angka[j + 1]= temp;


            }
        }
    }
}
/*
1 5 4 3
1 4 5 3
1 4 5 3
1 4 3 5
1 3 4 5




*/



int main(){
    
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int n[3] = {x, y, z};
    int n1, n2, n3;

    bubbleSort(n, 3);

    n1 = n[0];
    n2 = n[1];
    n3 = n[2];

    if(pow(n1, 2) + pow(n2, 2) == pow(n3, 2)){
        printf("%d %d %d\n", n1, n2, n3);
    }
    else {
        printf("Bukan Tripel Pythagoras.\n");
    }
    return 0;
}