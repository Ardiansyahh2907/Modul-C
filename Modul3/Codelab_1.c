#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int umur;
	char kondisi;
	bool validInput = false;
	float hargaNormal = 1000000;
	float hargaTiket = 0;
	
	while (!validInput) {
  		printf("Masukkan umur penumpang: ");
		scanf("%d", &umur);

        if (umur > 0 && umur <= 120) {
            validInput = true;  // Input valid
        } else {
            printf("Input tidak valid!\n");	// Input tidak valid
        }
    }
   
    printf("Apakah penumpang berkebutuhan khusus(y/t): ");
	scanf(" %c", &kondisi);
	
	bool kebutuhanKhusus = (kondisi == 'y' || kondisi == 'Y');

		if (umur >= 0 && umur <= 120) {
			if (umur < 2) {
				hargaTiket = 0;
				printf("Penumpang dibawah 2 tahun mendapatkan tiket gratis.\n");	
			} else if (umur >= 2 && umur <= 12) {
				hargaTiket = hargaNormal * 0.5;
				printf("Harga tiket untuk penumpang anak-anak (2 - 12 tahun) adalah 50%% dari harga normal.\n");
			} else if (umur > 12 && umur <= 60) {
				hargaTiket = hargaNormal;
				printf("Harga tiket untuk penumpang dewasa (13 - 60 tahun) adalah harga normal.\n");
			} else if (umur > 60) {
				hargaTiket = hargaNormal * 0.8;
				printf("Harga tiket untuk penumpang lansia (lebih dari 60 tahun) adalah 75%% dari harga normal.\n");
			} else if (umur > 120) {
				printf("Tidak tersedia!, umur maksimal hanya 120 tahun.\n");
			}																																																										
		} else {
		printf("Input tidak valid. Umur harus berada dalam rentang 0 hingga 120 tahun.\n");
		}
		
		if(kebutuhanKhusus){
			hargaTiket *= 0.9;
			printf("Penumpang berkebutuhan khusus mendapatkan diskon tambahan 10%%.\n");
		}
		
		printf("Total harga tiket adalah: Rp%.2f\n", hargaTiket);
	
	return 0;
}