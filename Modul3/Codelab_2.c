#include <stdio.h>

// Penggunaan enum
enum KelasTiket {
    ECONOMY = 1,
    BUSINESS,  
    FIRST_CLASS   
};

int main(){

	int pilihan;
	float harga;
	
	printf("---- Kelas Tiket Kereta Api ----\n\n");
	printf("Pilih Kelas Tiket: ");
	printf("\n1. Economy");
	printf("\n2. Business");
	printf("\n3. First Class");
	
	// Perintah inputan user
	printf("\nMasukkan pilihan (1,2 atau 3): ");
	scanf("%d", &pilihan);
	
	// if..else dengan manggil enum
	if(pilihan == ECONOMY){
		harga = 250;
		printf("Harga tiket kelas economy: $%.2f\n", harga);
	}else if(pilihan == BUSINESS){
		harga = 500;
		printf("Harga tiket kelas bisnis: $%.2f\n", harga);
	}else if(pilihan == FIRST_CLASS){
		harga = 800;
		printf("Harga tiket kelas utama: $%.2f\n", harga);
	}else{
		printf("Tiket tidak tersedia!\n");
	}
	
	printf("\n---- Terimakasih!, Selamat Datang kembali ----\n");
	
	return 0;
}