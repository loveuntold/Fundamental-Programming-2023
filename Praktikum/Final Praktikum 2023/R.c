// Rizz Buzz

#include <stdio.h>

int main(){
    unsigned long long int x,y;
    scanf("%llu %llu", &x, &y);

    int rizz = 0;
    int buzz = 0;
    int wuzz = 0;

    // unsigned long long int m = x%y;
    // printf("%llu\n", m);

    if(x%y==0 || y%x==0){
        rizz = 1;
    }

    unsigned long long int z = x & y;
    if(z == x || z == y){
        buzz = 1;
    }
    else if(z == 0){
        wuzz = 1;
    }

    if(rizz == 0){
        printf("Not Rizz");
        if(buzz == 1){
            printf(", but Buzz!\n");
        }
        else if(wuzz == 1){
            printf(", but Wuzz!\n");
        }
    }
    else if(rizz == 1){
        printf("Rizz");
        if(buzz == 1){
            printf("Buzz\n");
        }
        else if(wuzz == 1){
            printf("Wuzz\n");
        }
    }

}