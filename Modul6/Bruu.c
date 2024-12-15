#include <stdio.h>

void tulisDataMahasiswa(){
	FILE *file = fopen("data_mahasiswa.docs", "w");
	if(file == NULL){
        printf("File gagal dibuka.\n");
        return;
    }	
    char nama[50], nim[50], prodi[50];
	printf("Masukkan nama: ");
	scanf(" %[^\n]", &nama);
	printf("Masukkan NIM: ");
	scanf(" %[^\n]", &nim);
	printf("Masukkan Program Studi: ");
	scanf(" %[^\n]", &prodi);
	
	fprintf(file, "%s\n", nama);
    fprintf(file, "%s\n", nim);
    fprintf(file, "%s\n", prodi);

    fclose(file);
    printf("\nData mahasiswa berhasil ditulis ke file.\n");
}

void bacaDataMahasiswa(){
	FILE *file = fopen("data_mahasiswa.docs", "r");
	if(file == NULL){
		printf("File gagal dibuka.\n");
        return;
	}
	char nama[50], nim[50], prodi[50];
	printf("\nData Mahasiswa:\n");
    while (fgets(nama, sizeof(nama), file) != NULL) {
        fgets(nim, sizeof(nim), file);
        fgets(prodi, sizeof(prodi), file);

        printf("Nama: %s", nama);
        printf("NIM: %s", nim);
        printf("Program Studi: %s\n", prodi);
    }
    fclose(file);
}

int main() {
    int pilihan;
    do {
        printf("\nPilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tulisDataMahasiswa();
                break;
            case 2:
                bacaDataMahasiswa();
                break;
            case 3:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }while(pilihan != 3);

    return 0;
}

