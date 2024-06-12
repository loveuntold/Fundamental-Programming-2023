#include <stdio.h>
#include <string.h>

int main(){
    int banyak;
    scanf("%d", &banyak);

    char kata[100];
    for(int i=0; i<banyak; i++){
        scanf("%s", kata);

        int panjang = strlen(kata);
        if(panjang<=10){
            printf("%s\n", kata);
        }
        else{
            printf("%c%d%c\n", kata[0], panjang-2, kata[panjang-1]);
        }
    }

    
}