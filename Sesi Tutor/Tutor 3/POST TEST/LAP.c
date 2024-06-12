#include <stdio.h>
#include <math.h>

int main(){
    int x,y; 
    scanf("%d %d", &x, &y);

    int prime = 1; 
    for(int i = x; i <= y; i++){
        if(i < 2 && i >= 0){
            continue;
        }

        for (int a=2; a<=sqrt(i); a++){
            if(i % a == 0){
                prime = 0; // bukan prima
            }
        }
        
        if(prime == 1){
            printf("%d\n", i);
        }

        prime = 1;
    }
    return 0;
} 