#include <stdio.h>

int main(){
    // input angka (koordinat)
    int a1, b1, a2, b2, a3, b3;
    // munculin 3 kali
    scanf("%d %d", &a1, &b1);
    scanf("%d %d", &a2, &b2);
    scanf("%d %d", &a3, &b3);

    // koordinat awal (0,0)
    int x = 0, y = 0;
    // Sobekan foto yang ditemukan
    int sobekanfoto1 = 0;
    int sobekanfoto2 = 0;
    int sobekanfoto3 = 0;

    // huruf (U, R, D, L) dan distance
    char arah;
    int jarak;

    // munculin gerakan 1
    scanf(" %c %d", &arah, &jarak);
    
    int prevX = x; // prevX = koordinat X Ucup sebelumnya
    int prevY = y; // prevY = koordinat Y ucup sebelumnya

    /* kondisi buat arah
    GERAKAN 1
    */ 
    switch(arah){
        case 'U':
        y = y + jarak; // y ditambah karena U ke atas di koordinat Y
        break;

        case 'D':
        y = y - jarak; // y dikurang karena D ke bawah di koordinat Y
        break;

        case 'R':
        x = x + jarak; // x ditambah karena R ke kanan di koordinat X
        break;

        case 'L':
        x = x - jarak; // x dikurang karena L ke kiri di koordinat X
        break;
    }

    /* Kondisi ini buat tau dia udah di titik itu atau blom.
    Kalau gak di titik itu, sobekan foto = 0
    yang sebelah kanan itu buat kondisi D sama L (negatif)
    */
    if(sobekanfoto1 == 0 && ((prevX <= a1 && x >= a1 && prevY <= b1 && y >= b1) || (prevX >= a1 && x <= a1 && prevY >= b1 && y <= b1))) {
        sobekanfoto1 = sobekanfoto1 + 1;
    }

    if(sobekanfoto2 == 0 && ((prevX <= a2 && x >= a2 && prevY <= b2 && y >= b2) || (prevX >= a2 && x <= a2 && prevY >= b2 && y <= b2))) {
        sobekanfoto2 = sobekanfoto2 + 1;
    }

    if(sobekanfoto3 == 0 && ((prevX <= a3 && x >= a3 && prevY <= b3 && y >= b3) || (prevX >= a3 && x <= a3 && prevY >= b3 && y <= b3))) {
        sobekanfoto3 = sobekanfoto3 + 1;
    }
      // munculin gerakan 2
    scanf(" %c %d", &arah, &jarak);
    
    prevX = x; // prevX = koordinat X Ucup sebelumnya
    prevY = y; // prevY = koordinat Y ucup sebelumnya

    /* kondisi buat arah
    GERAKAN 2
    */ 
    switch(arah){
        case 'U':
        y = y + jarak; // y ditambah karena U ke atas di koordinat Y
        break;

        case 'D':
        y = y - jarak; // y dikurang karena D ke bawah di koordinat Y
        break;

        case 'R':
        x = x + jarak; // x ditambah karena R ke kanan di koordinat X
        break;

        case 'L':
        x = x - jarak; // x dikurang karena L ke kiri di koordinat X
        break;
    }

    /* Kondisi ini buat tau dia udah di titik itu atau blom.
\   Kalau sobekan 1 udah ada, berarti
 dia lanjut ke kondisi sobekan ke 2

    */
    if(sobekanfoto1 == 0 && ((prevX <= a1 && x >= a1 && prevY <= b1 && y >= b1) || (prevX >= a1 && x <= a1 && prevY >= b1 && y <= b1))) {
        sobekanfoto1 = sobekanfoto1 + 1;
    }

    if(sobekanfoto2 == 0 && ((prevX <= a2 && x >= a2 && prevY <= b2 && y >= b2) || (prevX >= a2 && x <= a2 && prevY >= b2 && y <= b2))) {
        sobekanfoto2 = sobekanfoto2 + 1;
    }

    if(sobekanfoto3 == 0 && ((prevX <= a3 && x >= a3 && prevY <= b3 && y >= b3) || (prevX >= a3 && x <= a3 && prevY >= b3 && y <= b3))) {
        sobekanfoto3 = sobekanfoto3 + 1;
    }

      // munculin gerakan 3
    scanf(" %c %d", &arah, &jarak);
    
    prevX = x; // prevX = koordinat X Ucup sebelumnya
    prevY = y; // prevY = koordinat Y ucup sebelumnya

    /* kondisi buat arah
    GERAKAN 3
    */ 
    switch(arah){
        case 'U':
        y = y + jarak; // y ditambah karena U ke atas di koordinat Y
        break;

        case 'D':
        y = y - jarak; // y dikurang karena D ke bawah di koordinat Y
        break;

        case 'R':
        x = x + jarak; // x ditambah karena R ke kanan di koordinat X
        break;

        case 'L':
        x = x - jarak; // x dikurang karena L ke kiri di koordinat X
        break;
    }

    /* Kondisi ini buat tau dia udah di titik itu atau blom.
    */
    if(sobekanfoto1 == 0 && ((prevX <= a1 && x >= a1 && prevY <= b1 && y >= b1) || (prevX >= a1 && x <= a1 && prevY >= b1 && y <= b1))) {
        sobekanfoto1 = sobekanfoto1 + 1;
    }

    if(sobekanfoto2 == 0 && ((prevX <= a2 && x >= a2 && prevY <= b2 && y >= b2) || (prevX >= a2 && x <= a2 && prevY >= b2 && y <= b2))) {
        sobekanfoto2 = sobekanfoto2 + 1;
    }

    if(sobekanfoto3 == 0 && ((prevX <= a3 && x >= a3 && prevY <= b3 && y >= b3) || (prevX >= a3 && x <= a3 && prevY >= b3 && y <= b3))) {
        sobekanfoto3 = sobekanfoto3 + 1;
    }
      // munculin gerakan 4
    scanf(" %c %d", &arah, &jarak);
    
    prevX = x; // prevX = koordinat X Ucup sebelumnya
    prevY = y; // prevY = koordinat Y ucup sebelumnya

    /* kondisi buat arah
    GERAKAN 4
    */ 
    switch(arah){
        case 'U':
        y = y + jarak; // y ditambah karena U ke atas di koordinat Y
        break;

        case 'D':
        y = y - jarak; // y dikurang karena D ke bawah di koordinat Y
        break;

        case 'R':
        x = x + jarak; // x ditambah karena R ke kanan di koordinat X
        break;

        case 'L':
        x = x - jarak; // x dikurang karena L ke kiri di koordinat X
        break;
    }

    /* Kondisi ini buat tau dia udah di titik itu atau blom.
    */
    if(sobekanfoto1 == 0 && ((prevX <= a1 && x >= a1 && prevY <= b1 && y >= b1) || (prevX >= a1 && x <= a1 && prevY >= b1 && y <= b1))) {
        sobekanfoto1 = sobekanfoto1 + 1;
    }

    if(sobekanfoto2 == 0 && ((prevX <= a2 && x >= a2 && prevY <= b2 && y >= b2) || (prevX >= a2 && x <= a2 && prevY >= b2 && y <= b2))) {
        sobekanfoto2 = sobekanfoto2 + 1;
    }

    if(sobekanfoto3 == 0 && ((prevX <= a3 && x >= a3 && prevY <= b3 && y >= b3) || (prevX >= a3 && x <= a3 && prevY >= b3 && y <= b3))) {
        sobekanfoto3 = sobekanfoto3 + 1;
    }
    
    // total dari semua sobekan
    int total = sobekanfoto1 + sobekanfoto2 + sobekanfoto3;

    if(total==0){
        printf("Kamu masih ada di hati");
    }
    else{
        printf("%d", total);
    }

}