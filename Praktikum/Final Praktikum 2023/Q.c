// CJ4

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* stringToBinary(char* str){ // source: stackoverflow.com/questions/41384262/how-to-convert-a-string-to-binary-in-c
    if(str==NULL) {
        return 0;
    } 
    int len = strlen(str);
    char *binary = malloc(len*8 + 1); 
    binary[0] = '\0';

    for(int i = 0; i < len; ++i){
        char ch = str[i];
        for(int j = 7; j >= 0; --j){
            if(ch & (1 << j)) {
                strcat(binary,"1");
            } else {
                strcat(binary,"0");
            }
        }
    }
    return binary;
}


char* binaryToString(char* binary) {
    int len = strlen(binary);
    char* str = malloc(len/8 + 1);
    int index = 0;
    str[0] = '\0';

    for(int i = 0; i < len; i+=8) {
        char ch = 0;
        for(int j = 7; j >= 0; --j) {
            if(binary[i+7-j] == '1') {
                ch |= (1 << j);
            }
        }
        str[index++] = ch;
    }
    str[index] = '\0';
    return str;
}

int main(){

    int n;
    scanf("%d\n", &n);

    char strings[2000];
    int count = 0;
    while(scanf("%c", &strings[count++]) != EOF);
    strings[count] = '\0';

    if(n==1){
        char* bin = stringToBinary(strings);
        printf("%s\n", bin);
    }
    else if(n==-1){
        char* string = binaryToString(strings);
        printf("%s\n", string);

    }
}