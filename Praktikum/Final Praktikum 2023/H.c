// Bertamasya Bersama Orion

#include <stdio.h>

typedef struct item{
    int id;
    char nama[100];
    int harga;
    int kualitas;
}item;

void price(item *s, int n);
void quality(item *s, int n);

int main(){

    int n;
    scanf("%d", &n);

    item s[n];

    for(int i=0; i<n; i++){
        scanf("%d %s %d %d",&s[i].id,s[i].nama,&s[i].harga,&s[i].kualitas);
    }
    price(s,n);
    quality(s,n);

}

void price(item *s, int n){
    int min = s[0].harga;
    int temp = s[0].id;
    for(int i=0; i<n; i++){
        if(s[i].harga<min){
            min = s[i].harga;
        }
    }

     for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(s[j].id > s[j + 1].id){
            item temp = s[j];
            s[j] = s[j + 1];
            s[j + 1] = temp;
        }
        } 
    }

    for(int i=0; i<n; i++){
        if(s[i].harga==min){
            printf("Best item for price is: %d %s %d %d\n", s[i].id,s[i].nama,s[i].harga,s[i].kualitas);
            break;
        }
    } 
}

void quality(item *s, int n){
    int max=s[0].kualitas;
    int temp = s[0].id;
    for(int i=0; i<n; i++){
        if(s[i].kualitas>max){
            max = s[i].kualitas;
        }
    }
     for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(s[j].id > s[j + 1].id){
            item temp = s[j];
            s[j] = s[j + 1];
            s[j + 1] = temp;
        }
        } 
    }

     for(int i=0; i<n; i++){
        if(s[i].kualitas==max){
            printf("Best item for quality is : %d %s %d %d\n", s[i].id,s[i].nama,s[i].harga,s[i].kualitas);
            break;
        }
    } 

}