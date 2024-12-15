#include <stdio.h>

int main(){
	
	char nama[50];
	int umur;
	float gaji_pokok;
	
	printf("Masukkan nama: ");
	gets(nama);
	
	printf("Masukkan umur: ");
	scanf("%d", &umur);		//Menambahkan & di depan variabel umur
	
	printf("Masukkan gaji pokok: ");
	scanf("%f", &gaji_pokok);	//Menambahkan & di depan variabel gaji_pokok
	
	float tunjangan = gaji_pokok * 0.1;
	float total_gaji = gaji_pokok + tunjangan;
	
	printf("\nNama: %s\n", nama);
	printf("Umur: %d tahun\n", umur);
	printf("Gaji Pokok: %.2f\n", gaji_pokok);
	printf("Tunjangan: %.2f\n", tunjangan);
	printf("Total Gaji: %.2f\n", total_gaji);
	return 0;
}