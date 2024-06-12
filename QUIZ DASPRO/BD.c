#include <stdio.h>
#include <string.h>

int angka(int x){
    if(x<10){ 
        return 1;
    }
    else{
        return 1 + angka(x/10);
    }
    
}

int main(){
    int x;
    scanf("%d", &x);

    if(x==0){
        printf("0");
        return 0;
    }

    int jumlah = angka(x);
    printf("%d", jumlah);

}






















/*
int angka(int start, int len){
    if(start>=len){
        return 0;
    }

    return angka(start+1,len);

}

int main(){
    char x[100];
    scanf("%s",x);

    if(strcmp("0",x)==0){
        printf("0");
    }
    
    else{
        int len = strlen(x);
    printf("%d", len);
    }

   //int hasil = angka(0,len);

    if(hasil!=0){
    printf("%d", hasil);
    }
    else{
    printf("0");
    }
}*/