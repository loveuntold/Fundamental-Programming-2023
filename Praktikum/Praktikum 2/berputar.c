#include <stdio.h>

int main(){
    int row, col, n; // row turun, col samping
    scanf("%d %d %d", &row, &col, &n); 

    int matrix[100][100];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]);
            
        }
    }
    // buat clockwise (searah jarum jam)
    if(n>0){
        for(int i = 0; i < n; i++){ 
            int tempMatrix[100][100];
            for(int j = 0; j < col; j++){
                for(int k = 0; k < row; k++){
                    tempMatrix[j][k] = matrix[row - k - 1][j]; // kolom jadi baris, baris jadi kolom
                     /*
                     misalnya row: 3; col: 2; n: 3;

                    i = 0 (loop 1)
                    temp =  5 3 1           matrix =  1 2 
                            6 4 2                     3 4
                                                      5 6
                    i = 1 (loop 2)
                    temp =  6 5           matrix =  5 3 1  
                            4 3                     6 4 2
                            2 1
                    i = 2 (loop 3)
                    temp =  2 4 6           matrix =  6 5 
                            1 3 5                     4 3
                                                      2 1
                    */
                }
            }
            // ini semua buat nyimpen informasi matriksnya sebelum di loop lagi, misalnya awalnya 3 x 4 jadi 4 x 3, karena klo gk disimpen malah tetep 3 x 4
            int oldRow = row;
            int oldCol = col;
            
            // tuker
            row = oldCol;
            col = oldRow;

            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    matrix[i][j] = tempMatrix[i][j];
                }
            }
        }
    } 
    else if(n < 0){ // buat counter clockwise
         for (int i = -n; i > 0 ; i--){
            int tempMatrix[100][100]; 
            for(int j = 0; j < col; j++){
                for(int k = 0; k < row; k++){
                    tempMatrix[j][k] = matrix[k][col - j - 1];
                }
            }
            
            int oldRow = row;
            int oldCol = col;

            row = oldCol;
            col = oldRow;

            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    matrix[i][j] = tempMatrix[i][j];  
                }
            }
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);   
        }
        printf("\n");
    }
    return 0;
}