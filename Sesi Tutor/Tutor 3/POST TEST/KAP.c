#include <stdio.h>
#include <string.h>
// A = 65 Z = 90
// a = 97 z = 122


int main(){
    char n[100];
    scanf("%s", n);

    int len = strlen(n);

    for(int i=0; i<len; i++){
        if(n[i]>='A' && n[i]<='Z'){
            continue;
        }

        else if(n[i]>='a' && n[i]<='z'){
            n[i] -=32;
        }
    }

    for(int i=0; i<len; i++){
        printf("%c", n[i]);
    }

}