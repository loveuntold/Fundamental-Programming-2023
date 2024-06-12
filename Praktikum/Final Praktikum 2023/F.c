// Tukar Tambah

#include <stdio.h>
#include <string.h>
typedef struct hp hp;

struct hp{
    char nama[100];
};

void tuker(hp *a, hp *b);

int main(){
    int n;
    scanf("%d", &n);

    hp s[n];

    for(int i=0; i<n; i++){
        scanf("%s", s[i].nama);
   }

   int n2;
   char nama_a[100];
   char nama_b[100];

   scanf("%d", &n2);
   for(int i=0; i<n2; i++){
        scanf("%s %s", nama_a, nama_b);
        int a = -1, b = -1;
        for(int j=0; j<n; j++){
        if(strcmp(s[j].nama,nama_a)==0){
            a = j;
        }
        else if(strcmp(s[j].nama,nama_b)==0){
            b = j;
        }
        }
        if(a != -1 && b != -1){
            tuker(&s[a], &s[b]);
        }
   }

   for(int i=0; i<n; i++){
        printf("%s\n", s[i].nama);
   }
}

void tuker(hp *a, hp *b){
    hp temp = *a;
    *a = *b;
    *b = temp;
}