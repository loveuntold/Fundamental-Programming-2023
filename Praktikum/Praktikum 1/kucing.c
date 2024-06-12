#include <stdio.h>

int main(){
    //munculin tanggal bulan tahun
    int tanggal, bulan, tahun;
    scanf("%d %d %d", &tanggal, &bulan, &tahun);

    if(tahun>=2023 && tahun<=9999){

    //kondisi buat munculin kata di bulan
    switch(bulan){
        case 1:
        printf("Tanggal : %d Januari %d \n", tanggal, tahun);
        break;

        case 2:
        printf("Tanggal : %d Februari %d \n", tanggal, tahun);
        break;

        case 3:
        printf("Tanggal : %d Maret %d \n", tanggal, tahun);
        break;

        case 4:
        printf("Tanggal : %d April %d \n", tanggal, tahun);
        break;

        case 5:
        printf("Tanggal : %d Mei %d \n", tanggal, tahun);
        break;

        case 6:
        printf("Tanggal : %d Juni %d \n", tanggal, tahun);
        break;

        case 7:
        printf("Tanggal : %d Juli %d \n", tanggal, tahun);
        break;

        case 8:
        printf("Tanggal : %d Agustus %d \n", tanggal, tahun);
        break;

        case 9:
        printf("Tanggal : %d September %d \n", tanggal, tahun);
        break;

        case 10:
        printf("Tanggal : %d Oktober %d \n", tanggal, tahun);
        break;

        case 11:
        printf("Tanggal : %d November %d \n", tanggal, tahun);
        break;

        case 12:
        printf("Tanggal : %d Desember %d \n", tanggal, tahun);
        break;
    }

    // source rumus hari: https://codepolitan.com/blog/implementasi-algoritma-zellers-congruence-586c6f129400a-18768
    if(bulan<3){
        bulan = bulan + 12; 
        tahun = tahun - 1; 
    }

    int abad = tahun/100;
    tahun = tahun % 100; 

    int hari = (tanggal + ((13*(bulan+1))/5) + tahun + (tahun/4) + (abad/4) - (2*abad)) % 7;

    switch(hari){
        case 0:
        printf("Hari : Sabtu\n");
        break;

        case 1:
        printf("Hari : Minggu\n");
        break;

        case 2:
        printf("Hari : Senin\n");
        break;
        
        case 3:
        printf("Hari : Selasa\n");
        break;

        case 4:
        printf("Hari : Rabu\n");
        break;

        case 5:
        printf("Hari : Kamis\n");
        break;

        case 6:
        printf("Hari : Jumat\n");
        break;
    }
    }
    
}