#include <stdio.h>
#include <string.h>

int main(){
    int banyak;
    scanf("%d", &banyak);
    char kata[1000][banyak];
    char * pch;
    for(int i=0; i<banyak; i++){
        scanf(" %[^/n]s", kata[i]);
              
    }
     for(int i=0; i<banyak; i++){
        printf("%s\n", kata[i]); 
    }


}