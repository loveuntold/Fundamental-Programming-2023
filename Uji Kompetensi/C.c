#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    if(x>=86 && x<=100){
        printf("A");
    }
    else if(x>=76 && x<=85){
        printf("AB");
    }
    else if(x>=66 && x<=75){
        printf("B");
    }
    else if(x>=61 && x<=65){
        printf("BC");
    }
    else if(x>=56 && x<=60){
        printf("C");
    }
    else if(x>=41 && x<=55){
        printf("D");
    }
    else if(x>=0 && x<=40){
        printf("E");
    }

}