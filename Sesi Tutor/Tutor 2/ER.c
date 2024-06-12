#include <stdio.h>
#include <string.h>
#include <ctype.h>

void recursive(char s[], int i, int len){
    if (i >= len){
        return;
    }

    if (i > 0){
        s[i] = s[i] + s[i - 1] - 'A' + 1;
        if (s[i] > 'Z'){
            s[i] = 'A' + s[i] - 'Z' - 1;
        }
    }

    recursive(s, i + 1, len);
}


int main(){
    char arr[100];
    scanf("%[^\n]s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++){
        if (isalpha(arr[i])){
            arr[i] = toupper(arr[i]);
        }
    }
    recursive(arr, 0, strlen(arr));
    printf("%s\n", arr);
}