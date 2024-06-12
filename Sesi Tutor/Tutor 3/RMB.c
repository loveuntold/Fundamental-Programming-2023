#include <stdio.h>

int main(){
    int m, n, b;
    scanf("%d %d %d", &m, &n, &b);

    int i, j, sum, count = 0;
    for(i = 0; i < m; i++){
        sum = 0;
        
        for(j = 0; j < n; j++){
            int score;
            scanf("%d", &score);
            sum += score;
        }
        
        if((sum / n) > b){
            count++;
        }
    }

    printf("%d\n", count);
}