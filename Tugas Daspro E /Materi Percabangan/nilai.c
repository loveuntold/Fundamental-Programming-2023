#include <stdio.h>

int main(){
    // masukan nilai
    int nilai;
    printf("Masukan nilai!\n");
    scanf("%d", &nilai);

    //kondisi
    if(nilai>=86 && nilai<=100){
        printf("Nilai Anda A");
    }

    else if(nilai>=76 && nilai<=85){
        printf("Nilai Anda AB");
    }

    else if(nilai>=66 && nilai<=75){
        printf("Nilai Anda B");
    }

     else if(nilai>=61 && nilai<=65){
        printf("Nilai Anda BC");
    }

     else if(nilai>=56 && nilai<=60){
        printf("Nilai Anda C");
    }

    else if(nilai>=0 && nilai<=55){
        printf("Maaf Anda tidak lulus");
    }

    else{
        printf("Nilai tidak valid");
    }

return 0;
}