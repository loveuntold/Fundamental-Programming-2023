#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d ", &x,&y); // grid
    char bombarr[10][101][101];

    for (int i = 0;i<y;i++){
        for(int j = 0;j<x;j++){
            bombarr[0][i][j] =' ';
        }
    }

    int count; // banyaknya bom max 3
    scanf("%d ", &count);
    int xBomb[count],yBomb[count];
    char BombCode[count];
    for(int i = 0;i<count;i++){
        scanf("%d %d %c", &xBomb[i],&yBomb[i],&BombCode[i]);
        switch(BombCode[i]){
            case 'R':{
                bombarr[i][yBomb[i]][xBomb[i]] = 'R';
                bombarr[i][yBomb[i]-1][xBomb[i]-1] = 'R';
                bombarr[i][yBomb[i]][xBomb[i]+2] = 'R';
                bombarr[i][yBomb[i]][xBomb[i]-2] = 'R';
                bombarr[i][yBomb[i]+2][xBomb[i]] = 'R';
                bombarr[i][yBomb[i]-2][xBomb[i]] = 'R';
                bombarr[i][yBomb[i]+1][xBomb[i]+1] = 'R';
                bombarr[i][yBomb[i]+1][xBomb[i]-1] = 'R'; 
                bombarr[i][yBomb[i]-1][xBomb[i]+1] = 'R';
                bombarr[i][yBomb[i]-1][xBomb[i]+1] = 'R';
                bombarr[i][yBomb[i]-2][xBomb[i]-2] = 'R';
                bombarr[i][yBomb[i]-3][xBomb[i]-2] = 'R';
                bombarr[i][yBomb[i]-3][xBomb[i]-1] = 'R';
                bombarr[i][yBomb[i]+1][xBomb[i]-3] = 'R'; 
                bombarr[i][yBomb[i]+2][xBomb[i]-3] = 'R';
                bombarr[i][yBomb[i]+2][xBomb[i]-2] = 'R';
                bombarr[i][yBomb[i]+3][xBomb[i]+1] = 'R';
                bombarr[i][yBomb[i]+3][xBomb[i]+2] = 'R';
                bombarr[i][yBomb[i]+2][xBomb[i]+2] = 'R';
                bombarr[i][yBomb[i]-2][xBomb[i]+2] = 'R';
                bombarr[i][yBomb[i]-2][xBomb[i]+3] = 'R';
                bombarr[i][yBomb[i]-1][xBomb[i]+3] = 'R';
                break;
                }
            case 'B':{
                bombarr[i][yBomb[i]-1][xBomb[i]] = 'B';
                bombarr[i][yBomb[i]-1][xBomb[i]-1] = 'B';
                bombarr[i][yBomb[i]][xBomb[i]-1] = 'B';
                bombarr[i][yBomb[i]+1][xBomb[i]-1] = 'B';
                bombarr[i][yBomb[i]+1][xBomb[i]-1] = 'B';
                bombarr[i][yBomb[i]+1][xBomb[i]] = 'B';
                bombarr[i][yBomb[i]+1][xBomb[i]+1] = 'B';
                bombarr[i][yBomb[i]][xBomb[i]+1] = 'B';
                bombarr[i][yBomb[i]-1][xBomb[i]+1] = 'B';

                //left upper side
                bombarr[i][yBomb[i]-1][xBomb[i]-3] = 'B';
                bombarr[i][yBomb[i]-2][xBomb[i]-3] = 'B';
                bombarr[i][yBomb[i]-2][xBomb[i]-2] = 'B';
                bombarr[i][yBomb[i]-3][xBomb[i]-2] = 'B';
                bombarr[i][yBomb[i]-3][xBomb[i]-1] = 'B';

                //left down side
                bombarr[i][yBomb[i]+1][xBomb[i]-3] = 'B';
                bombarr[i][yBomb[i]+2][xBomb[i]-3] = 'B';
                bombarr[i][yBomb[i]+2][xBomb[i]-2] = 'B';
                bombarr[i][yBomb[i]+3][xBomb[i]-2] = 'B';
                bombarr[i][yBomb[i]+3][xBomb[i]-1] = 'B';

                //right upper side
                bombarr[i][yBomb[i]-1][xBomb[i]+3] = 'B';
                bombarr[i][yBomb[i]-2][xBomb[i]+3] = 'B';
                bombarr[i][yBomb[i]-2][xBomb[i]+2] = 'B';
                bombarr[i][yBomb[i]-3][xBomb[i]+2] = 'B';
                bombarr[i][yBomb[i]-3][xBomb[i]+1] = 'B';

                //right down side
                bombarr[i][yBomb[i]+1][xBomb[i]+3] = 'B';
                bombarr[i][yBomb[i]+2][xBomb[i]+3] = 'B';
                bombarr[i][yBomb[i]+2][xBomb[i]+2] = 'B';
                bombarr[i][yBomb[i]+3][xBomb[i]+2] = 'B';
                bombarr[i][yBomb[i]+3][xBomb[i]+1] = 'B';
                break;
            }
            case 'G':{
                bombarr[i][yBomb[i]][xBomb[i]] = 'G';
                bombarr[i][yBomb[i]][xBomb[i]-3] = 'G';
                bombarr[i][yBomb[i]][xBomb[i]+3] ='G';
                bombarr[i][yBomb[i]+3][xBomb[i]] = 'G';
                bombarr[i][yBomb[i]-3][xBomb[i]] = 'G';
                bombarr[i][yBomb[i]-1][xBomb[i]-2] = 'G';
                bombarr[i][yBomb[i]-1][xBomb[i]+2] = 'G';
                bombarr[i][yBomb[i]-2][xBomb[i]-2] = 'G';
                bombarr[i][yBomb[i]-2][xBomb[i]+2] = 'G';
                bombarr[i][yBomb[i]-2][xBomb[i]-1] = 'G';
                bombarr[i][yBomb[i]-2][xBomb[i]+1] = 'G';
                bombarr[i][yBomb[i]+1][xBomb[i]-2] = 'G';
                bombarr[i][yBomb[i]+1][xBomb[i]+2] = 'G';
                bombarr[i][yBomb[i]+2][xBomb[i]-2] = 'G';
                bombarr[i][yBomb[i]+2][xBomb[i]+2] = 'G';
                bombarr[i][yBomb[i]+2][xBomb[i]-1] = 'G';
                bombarr[i][yBomb[i]+2][xBomb[i]+1] = 'G';
                break;

            }
        }
    }
    for(int k=1;k<count;k++){
        for (int i = 0;i<y;i++){
            for(int j = 0;j<x;j++){
                //aturan primary
                
                if(bombarr[0][i][j]=='R'){
                    if(bombarr[k][i][j]=='B')bombarr[0][i][j]='M';
                    if(bombarr[k][i][j]=='G')bombarr[0][i][j]='Y';
                }
                else if(bombarr[0][i][j]=='G'){
                    if(bombarr[k][i][j]=='R')bombarr[0][i][j]='Y';
                    if(bombarr[k][i][j]=='B')bombarr[0][i][j]='C';
                }
                else if(bombarr[0][i][j]=='B'){
                    if(bombarr[k][i][j]=='R')bombarr[0][i][j]='M';
                    if(bombarr[k][i][j]=='G')bombarr[0][i][j]='C';
                }
                else if(bombarr[0][i][j]=='M'){
                    if(bombarr[k][i][j]=='R'||bombarr[k][i][j]=='B')bombarr[0][i][j]=bombarr[k][i][j];
                    if(bombarr[k][i][j]=='G')bombarr[0][i][j]='W';
                }
                else if(bombarr[0][i][j]=='C'){
                    if(bombarr[k][i][j]=='G'||bombarr[k][i][j]=='B')bombarr[0][i][j]=bombarr[k][i][j];
                    if(bombarr[k][i][j]=='R')bombarr[0][i][j]='W';
                }
                else if(bombarr[0][i][j]=='Y'){
                    if(bombarr[k][i][j]=='G'||bombarr[k][i][j]=='R')bombarr[0][i][j]=bombarr[k][i][j];
                    if(bombarr[k][i][j]=='B')bombarr[0][i][j]='W';
                }
                else if(bombarr[0][i][j]==' '){
                    if(bombarr[k][i][j]=='R'||bombarr[k][i][j]=='G'||bombarr[k][i][j]=='B')bombarr[0][i][j]=bombarr[k][i][j];
                }
            }
        }
    }

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            if(j!=0)printf( "%c|",bombarr[0][i][j]);
            else printf("|%c|",bombarr[0][i][j]);
        }
        printf("\n");
    }
    return 0;
}