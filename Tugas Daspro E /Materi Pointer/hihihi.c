#include <stdio.h>

void tukar(int *x, int *y); // declare pointer dulu

int main(){
  int a = 5, b = 3;
  printf ("Sebelum pemanggilan fungsi\n");
  printf ("a=%d, b=%d\n", a, b);
  tukar(&a, &b);
  printf ("Sesudah pemanggilan fungsi\n");
  printf ("a=%d, b=%d\n", a, b);
}

void tukar(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}
