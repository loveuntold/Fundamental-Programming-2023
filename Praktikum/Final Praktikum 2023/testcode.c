#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int banding(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int kemungkinan(int X, int Y, int V) {
    if (V == 0) return 1;
    if (V < 0) return 0;
    
    return kemungkinan(X, Y, V - X) || kemungkinan(X, Y, V - Y);
}

int main() {
    int X, Y, N;
    scanf("%d %d", &X, &Y);
    scanf("%d", &N);
    
    int *angka = (int*)malloc(N * sizeof(int));
    
    int i;    
    for (i = 0; i < N; ++i) {
        scanf("%d", &angka[i]);
    }
    
    int *kemungkinanAngka = (int*)malloc(N * sizeof(int));
    int kemungkinanHitung = 0;
    
    int j;
    for (j = 0; j < N; ++j) {
        if (kemungkinan(X, Y, angka[j])) {
            kemungkinanAngka[kemungkinanHitung++] = angka[j];
        }
    }

    qsort(kemungkinanAngka, kemungkinanHitung, sizeof(int), banding);

    int k;
    for (k = 0; k < 3 && k < kemungkinanHitung; ++k) {
        printf("%d ", kemungkinanAngka[k]);
    }
    printf("\n");

    free(angka);
    free(kemungkinanAngka);

    return 0;
}