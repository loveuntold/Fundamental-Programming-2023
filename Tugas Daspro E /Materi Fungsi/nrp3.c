#include <stdio.h>

int main() {
    int banyak;
   
    printf("Masukan jumlah bilangan : ");
    scanf("%d", &banyak);

    int nrp[banyak];
    printf("Masukan bilangan : ");
    for(int i = 0; i < banyak; i++) {
		scanf("%d", &nrp[i]); 
	}
	 
    int counter[100] = {0}; // buat nyimpen value ini brp kali
    for(int i = 0; i < banyak; i++){
        counter[nrp[i]]++; // kalo ketemu array yang angkanya sama, bakal disimpan di array counter
        }

    for(int i = 0; i < banyak; i++){
        if(counter[nrp[i]]){
        printf("angka %d muncul %d-kali\n", nrp[i], counter[nrp[i]]);
        counter[nrp[i]] = 0; // biar gak muncul 2 kali
        }
    }
}
