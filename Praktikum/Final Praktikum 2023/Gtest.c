#include <stdio.h>

int row, col, start_row, end_row, start_col, end_col;
char maze[15][15];
int marked[15][15];
int directionX[] = {1, 0, 0, -1};
int directionY[] = {0, 1, -1, 0};
int path = 0;
int minPath = 10000;
int mulai = 0;
int selesai = 0;

// column x row y
void labirin(int tempX, int tempY){
    marked[tempX][tempY] = 1; // tanda kalo udah visit

    if(tempX == end_col && tempY == end_row){
        if(path <= minPath){
            minPath = path; // jarak terpendek

            for(int i=0; i<col; i++){
                for(int j=0; j<row; j++){
                    if(marked[i][j] == 1 && maze[i][j] != 'S' && maze[i][j] != 'E'){
                        maze[i][j] = 'x';
                    }
                    else if(maze[i][j] == 'x'){
                        maze[i][j] = '.';
                    }
                }
            }
        }
        
        marked[tempX][tempY] = 0;
        return;
    }

    for(int i=0; i<4; i++){ // arahnya ada 4
        int adjX = directionX[i] + tempX;
        int adjY = directionY[i] + tempY;

        if(adjX >= 0 && adjX < col && adjY >= 0 && adjY < row && marked[adjX][adjY] == 0 && maze[adjX][adjY] != '#'){
            path++;
            labirin(adjX, adjY);
            path--; // backtrack
        }
    }

    marked[tempX][tempY] = 0;

}

int main(){
    scanf("%d %d", &row, &col);

    for(int j=0; j<col; j++){
        scanf("%s", maze[j]); 
    }

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(maze[i][j] == 'S'){
                start_row = j;
                start_col = i;
                mulai = 1;
            }
            else if(maze[i][j] == 'E'){
                end_row = j;
                end_col = i;
                selesai = 1;
            }     
        }
    }

    // printf("%d %d %d %d\n", start_row, start_col, end_row, end_col);

    if(mulai == 0 || selesai == 0){
        printf("tujuan tidak ditemukan\n");
        return 0;
    }
    labirin(start_col, start_row);

    if(minPath == 10000){
        printf("tujuan tidak ditemukan\n");
        return 0;
    }
    else{
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                printf("%c", maze[i][j]);
                    }

                printf("\n");
            }
        }
        return 0;

}