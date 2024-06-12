#include <stdio.h>
#include <string.h>

int main(){
    char str[1000],find[100],c; //string berupa kalimat sedangkan find itu hanya sebuah kata
    int sum=0; //buat nyimpan data
    while((c=getchar())!='\n')str[sum++]=c; //scanf
    str[sum]='\0';
  
    scanf("%s",find);
    char *pch=strtok(str, " ,.-");
    sum=0;

    while(pch!=NULL){
        if(strcmp(pch,find)==0){ //compare
            sum++;
        }
        pch=strtok(NULL, " ,.-");
    }
    printf("%d",sum);
}