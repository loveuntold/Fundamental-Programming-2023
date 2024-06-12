#include <stdio.h>
#define TdkKetemu -1
int cari(int arr[], int target, int n){
	int i, ketemu = 0, hasil;	i=0;
	while (!ketemu && i < n) {
		if (arr[i] == target) ketemu = 1;
		else ++i;
	}
	if (ketemu) hasil = i;
	else hasil = TdkKetemu;
	return (hasil);
}

int main() {
	int banyak, nrpcari, ulangi, hasil, i;
   
    printf("Masukan jumlah bilangan : ");
    scanf("%d", &banyak);

    int nrp[banyak];
    printf("Masukan bilangan : ");
    for(i = 0; i < banyak; i++) {
		scanf("%d", &nrp[i]); 
	}
	 ulangi=1;

	while (ulangi==1) {
		ulangi=0;
		printf("\nMasukkan NRP yang mau dicari : ");
		scanf("%d", &nrpcari);
		hasil=cari(nrp, nrpcari, banyak);
		if (hasil==-1)
		printf("Tidak ketemu !");
		else
		printf("Ditemukan pada elemen array ke-%d", hasil);
		printf("\n\nUlangi pencarian ? (Ketik 1 bila ya !) ");
		scanf("%d", &ulangi);
	}
}
