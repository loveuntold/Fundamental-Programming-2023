#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct data{
    char nik[16]; 
    char nama[50];
    char tgl_lahir[30];
    char jenis_kelamin[20];
    char alamat[30];
    char pekerjaan[20];
    struct data *next;
}data;

data *head = NULL, *end = NULL;

void input(int *count);
void display();
void delete();
void search();
void bsrec(data *arr, int low, int high, char *cari);
void edit();
void reset();
int compareNIK(const void *a, const void *b);

/* ---------- MAIN ----------*/

int main(){
    int choice;
    int count=0;

    printf("\nSelamat Datang di Aplikasi E-KTP!\n\n");
    do{
        printf("Menu:\n");
        printf("1) Tambahkan data ke file\n");
        printf("2) Tampilkan data dari file\n");
        printf("3) Edit data\n");
        printf("4) Hapus data\n");
        printf("5) Cari data\n");
        printf("6) Keluar\n");
        printf("Pilih opsi (1/2/3/4/5/6): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            input(&count);
            break;

            case 2:
            display();
            break;

            case 3:
            edit();
            break;

            case 4:
            delete();
            break;

            case 5:
            search();
            break;

            case 6:
            reset();
            break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

    }while(choice!=6);

}

/* ---------- FUNCTION ----------*/

int compareNIK(const void *a, const void *b){
    const data *dataA = (const data *)a;
    const data *dataB = (const data *)b;

    return strcmp(dataA->nik, dataB->nik);
}

void input(int *count){
    int lanjut = 1;
    while(lanjut){
        FILE* file = fopen("e_ktp.bin", "ab");
  
        data* new_data = (data*)malloc(sizeof(data));
        printf("Masukan Data Anda!\n\n"); 
        printf("Data ke %d!\n", *count + 1);
        printf("NIK: "); scanf(" %[^\n]s", new_data->nik);
        printf("Nama: "); scanf(" %[^\n]s", new_data->nama);
        printf("Tanggal Lahir: "); scanf(" %[^\n]s", new_data->tgl_lahir);
        printf("Jenis Kelamin: "); scanf(" %[^\n]s", new_data->jenis_kelamin);
        printf("Alamat: "); scanf(" %[^\n]s", new_data->alamat);
        printf("Pekerjaan: "); scanf(" %[^\n]s", new_data->pekerjaan);

        printf("\n");

        new_data->next = NULL;
    
        if(head==NULL){
            head = end = new_data;
        }
        else{
            end->next = new_data;
            end = new_data;
        }

        fwrite(new_data, sizeof(data), 1, file);
        (*count)++;
        fclose(file);
        printf("Apakah Anda ingin lanjut input data? (1: Ya, 0: Tidak): ");
        scanf("%d", &lanjut);
        printf("\n\n");
    }
}

void display(){
    FILE *file = fopen("e_ktp.bin", "rb");
    data read_data;
    int i=0;
    int datafound = 0;
    printf("\nMenampilkan Data...\n\n");
    while(fread(&read_data, sizeof(data), 1, file)){
        datafound = 1;
        printf("Data ke %d!\n", i + 1);
        printf("NIK: %s\n", read_data.nik);
        printf("Nama: %s\n", read_data.nama);
        printf("Tanggal Lahir: %s\n", read_data.tgl_lahir);
        printf("Jenis Kelamin: %s\n", read_data.jenis_kelamin);
        printf("Alamat: %s\n", read_data.alamat);
        printf("Pekerjaan: %s\n\n", read_data.pekerjaan);
        i++;
    }
    if(datafound == 0){
        printf("Data tidak ditemukan!\n\n");
    }
    fclose(file);
    printf("Ketik tombol apa saja untuk kembali ke menu : ");
    int stay;
    scanf("%d", &stay);
    printf("\n\n");
}

void delete(){
    int lanjut = 1;
    while (lanjut){
        FILE *file = fopen("e_ktp.bin", "rb");
        FILE *tempfile = fopen("temp.bin", "wb");
        data read_data;
        char nik[16];
        int datafound = 0;
        printf("Masukan NIK: "); 
        scanf(" %[^\n]s", nik);
        while(fread(&read_data, sizeof(data), 1, file)){
            if(strcmp(read_data.nik, nik) == 0){
                datafound = 1;
                printf("\nMenghapus Data...\n\n");
                printf("Data berhasil dihapus!\n\n");
            }
            else{
                fwrite(&read_data, sizeof(data), 1, tempfile);
            }
        }
        if(datafound == 0){
            printf("Data tidak ditemukan!\n\n");
        }

        fclose(file);
        fclose(tempfile);
        remove("e_ktp.bin");
        rename("temp.bin", "e_ktp.bin");
        printf("Apakah Anda ingin lanjut menghapus data? (1: Ya, 0: Tidak): ");
        scanf("%d", &lanjut);
        printf("\n\n");
    }
}

void bsrec(data *arr, int low, int high, char *cari){
    if(low > high){
        printf("Data tidak ditemukan!\n");
        return;
    }
    int mid = (low + high) / 2;
    int cmp = strcmp(arr[mid].nik, cari);
    if(cmp == 0){
        // Ketemu
        printf("Data ditemukan!\n\n");
        printf("NIK: %s\n", arr[mid].nik);
        printf("Nama: %s\n", arr[mid].nama);
        printf("Tanggal Lahir: %s\n", arr[mid].tgl_lahir);
        printf("Jenis Kelamin: %s\n", arr[mid].jenis_kelamin);
        printf("Alamat: %s\n", arr[mid].alamat);
        printf("Pekerjaan: %s\n\n", arr[mid].pekerjaan);
        return;
    } 
    else if(cmp < 0){
        bsrec(arr, mid + 1, high, cari);
    } 
    else{
        bsrec(arr, low, mid - 1, cari);
    }
}

void binarySearchRecursive(data *arr, int count, char *cariNIK){
    qsort(arr, count, sizeof(data), compareNIK);
    bsrec(arr, 0, count - 1, cariNIK);
}

void search(){
    int lanjut = 1;
    while (lanjut){
        char cariNIK[16];
        printf("Masukkan NIK data yang ingin dicari: ");
        scanf(" %[^\n]s", cariNIK);
        FILE *file = fopen("e_ktp.bin", "rb");
        if (file == NULL) {
            printf("Gagal membuka file!\n");
            return;
        }
        data search_data;
        int count = 0;
        while(fread(&search_data, sizeof(data), 1, file)){
            count++;
        }
        if(count == 0){
            printf("Data tidak ditemukan!\n");
            fclose(file);
            return;
        }
        data *arr = malloc(count * sizeof(data));
        fseek(file, 0, SEEK_SET); 
        int i = 0;
        while(fread(&arr[i], sizeof(data), 1, file)){
            i++;
        }
        binarySearchRecursive(arr, count, cariNIK);
        free(arr);
        fclose(file);
        printf("Apakah Anda ingin lanjut mencari data? (1: Ya, 0: Tidak): ");
        scanf("%d", &lanjut);
        printf("\n\n");
    }
}

void edit(){
    int lanjut = 1;
    while(lanjut){
        char cariNIK[16];
        printf("\nEdit Data\n");
        printf("Masukkan NIK data yang ingin diedit: ");
        scanf(" %[^\n]s", cariNIK);

        FILE *file = fopen("e_ktp.bin", "rb+");
        data edit_data;
        int datafound = 0;

        while(fread(&edit_data, sizeof(data), 1, file)){
            if(strcmp(edit_data.nik, cariNIK) == 0){
                datafound = 1;
                printf("Pilih Atribut yang ingin diubah:\n");
                printf("1. NIK\n");
                printf("2. Nama\n");
                printf("3. Tanggal Lahir\n");
                printf("4. Jenis Kelamin\n");
                printf("5. Alamat\n");
                printf("6. Pekerjaan\n");
                printf("Pilih opsi (1-6): ");
                int choice;
                scanf("%d", &choice);

                switch(choice){
                    case 1:
                    printf("Masukkan NIK baru: ");
                    scanf(" %[^\n]s", edit_data.nik);
                    break;

                    case 2:
                    printf("Masukkan Nama Baru: ");
                    scanf(" %[^\n]s", edit_data.nama);
                    break;

                    case 3:
                    printf("Masukkan Tanggal Lahir Baru: "); 
                    scanf(" %[^\n]s", edit_data.tgl_lahir);
                    break;

                    case 4:
                    printf("Masukkan Jenis Kelamin Baru: "); 
                    scanf(" %[^\n]s", edit_data.jenis_kelamin);
                    break;

                    case 5:
                    printf("Masukkan Alamat Baru: ");
                    scanf(" %[^\n]s", edit_data.alamat);
                    break;

                    case 6:
                    printf("Masukkan Pekerjaan Baru: ");
                    scanf(" %[^\n]s", edit_data.nama);
                    break;

                    default:
                    printf("Opsi tidak valid.\n");
                    break;
            }
            fseek(file, -(long)sizeof(data), SEEK_CUR);
            fwrite(&edit_data, sizeof(data), 1, file);
            break;
        }
    }
    if(!datafound){
            printf("Data tidak ditemukan!\n\n");
        }
        fclose(file);
        printf("Apakah Anda ingin melanjutkan mengedit data? (1: Ya, 0: Tidak): ");
        scanf("%d", &lanjut);
        printf("\n\n");
    }
}

void reset(){
    printf("Apakah Anda ingin menyimpan data? (1: Ya, 0: Tidak): ");
    int choice;
    scanf("%d", &choice);

    if(choice){
        printf("\nData Tersimpan, Exiting...\n");
        printf("Terima kasih telah menggunakan aplikasi E-KTP!\n\n");
        return;
    }
    else{
        printf("\nData Terhapus, Exiting...\n");
        printf("Terima kasih telah menggunakan aplikasi E-KTP!\n\n"); 
        FILE *file = fopen("e_ktp.bin", "wb");
        fclose(file);
    }
}