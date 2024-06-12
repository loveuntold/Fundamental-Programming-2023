// Lapet Pensiun

#include <stdio.h>

void rotate(int x, int n, int matrix[x][x]);
int main(){
    int m;
    scanf("%d", &m);

    int x, n; 
    for(int i=0; i<m; i++){
        scanf("%d %d", &x, &n); 

        int matrix[x][x];
        for(int j=0; j<x; j++){
            for(int k=0; k<x; k++){
                scanf("%d", &matrix[j][k]);
            
            }
        }

        rotate(x,n,matrix);
        for(int o=0; o<x; o++){
            for(int p=0; p<x; p++){
                printf("%d ", matrix[o][p]);   
            }
            printf("\n");
        }
    }
}

void rotate(int x, int n, int matrix[x][x]){
   for(int i=0; i<n; i++){
        for(int j=0; j<x/2; j++){
            for(int k=j; k<x-j- 1; k++){
                int temp = matrix[j][k];
                matrix[j][k] = matrix[k][x - j - 1];
                matrix[k][x - j - 1] = matrix[x - j - 1][x - k - 1];
                matrix[x - j - 1][x - k - 1] = matrix[x - k - 1][j];
                matrix[x - k - 1][j] = temp;
        }
    }
}  
}