// Dayat Pensiun

#include <stdio.h>

int row, col; // x y
int path = 0;
int mulai = 0; // if start is found
int selesai = 0; // if end is found
int head = 0, tail = 0;
int directionX[] = {1, 0, 0, -1}; // direction vector kanan kiri atas bawah
int directionY[] = {0, 1, -1, 0}; // direction vector kanan kiri atas bawah

typedef struct point{
    int colX, rowY;
} point;

point queue[225];
point temp[225];

char maze[15][15];
int marked[15][15];

void enqueue(point p){
    queue[tail++] = p;
}

point dequeue(){
    return queue[head++];
}

int kosong(){
    return head==tail;
}

int labirin(point start, point end){
    point main[15][15];
    enqueue(start);
    marked[start.colX][start.rowY] = 1; // tanda kalo udah visit
    
    while(!kosong()){
        point curr = dequeue();

        if(curr.colX == end.colX && curr.rowY == end.rowY){
            while(!(curr.colX == start.colX && curr.rowY == start.rowY)){
                temp[path++] = curr;
                curr = main[curr.colX][curr.rowY];
            }

            temp[path++] = start;

            for(int i=0; i<col; i++){
                for(int j=0; j<row; j++){
                    int currPath = 0;

                    for(int k=0; k<path; k++){
                        if(temp[k].colX == i && temp[k].rowY == j){
                            currPath = 1;
                            break;
                        }
                    }

                    if(currPath){
                        if(maze[i][j] == 'S' || maze[i][j] == 'E'){
                            printf("%c", maze[i][j]); // tetep sama
                        }
                        else{
                            printf("x"); // ketemu jalan
                        }
                    }
                    else{
                        printf("%c", maze[i][j]); // kalo dia . atau #
                    }
                }
                printf("\n");
            }
            return 1;
        }

        for(int i=0; i<4; i++){ // gerak kanan kiri atas bawah
            int nextX = directionX[i] + curr.colX;
            int nextY = directionY[i] + curr.rowY;

            if(nextX >= 0 && nextX < col && nextY >= 0 && nextY < row && maze[nextX][nextY] != '#' && !marked[nextX][nextY]){
                enqueue((point){nextX, nextY});
                marked[nextX][nextY] = 1;
                main[nextX][nextY] = curr;
            }
        }
    }
    return 0;
}

int main(){
    scanf("%d %d", &row, &col);

    for(int i=0; i<col; i++){
        scanf("%s", maze[i]); 
    }

    point start, end;

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(maze[i][j] == 'S'){
                start.colX = i;
                start.rowY = j;
                mulai = 1;
            }
            else if(maze[i][j] == 'E'){
                end.colX = i;
                end.rowY = j;
                selesai = 1;
            }
        }
    }

    // printf("%d %d %d %d\n", start.colX, start.rowY, end.colX, end.rowY);

    if(mulai == 0 || selesai == 0){
        printf("tujuan tidak ditemukan\n");
        return 0;
    }
    if(!labirin(start,end)){
        printf("tujuan tidak ditemukan\n");
    }

    return 0;
    // source: https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
}
