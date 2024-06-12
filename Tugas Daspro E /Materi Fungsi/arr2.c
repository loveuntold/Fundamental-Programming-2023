#include <stdio.h>
#define TdkKetemu -1
int cari(const int arr[], int target, int n)
{
	int banyak, i, ketemu = 0, hasil;	i=0;
	while (!ketemu && i < n) {
		if (arr[i] == target) ketemu = 1;
		else ++i;
	}
	if (ketemu) hasil = i;
	else hasil = TdkKetemu;
	return (hasil);
}

int main() {
	int nrpcari, ulangi, hasil;
	ulangi=1;
    int banyak, j;
    int nrp[banyak];
    scanf("%d", &banyak);
    for(j=0;j<banyak;j++){
        printf("Inputkan data ke-%d: ", j);
        scanf("%d", &nrp[j]);
    }
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
