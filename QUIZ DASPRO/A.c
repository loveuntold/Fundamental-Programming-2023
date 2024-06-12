#include <stdio.h>
#include <string.h>

int angka(int mod, int sisa, unsigned int x){
    if(x==sisa){ 
        return 0;
    }
    
    int z = (x%mod)-sisa; 
    sisa += z;             
    printf("%d\n", z);
    angka(mod*10, sisa, x);
    
}

int main(){
    unsigned int x;
    scanf("%d", &x);

    angka(10,0,x);

}