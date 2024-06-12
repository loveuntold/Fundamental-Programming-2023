#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    scanf("%s", a);

    
    int b=strlen(a);
    a[b] = '\0';
    for(int i=b; i>=0; i--){
        printf("%c", a[i]);
    }
 
}
