#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d ", &x,&y);
    char bombarr[100][y][x];

    for (int i = 0;i<y;i++){
        for(int j = 0;j<x;j++){
            bombarr[0][i][j] =' ';
        }
    }

    int count; // banyaknya bom
    scanf("%d ", &count);
    int xBomb[count],yBomb[count];
    char BombCode[count];
    int r ,s ;
    for(int i = 0;i<count;i++){
        scanf("%d %d %c", &xBomb[i],&yBomb[i],&BombCode[i]);
            if(BombCode[i]=='R'){
                bombarr[i][yBomb[i]][s = (xBomb[i])] = 'R'; // PUSAT
                 // y = 0
                bombarr[i][r = yBomb[i]][s = xBomb[i]-2]= 'R'; // 1
                bombarr[i][r = yBomb[i]][s = xBomb[i]+2]= 'R'; // 2
                // y = +1
                bombarr[i][r = yBomb[i]+1][s = xBomb[i]+1]= 'R'; // 3
                bombarr[i][r = yBomb[i]+1][s = xBomb[i]-3]= 'X'; // 4
                bombarr[i][r = yBomb[i]+1][s = xBomb[i]-1] = 'X'; ///5
                // y = +2
                bombarr[i][r = yBomb[i]+2][s = xBomb[i]-3]= 'R'; // 6
                bombarr[i][r = yBomb[i]+2][s = xBomb[i]-2]= 'R'; // 7
                bombarr[i][r = yBomb[i]+2][s = xBomb[i]]= 'R'; // 8
                bombarr[i][r = yBomb[i]+2][s = xBomb[i]+2]= 'R'; // 9
                // y = +3
                bombarr[i][r = yBomb[i]+3][s = xBomb[i]+1]= 'R'; // 10
                bombarr[i][r = yBomb[i]+3][s = xBomb[i]+2]= 'R'; // 11
                // y = -1
                bombarr[i][r = yBomb[i]-1][s = xBomb[i]-1]= 'R';// 12
                bombarr[i][r = yBomb[i]-1][s = xBomb[i]+1]= 'R'; // 13
                bombarr[i][r = yBomb[i]-1][s = xBomb[i]+3]= 'R';// 14
                // y = -2
                bombarr[i][r = yBomb[i]-2][s = xBomb[i]-2]= 'R'; // 15
                bombarr[i][r = yBomb[i]-2][s = xBomb[i]]= 'R'; // 16
                bombarr[i][r = yBomb[i]-2][s = xBomb[i]+2]= 'R';// 17
                bombarr[i][r = yBomb[i]-2][s = xBomb[i]+3]= 'R'; // 18
                // y = -3
                bombarr[i][r = yBomb[i]-3][s = xBomb[i]-2]= 'R'; // 19
                bombarr[i][r = yBomb[i]-3][s = xBomb[i]-1]= 'R'; // 20
        
         printf("loop ke %d adalah r: %d, s: %d\n", i, r, s);
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

    for(int i = 0;i<y;i++){
        for(int j = 0;j<x;j++){
            if(j!=0)printf("%c|", bombarr[0][i][j]);
            else printf("|%c|", bombarr[0][i][j]);
        }
        printf("\n");
    
   
} return 0;
}
