#include <stdio.h>
#include <string.h>

int main() {
    int banyak;
    scanf("%d", &banyak);

    int geser, x;
    char kata[100], hasil[100], simbol;

    for(int i = 0; i < banyak; i++) {
        scanf(" %c %d\n", &simbol, &geser);
        scanf(" %[^\n]s", kata);

        int jumlah = strlen(kata);

        switch(simbol){
            case '*':
            x = 0;  // kalo ke belakang
            break;

            case '#':
            x = 1;  // kalo ke depan
            break;
        }

        for(int j = 0; j < jumlah; j++){
            if(kata[j] >= 'A' && kata[j]<= 'Z'){ 
                if(x == 0){
                    hasil[j] = (kata[j] - 'A' - geser + 26) % 26 + 'A';
                } 
                else if(x == 1){
                    hasil[j] = (kata[j] - 'A' + geser) % 26 + 'A';
                }
            } 

            else if(kata[j] >= 'a' && kata[j] <= 'z') {
                if(x == 0){
                    hasil[j] = (kata[j] - 'a' - geser + 26) % 26 + 'a';
                } 
                else if(x == 1){
                    hasil[j] = (kata[j] - 'a' + geser) % 26 + 'a';
                }
            } 
            
            else{
                hasil[j] = kata[j]; // kalo ada suatu karakter di string, tetep nge-print karakternya
            }
        }

        hasil[jumlah] = '\0'; // buat nge-terminate kalimatnya atau nge-reset stringnya jadi kosong
        printf("%s\n", hasil);
    }

    return 0;
}