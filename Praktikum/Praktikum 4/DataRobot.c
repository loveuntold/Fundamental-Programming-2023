#include <stdio.h>
#include <string.h>

typedef struct robot robot;
struct robot{
    int IDrobot;
    char nama[100];
    char status[100];
};

void cekstatus(robot *s, int id,int n);
void cekperbaiki(robot *s, int id,int n);
void cekbuang(robot *s, int id,int n);


int main(){
    int n;
    scanf("%d", &n);
    robot s[100];
    for(int i=0; i<n; i++){
        scanf("%d %s %s\n", &s[i].IDrobot, s[i].nama, s[i].status);
    }

    int n2;
    char perintah[20];

    scanf("%d", &n2);
    for(int i=0; i<n2; i++){
        int id;
        scanf("\n%s %d", perintah, &id);
        if(strcmp(perintah,"CEK")==0){
            cekstatus(s,id,n);
        }
        else if(strcmp(perintah,"PERBAIKI")==0){
            cekperbaiki(s,id,n);
        }
        else if(strcmp(perintah,"BUANG")==0){
            cekbuang(s,id,n);
        }
    }

    int baik=0;
    int rusak=0;
    int tidakberfungsi=0;
    for(int i=0; i<n; i++){
        if(s[i].IDrobot!=-1){
             if(strcmp(s[i].status,"Baik")==0){
                baik++;
            }

            else if(strcmp(s[i].status,"Rusak")==0){
                rusak++;
            }

             else if(strcmp(s[i].status,"Tidak_Berfungsi")==0){
                tidakberfungsi++;
            }
        }
    }

    printf("Baik: %d\n", baik);
    printf("Rusak: %d\n", rusak);
    printf("Tidak_Berfungsi: %d\n", tidakberfungsi);
}

void cekstatus(robot *s, int id,int n){
    int ketemu = 0;
    for(int i=0; i<n; i++){
        if(s[i].IDrobot == id){
            printf("Robot %s berstatus %s\n", s[i].nama, s[i].status);
            ketemu++;
            break;
        }
    }
    if(ketemu==0){
        printf("Robot %d tidak ditemukan\n", id);
    }
}

void cekperbaiki(robot *s, int id,int n){
    int ketemu = 0;
    for(int i=0; i<n; i++){
        if(s[i].IDrobot == id){
            if(strcmp(s[i].status,"Baik")==0){
                printf("Robot %s dalam kondisi baik\n", s[i].nama);
                ketemu++;
                break;
            }

            else if(strcmp(s[i].status,"Rusak")==0){
                printf("Robot %s berhasil diperbaiki\n", s[i].nama);
                strcpy(s[i].status,"Baik");
                ketemu++;
                break;
            }

             else if(strcmp(s[i].status,"Tidak_Berfungsi")==0){
                printf("Robot %s sudah tidak dapat diperbaiki\n", s[i].nama);
                ketemu++;
                break;
            }
        }
        }
    if(ketemu==0){
        printf("Robot %d tidak ditemukan\n", id);
        }
    }


void cekbuang(robot *s, int id,int n){
    int ketemu = 0;
    for(int i=0; i<n; i++){
        if(s[i].IDrobot == id){
            if(strcmp(s[i].status,"Baik")==0){
                printf("Robot %s dalam kondisi baik\n", s[i].nama);
                ketemu++;
                break;
            }

            else if(strcmp(s[i].status,"Rusak")==0){
                printf("Robot %s masih dapat diperbaiki\n", s[i].nama);
                ketemu++;
                break;
            }

             else if(strcmp(s[i].status,"Tidak_Berfungsi")==0){
                printf("Robot %s berhasil dibuang\n", s[i].nama);
                ketemu++;
                s[i].IDrobot = -1;
                break;
            }
        }
    }
    if(ketemu==0){
        printf("Robot %d tidak ditemukan\n", id);
    }
}