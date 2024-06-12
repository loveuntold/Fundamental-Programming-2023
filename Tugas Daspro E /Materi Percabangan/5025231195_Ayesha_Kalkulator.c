#include <stdio.h>

int penjumlahan(int a, int b){
    return a + b;
}

int pengurangan(int a, int b){
    return a - b;
}

int perkalian(int a, int b){
    return a * b;
}

int pembagian(int a, int b){
    return a / b;
}

int modulo(int a, int b){
    return a % b;
}

int main(){
     //munculin operasi hitung
    char simbol;
    // munculin angka
    int satu, dua;
    printf("Masukan Operasi hitung: \n");
    scanf("%d %c %d", &satu, &simbol, &dua);

switch(simbol){
        case '+':
        printf("Hasil %d + %d adalah = %d", satu, dua, penjumlahan(satu, dua));
        break;

        case '-':
        printf("Hasil %d - %d adalah = %d", satu, dua, pengurangan(satu, dua));
        break;

        case '*':
        printf("Hasil %d * %d adalah = %d", satu, dua, perkalian(satu, dua));
        break;

        case '/':
        printf("Hasil %d / %d adalah = %d", satu, dua, pembagian(satu, dua));
        break;

        case '%':
        printf("Hasil %d modulo %d adalah = %d", satu, dua, modulo(satu, dua));
        break;

        // jika tidak sesuai
        default:
        printf("Operator Salah!");
    }
}