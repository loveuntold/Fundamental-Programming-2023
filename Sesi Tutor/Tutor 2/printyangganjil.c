#include <stdio.h>
#include <string.h>

int main(){
    char kata[100];
    scanf("%[^\n]s", kata);

    int panjang = strlen(kata);
    for(int i=0; i<panjang; i++){
        if(i%2==0){
            printf("%c", kata[i]);
        }
    }

}