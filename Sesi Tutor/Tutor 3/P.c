#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrom(char s[], int start, int end){
    if(start == end){
        return 1; 
    }

    if (s[start] != s[end]){
        return 0;
    }

    return palindrom(s, start+1, end-1);
}

int main(){
    char str[1001];
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++){
        str[i]=tolower(str[i]);
    }
    int betul = palindrom(str, 0, strlen(str)-1);

    if(betul){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}