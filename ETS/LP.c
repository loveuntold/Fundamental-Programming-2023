#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    int hasil = 1;
    float e;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    for(int i = 0; i < b; i++) {
        hasil = (hasil * a) % c;
    }

    e = (float)hasil / d;

    printf("%.2f", e);

    return 0;
}
