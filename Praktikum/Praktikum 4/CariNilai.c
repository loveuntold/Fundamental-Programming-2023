#include <stdio.h>
#include <string.h>

struct data{
    int absen;
    char nama[20];
    char nilai;
};

int main(){
    int n;
    scanf("%d", &n);

    struct data s[100];

    for(int i=0; i<n; i++){
        scanf("%d %s %c", &s[i].absen, s[i].nama, &s[i].nilai);
    }

    char search;
    scanf(" %c", &search);
    int count=0; // ngecek huruf gede
    int check=0; // ngecek dia ketemu nilainya atau engga

    for(int i=0; i<n; i++){
       if(s[i].nilai>='A' && s[i].nilai<='Z' && search>='A' && search<='Z'){
        count++;
       }
       else{
        count=0;
       }
        
    }
    
    if(count>0){
       for(int i=0; i<n; i++){
       if(s[i].nilai==search){
        printf("%d %s\n", s[i].absen, s[i].nama);
        check++;
       }    
    }
    if(check==0){
        printf("Nilai tersebut tidak ditemukan!");
        }
    }
}
