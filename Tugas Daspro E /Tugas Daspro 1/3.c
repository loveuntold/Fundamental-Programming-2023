#include <stdio.h>
#include <stdlib.h>
#define KMS_PER_MILE 1.609

int main()
{
    double miles,kms;
    printf("Masukkan nilai yang akan di konversi = ");
	scanf("%lf",&miles);
	printf("Jarak dalam Mil adalah : %lf\n",miles);
	kms = KMS_PER_MILE*miles;
	printf("Sama dengan %.2f Kilometer.\n", kms);
	system("pause");
	return (0);
}
