#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct{
    int x,y;
}Point;

Point queue[max*max];

int front=0,rear=0;

void enqueue(Point p){
    queue[rear++]=p;
}
Point dequeue(){
    return queue[front++];
}
int isEmpty(){
    return front==rear;
}
int bfs(char maze[max][max],Point start,Point end, int n,int m){
    int dx[] = {0,0,-1,1},dy[]={1,-1,0,0};
    int visited[max][max]={0};
    Point parent[max][max];

    enqueue(start);
    visited[start.x][start.y] = 1;

    while(!isEmpty()){
        Point current=dequeue();
        if(current.x==end.x&&current.y==end.y){
            Point path[max*max];
            int length=0;
            while(!(current.x == start.x && current.y == start.y)){
                path[length++] = current;
                current=parent[current.x][current.y];
            }
            path[length++]=start;

            for(int i=0;i<n;i++) {
                for(int j=0;j<m;j++) {
                    int isPath=0;
                    for(int k=0;k<length;k++) {
                        if(path[k].x==i&&path[k].y == j){
                            isPath=1;
                            break;
                        }
                    }
                    if(isPath){
                        if(maze[i][j]=='S'||maze[i][j]=='E')printf("%c", maze[i][j]);
                        else printf("x");
                    }
                    else printf("%c", maze[i][j]);
                }
                printf("\n");
            }
			//printf("%d", length);
            return 1;
			

        }

        for (int i=0;i<4;i++) {
            int nx=current.x+dx[i],ny=current.y+dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && maze[nx][ny]!='#' &&!visited[nx][ny]) {
                Point newPoint={nx, ny};
                enqueue(newPoint);
                visited[nx][ny]=1;
                parent[nx][ny]=current;
            }
        }
    }

    return 0;
}

int main() {
    int n,m;
    char maze[max][max];
    Point start,end;
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf(" %c", &maze[i][j]);
            if (maze[i][j]=='S')start.x=i,start.y=j;
            if (maze[i][j]=='E')end.x=i,end.y=j;
        }
    }

    if(!bfs(maze, start, end, n, m))printf("tujuan tidak ditemukan\n");
	
    return  0;
}