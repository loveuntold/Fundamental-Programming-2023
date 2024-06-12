#include <stdio.h>
#include <string.h>

int count = 0;

void angka(int start, char *x){
    
    if(x[start]=='\0'){
        return;
    }
    count++;
    angka(start+1,x);
    
}

int main(){
    char x[100];
    scanf("%s", x);

    if(strcmp("0",x)==0){
        printf("0");
        return 0;
    }

    angka(0,x);
    printf("%d", count);

}