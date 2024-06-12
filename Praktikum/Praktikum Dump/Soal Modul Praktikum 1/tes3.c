#include <stdio.h>

void printTerbilang(int n) {
    if (n < 10) {
        switch (n) {

        case 0: 
        printf("nol"); 
        break;

        case 1: 
        printf("satu"); 
        break;

        case 2: 
        printf("dua"); 
        break;

        case 3: 
        printf("tiga"); 
        break;

        case 4: 
        printf("empat"); 
        break;

        case 5: 
        printf("lima"); 
        break;

        case 6: 
        printf("enam"); 
        break;

        case 7: 
        printf("tujuh"); 
        break;

        case 8: 
        printf("delapan"); 
        break;

        case 9: 
        printf("sembilan"); 
        break;
        }
    }
    else if (n >= 10 && n < 20) {
        switch (n) {
        case 10: printf("sepuluh"); break;
        case 11: printf("sebelas"); break;
        case 12: printf("dua belas"); break;
        case 13: printf("tiga belas"); break;
        case 14: printf("empat belas"); break;
        case 15: printf("lima belas"); break;
        case 16: printf("enam belas"); break;
        case 17: printf("tujuh belas"); break;
        case 18: printf("delapan belas"); break;
        case 19: printf("sembilan belas"); break;
        }
    }
    else if (n >= 20 && n < 100) {
        int puluhan = n / 10;
        int satuan = n % 10;

        switch (puluhan) {
        case 2: printf("dua puluh"); break;
        case 3: printf("tiga puluh"); break;
        case 4: printf("empat puluh"); break;
        case 5: printf("lima puluh"); break;
        case 6: printf("enam puluh"); break;
        case 7: printf("tujuh puluh"); break;
        case 8: printf("delapan puluh"); break;
        case 9: printf("sembilan puluh"); break;
        }

        if (satuan > 0) {
            printf(" ");
            printTerbilang(satuan);
        }
    }
    else if (n >= 100 && n <= 999) {
        int ratusan = n / 100;
        int sisa = n % 100;

        switch (ratusan) {
        case 1: printf("seratus"); break;
        case 2: printf("dua ratus"); break;
        case 3: printf("tiga ratus"); break;
        case 4: printf("empat ratus"); break;
        case 5: printf("lima ratus"); break;
        case 6: printf("enam ratus"); break;
        case 7: printf("tujuh ratus"); break;
        case 8: printf("delapan ratus"); break;
        case 9: printf("sembilan ratus"); break;
        }

        if (sisa > 0) {
            printf(" ");
            printTerbilang(sisa);
        }
    }
    else {
        printf("Angka gaje");
    }
}

int main() {
    int angka;

    printf("Masukkan angka : ");
    scanf("%d", &angka);

    printf("kalau pakai huruf: ");
    printTerbilang(angka);
    printf("\n");

    return 0;
}