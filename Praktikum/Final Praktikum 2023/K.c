//Ersya Panik

#include <stdio.h>
#include <string.h>

int main() {

    char kata[100];
    scanf(" %s", kata);

    int n;
    scanf("%d", &n);

    int jumlah = strlen(kata);
    char hasil[100];

    for(int i=0; i<jumlah; i++){
        hasil[i] = (kata[i] - 'a' + n) % 26 + 'a';
    }

    hasil[jumlah] = '\0'; 

    for(int i=0; i<jumlah; i++){
        printf("%c", hasil[i]);
    }
    

}
