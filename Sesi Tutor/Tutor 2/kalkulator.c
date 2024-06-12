#include <stdio.h>

int main(){
     //munculin operasi hitung
    char simbol;
    // munculin angka
    int a, b;

    scanf("%d %c %d", &a, &simbol, &b);

switch(simbol){
        case '+':
        printf("%d", a + b);
        break;

        case '-':
        printf("%d", a - b);
        break;

        case '*':
        printf("%d", a * b);
        break;

        case '/':
        printf("%.2lf", (double)a / (double)b);
        break;

        case '%':
        printf("%d", a % b);
        break;

    }
}
