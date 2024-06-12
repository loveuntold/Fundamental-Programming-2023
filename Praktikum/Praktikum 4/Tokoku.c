#include <stdio.h>
#include <string.h>

typedef struct produk produk;

struct produk{
    int IDproduk;
    char merek[11];
    int harga;
    int stok;
};
void jika1(produk *s, int n);
void jika2(produk *s,int id, int jumlah,int n);
void jika3(produk *s,int id, int jumlah,int n);


int main(){
    int n;
    scanf("%d", &n);
    produk s[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %d %d",&s[i].IDproduk,s[i].merek,&s[i].harga,&s[i].stok);
    }

    int n2, pilihan, jumlah;
    scanf("%d", &n2);

        for(int i = 0; i < n2; i++){
            scanf("%d", &pilihan);
            int id;
            
            if(pilihan == 1){
                jika1(s, n);
            }
            
            else if(pilihan == 2){
                scanf("%d %d", &id, &jumlah);
                jika2(s,id,jumlah,n);
            }

            else if(pilihan == 3){
                scanf("%d %d", &id, &jumlah);
                jika3(s,id,jumlah,n);
            }
        }
}

void jika1(produk *s, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(s[j].IDproduk > s[j + 1].IDproduk){
            produk temp = s[j];
            s[j] = s[j + 1];
            s[j + 1] = temp;
        }
        } 

    }
    for(int i = 0; i < n; i++){
        printf("%d - %s - %d - %d\n", s[i].IDproduk, s[i].merek, s[i].harga, s[i].stok);
    }
}

void jika2(produk *s,int id, int jumlah,int n){
    for(int i = 0; i < n; i++){
        if(s[i].IDproduk == id){
            if(s[i].stok >= jumlah){
                int totalharga = jumlah * s[i].harga;
                printf("Produk %s seharga %d berhasil dibeli.\n", s[i].merek, totalharga);
                s[i].stok -= jumlah;
            }
            else{
                printf("Stok produk %s tidak mencukupi untuk jumlah yang diminta.\n", s[i].merek);
            }
        }
    }

}

void jika3(produk *s,int id, int jumlah,int n){
    for(int i = 0; i < n; i++){
        if(s[i].IDproduk == id){
            s[i].stok += jumlah;
            printf("Stok produk %s berhasil ditambahkan menjadi %d.\n", s[i].merek, s[i].stok);
        }
    }

}