#include <stdio.h>

int main(){
    int a, b, c, d, e;
    double hasil;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    hasil = (double)(a+b+c+d+e)/5;
    printf("%.2lf", hasil);

}