#include <stdio.h>
#include <string.h>

int main (){

    int input;
    scanf ("%d", &input);

    char kata[input][10001];
    int check = 1;
    int panjangnya;

    for (int i = 0 ; i < input ; i++){
        scanf ("%s", &kata[i]);
    

    panjangnya = strlen(kata[1]);

    if (strcmp(kata[0],"ANAGRAM") == 0){
        char simpan1[26] = {0};
        char simpan2[26] = {0};

            int len1 = strlen(kata[1]);
            int len2 = strlen(kata[2]);

            for(int i=0; i<len1; i++){
                simpan1[kata[1][i]-'a']++;
            }

            for(int i=0; i<len2; i++){
                simpan2[kata[2][i]-'a']++;
            }

            if(strcmp(simpan1,simpan2)==0){
                printf("Hhm %s can be arranged into %s\n", kata[1], kata[2]);
            } else {
                printf("This cannot lah bro\n");
           }
    }

        

    if (strcmp(kata[0],"FLIP") == 0){

        for(int a = 0 ; a < panjangnya ; a++) {
            if(kata[1][a] != kata[2][panjangnya-1-a]){
                check = 0;
                break;
            }
        }
        if(check == 1){
            printf("Flip %s to get %s\n", kata[1], kata[2]);
        }
        else{
            printf("This cannot lah bro\n");
        }

    }
    }
    return 0;

}