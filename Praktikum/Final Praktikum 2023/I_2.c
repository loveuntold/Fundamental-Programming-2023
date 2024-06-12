#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int    

typedef struct check{
    int num;
} check;

check num[100001];

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void countTheTenadics(int *start, check *s, int *tenadics){
    

}



int main(){
    int n;
    scanf("%d", &n);

   
    for(int i=0; i<n; i++){
        int tenadics[100001];
        int start;
        scanf("%x", &start);

        printf("Starting from %xtopia, the spy traversed these nations:\n", start);

        while(start!=1){
            printf("%xtopia, ", start);
            if(start % 2 == 0){
                start = start / 2;
            }
            else{
                start = start * 3 + 1;
            }
        }
        printf("%xtopia.", start);


    }
}