#include <stdio.h>

int main(){
	
	printf("---- Program Penghitung Nilai Akhir Mahasiswa ----");
	
	char nim[16];
	char nama[50];
	float nilai_tugas, nilai_uts, nilai_uas;
	
	printf("\n\nMasukkan Nama Mahasiswa: ");
	gets(nama);
	
	printf("Masukkan NIM Mahasiswa: ");
	scanf("%s", nim);
	
	printf("Masukkan Nilai Tugas (0-100): ");
	scanf("%f", &nilai_tugas);
	
	printf("Masukkan Nilai UTS (0-100): ");
	scanf("%f", &nilai_uts);
	
	printf("Masukkan Nilai UAS (0-100): ");
	scanf("%f", &nilai_uas);
	
	float nilai_akhir = (nilai_tugas * 0.20) + (nilai_uts * 0.35) + (nilai_uas * 0.45);
	
	printf("--------------------------------------------------");
	
	printf("\nNama Mahasiswa: %s\n", nama);
	printf("NIM Mahasiswa: %s\n", nim);
	printf("Nilai Tugas: %.2f\n", nilai_tugas);
	printf("Nilai UTS: %.2f\n", nilai_uts);
	printf("Nilai UAS: %.2f\n", nilai_uas);
	printf("Nilai Akhir: %.2f\n", nilai_akhir);
	
	printf("--------------------------------------------------");
	printf("\n------------- Program Selesai --------------\n");
	
	return 0;
	
}