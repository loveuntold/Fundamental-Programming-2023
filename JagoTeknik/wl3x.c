// Link soal: https://drive.google.com/file/d/1bgcZPtLD-NN40TPAeVPK0n43g9I3gleX/view?usp=sharing

#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d ", &x,&y);
    char bombarr[100][100]={ };
	char bombarr_end[100][100]={ };

    for(int i = 0;i<y;i++){
        for(int j = 0;j<x;j++){
			bombarr_end[j][i] =' ';
        }
    }

    int count; // banyaknya bom
    scanf("%d", &count);
    int xBomb, yBomb;
    char BombCode;
    for(int i = 0;i<count;i++){
        for(int i = 0; i<y; i++){
	        for(int j = 0; j<x; j++){
	            bombarr[j][i] = ' ';
	    }
	}
        scanf("%d %d %c", &xBomb,&yBomb,&BombCode);
        switch(BombCode){
            case 'R':{
                bombarr[xBomb][yBomb] = 'R'; // PUSAT
                 // y = 0
                bombarr[xBomb-2][yBomb]= 'R'; // 1
                bombarr[xBomb+2][yBomb]= 'R'; // 2
                // y = +1
                bombarr[xBomb+1][yBomb+1]= 'R'; // 3
                bombarr[xBomb-3][yBomb+1]= 'R'; // 4
                bombarr[xBomb-1][yBomb+1]= 'R'; // 5
                // y = +2
                bombarr[xBomb-3][yBomb+2]= 'R'; // 6
                bombarr[xBomb-2][yBomb+2]= 'R'; // 7
                bombarr[xBomb][yBomb+2]= 'R'; // 8
                bombarr[xBomb+2][yBomb+2]= 'R'; // 9
                // y = +3
                bombarr[xBomb+1][yBomb+3]= 'R'; // 10
                bombarr[xBomb+2][yBomb+3]= 'R'; // 11
                // y = -1
                bombarr[xBomb-1][yBomb-1]= 'R';// 12
                bombarr[xBomb+1][yBomb-1]= 'R'; // 13
                bombarr[xBomb+3][yBomb-1]= 'R';// 14
                // y = -2
                bombarr[xBomb-2][yBomb-2]= 'R'; // 15
                bombarr[xBomb][yBomb-2]= 'R'; // 16
                bombarr[xBomb+2][yBomb-2]= 'R';// 17
                bombarr[xBomb+3][yBomb-2]= 'R'; // 18
                // y = -3
                bombarr[xBomb-2][yBomb-3]= 'R'; // 19
                bombarr[xBomb-1][yBomb-3]= 'R'; // 20
            }
            break;

            case 'G':{
                bombarr[xBomb][yBomb] = 'G'; // PUSAT
                // y = 0
                bombarr[xBomb-3][yBomb] = 'G'; // 1
                bombarr[xBomb+3][yBomb] = 'G'; // 2
                // y = +1
                bombarr[xBomb-2][yBomb+1] = 'G'; // 3
                bombarr[xBomb+2][yBomb+1] = 'G'; // 4
                // y = +2
                bombarr[xBomb-2][yBomb+2] = 'G'; // 5
                bombarr[xBomb+2][yBomb+2] = 'G'; // 6
                bombarr[xBomb-1][yBomb+2] = 'G'; // 7
                bombarr[xBomb+1][yBomb+2] = 'G'; // 8
                // y = +3
                bombarr[xBomb][yBomb+3] = 'G'; // 9
                // y = -1
                bombarr[xBomb-2][yBomb-1] = 'G'; // 3
                bombarr[xBomb+2][yBomb-1] = 'G'; // 4
                // y = -2
                bombarr[xBomb-2][yBomb-2] = 'G'; // 5
                bombarr[xBomb+2][yBomb-2] = 'G'; // 6
                bombarr[xBomb-1][yBomb-2] = 'G'; // 7
                bombarr[xBomb+1][yBomb-2] = 'G'; // 8
                // y = -3
                bombarr[xBomb][yBomb-3] = 'G'; // 9
            }
            break;

            case 'B':{
                bombarr[xBomb-1][yBomb] = ' '; // PUSAT
                // y = 0
                bombarr[xBomb-1][yBomb] = 'B'; // 1
                bombarr[xBomb+1][yBomb] = 'B'; // 2
                // y = +1
                bombarr[xBomb-3][yBomb+1] = 'B'; // 3
                bombarr[xBomb-1][yBomb+1] = 'B'; // 4
                bombarr[xBomb][yBomb+1] = 'B'; // 5
                bombarr[xBomb+1][yBomb+1] = 'B'; // 6
                bombarr[xBomb+3][yBomb+1] = 'B'; // 7
                // y = +2
                bombarr[xBomb-3][yBomb+2] = 'B'; // 8
                bombarr[xBomb-2][yBomb+2] = 'B'; // 9
                bombarr[xBomb+2][yBomb+2] = 'B'; // 10
                bombarr[xBomb+3][yBomb+2] = 'B'; // 11
                // y = +3
                bombarr[xBomb-2][yBomb+3] = 'B'; // 12
                bombarr[xBomb-1][yBomb+3] = 'B'; // 13
                bombarr[xBomb+1][yBomb+3] = 'B'; // 14
                bombarr[xBomb+2][yBomb+3] = 'B'; // 15
                // y = -1
                bombarr[xBomb-3][yBomb-1] = 'B'; // 16
                bombarr[xBomb-1][yBomb-1] = 'B'; // 17
                bombarr[xBomb][yBomb-1] = 'B'; // 18
                bombarr[xBomb+1][yBomb-1] = 'B'; // 19
                bombarr[xBomb+3][yBomb-1] = 'B'; // 20
                // y = -2
                bombarr[xBomb-3][yBomb-2] = 'B'; // 21
                bombarr[xBomb-2][yBomb-2] = 'B'; // 22
                bombarr[xBomb+2][yBomb-2] = 'B'; // 23
                bombarr[xBomb+3][yBomb-2] = 'B'; // 24
                // y = -3
                bombarr[xBomb-2][yBomb-3] = 'B'; // 25
                bombarr[xBomb-1][yBomb-3] = 'B'; // 26
                bombarr[xBomb+1][yBomb-3] = 'B'; // 27
                bombarr[xBomb+2][yBomb-3] = 'B'; // 28
            }
            break;
        }
    
	for(int i = 0;i<y; i++){
	    for(int j = 0;j<x; j++){
	        if(bombarr_end[j][i] == bombarr[j][i]){
                bombarr_end[j][i] = bombarr[j][i];
                }
            else if(bombarr_end[j][i] != bombarr[j][i]){
                if(bombarr_end[j][i] == ' ' && bombarr[j][i] != ' '){
                    bombarr_end[j][i] = bombarr[j][i];
                    }
		        else if(bombarr_end[j][i] != ' ' && bombarr[j][i] == ' '){
                     
                    }
		        // PRIMARY + PRIMARY
		        // R + B = M
		        else if(bombarr_end[j][i] == 'R' && bombarr[j][i] == 'B'){
		            bombarr_end[j][i] = 'M';
                    }
                else if(bombarr_end[j][i] == 'B' && bombarr[j][i] == 'R'){
                    bombarr_end[j][i] = 'M';
		            }
		        // G + R = Y
		        else if(bombarr_end[j][i] == 'G' && bombarr[j][i] == 'R'){
		            bombarr_end[j][i] = 'Y';
		            }
		        else if(bombarr_end[j][i] == 'R' && bombarr[j][i] == 'G'){
		            bombarr_end[j][i] = 'Y';
		            }
		        // G + B = C
		        else if(bombarr_end[j][i] == 'G' && bombarr[j][i] == 'B'){
		            bombarr_end[j][i] = 'C';
		            }
                else if(bombarr_end[j][i] == 'B' && bombarr[j][i] == 'G'){
		            bombarr_end[j][i] = 'C';
		            }

		        // SECONDARY + PRIMARY
		        // Y + R = R
		        else if(bombarr_end[j][i] == 'Y' && bombarr[j][i] == 'R'){
		            bombarr_end[j][i] = 'R';
		            }
		        else if(bombarr_end[j][i] == 'R' && bombarr[j][i] == 'Y'){
		            bombarr_end[j][i] = 'R';
		            }
		        // M + R = R
		        else if(bombarr_end[j][i] == 'M' && bombarr[j][i] == 'R'){
		            bombarr_end[j][i] = 'R';
		            }
		        else if(bombarr_end[j][i] == 'R' && bombarr[j][i] == 'M'){
		            bombarr_end[j][i] = 'R';
		            }
		        // Y + G = G
		        else if(bombarr_end[j][i] == 'Y' && bombarr[j][i] == 'G'){
		            bombarr_end[j][i] = 'G';
		            }
		        else if(bombarr_end[j][i] == 'G' && bombarr[j][i] == 'Y'){
		            bombarr_end[j][i] = 'G';
		            }
		        // C + G = G
                else if(bombarr_end[j][i] == 'C' && bombarr[j][i] == 'G'){
		            bombarr_end[j][i] = 'G';
		            }
		        else if(bombarr_end[j][i] == 'G' && bombarr[j][i] == 'C'){
		            bombarr_end[j][i] = 'G';
		            }
		        // C + B = B
		        else if(bombarr_end[j][i] == 'C' && bombarr[j][i] == 'B'){
		            bombarr_end[j][i] = 'B';
		            }
		        else if(bombarr_end[j][i] == 'B' && bombarr[j][i] == 'C'){
		            bombarr_end[j][i] = 'B';
		            }
		        // M + B = B
		        else if(bombarr_end[j][i] == 'M' && bombarr[j][i] == 'B'){
		            bombarr_end[j][i] = 'B';
		            }
		        else if(bombarr_end[j][i] == 'B' && bombarr[j][i] == 'M'){
		            bombarr_end[j][i] = 'B';
		            }

		        // SECONDARY + OTHER PRIMARY
		        // Y + B = W
		        else if(bombarr_end[j][i] == 'Y' && bombarr[j][i] == 'B'){
		            bombarr_end[j][i] = 'W';
		            }
		        else if(bombarr_end[j][i] == 'B' && bombarr[j][i] == 'Y'){
		            bombarr_end[j][i] = 'W';
                    }
		        // M + G = W
                else if(bombarr_end[j][i] == 'M' && bombarr[j][i] == 'G'){
		            bombarr_end[j][i] = 'W';
		            }
		        else if(bombarr_end[j][i] == 'G' && bombarr[j][i] == 'M'){
		            bombarr_end[j][i] = 'W';
		            }
		        // C + M = W
                else if(bombarr_end[j][i] == 'M' && bombarr[j][i] == 'C'){
		            bombarr_end[j][i] = 'W';
		            }
		        else if(bombarr_end[j][i] == 'C' && bombarr[j][i] == 'M'){
		            bombarr_end[j][i] = 'W';
		            }
		        }
	        }
	    }
    } 

    for(int i = 0;i<y;i++){
         for(int j = 0;j<x;j++){
            if(j!=0)printf("%c|",bombarr_end[j][i]);
            else printf("|%c|",bombarr_end[j][i]);
        }
         printf("\n"); }
    return 0;
}