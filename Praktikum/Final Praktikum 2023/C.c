// Ekubo VS. Everybody

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    // int* arr = (int*)malloc(1000000000 * sizeof(int));
    for(int i=0; i<n; i++){
        int m;
        scanf("%d", &m);

        long long int ekubo; // buat scanf
        long long int genap = 0;
        long long int ganjil = 0;
        long long int max = -2147483648; // perbandingan kalo ada yang negatif
        

        for(int j=0; j<m; j++){
            scanf("%lld", &ekubo);

            if(j%2 == 0 && ekubo > 0){
                genap += ekubo;
            }
            
            else if(j%2 == 1 && ekubo > 0){
                ganjil += ekubo;
            }

            else if(ekubo > max){
                max = ekubo;
            }
        }

            if(genap == 0 && ganjil == 0){
                printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n", max);
            }
            else if(genap >= ganjil){
                printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n", genap);
            }
            else{
                printf("Yosh, waktunya menyelamatkan Mob dengan %lld spirit!\n", ganjil);
            }
    }

}