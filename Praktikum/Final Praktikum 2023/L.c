// Latihan Basket

#include <stdio.h>
#include <stdlib.h>

int hasil(int basket[], int x, int y){
    int temp = x;
    int size = 0;
    int remove = -2;
    int count = 0;
    while(y != count){
        remove += 2;
        if(remove > 0 && remove <= temp){
            basket[size] = basket[remove - 1];
            size++;
        }

        if(remove >= temp){
            remove -= temp;
            temp = size;
            size = remove;

            if(remove >= temp){
                remove = temp - 1;
            }
        }

        count++;
    }
    
    int result = basket[remove];
    return result;
}

int main(){
    int n;
    scanf("%d", &n);

    int x,y;
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        
        int* basket = (int*)malloc(x * sizeof(int));
        for(int j = 0; j < x; j++){
            *(basket + j) = j + 1;
        }   

        int result = hasil(basket, x, y);

        printf("%d\n", result);
        free(basket);
    }

    
}