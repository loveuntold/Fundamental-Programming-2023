#include <stdio.h>
#include <string.h>

typedef struct idol idol;

struct idol{
    char nama[100];
    double tinggi;
    int umur;
};

void tuker(idol *s, int a, int b, int n);

int main(){
   int n;
   scanf("%d", &n);
   idol s[n];
   for(int i=0; i<n; i++){
    scanf("%s %lf %d", s[i].nama, &s[i].tinggi, &s[i].umur);
   }

   int n2, a, b;
   scanf("%d", &n2);
   for(int i=0; i<n2; i++){
        scanf("%d %d", &a, &b);
        tuker(s,a-1,b-1,n);

   }
   
   for(int i=0; i<n; i++){
        printf("%s\n", s[i].nama);
        printf("%.2lf\n", s[i].tinggi);
        printf("%d\n", s[i].umur);
   }
   
}

void tuker(idol *s, int a, int b, int n){
    idol temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}
