// Link soal: https://drive.google.com/file/d/1qIrW9QjbCEDzk0HmYUYXyOWUjMULPv1T/view?usp=share_link

#include <stdio.h>
#include <string.h>

int main(){
    char pw1[100], pw2[100];

    scanf("%s", pw1);
    scanf("%s", pw2);

    int oldPW = strlen(pw1);
    int newPW = strlen(pw2);
                                
    long long int hasil1 = 0, hasil2 = 0;

        for(int i=0; i<oldPW; i++){
            if(pw1[i]>='0' && pw1[i]<='9'){
                hasil1 = hasil1 * 10 + (pw1[i]-'0');
                /* 143
                1: 1   = (0 + 1)
                4: 14  = (10 + 4)
                3: 143 = (140 + 3)
                */
            }
        }
        for(int i=0; i<newPW; i++){
            if(pw2[i]>='0' && pw2[i]<='9'){
                hasil2 = hasil2 * 10 + (pw2[i]-'0');
            }
        }  

        if(hasil2>hasil1){
            printf("Ganti aja");
        }
        else{
            printf("Waduh");
        }
    

    return 0;
}