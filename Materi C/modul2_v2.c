#include <stdio.h>
#define PI 3.14159

int main() {
    int pilihan;
    float radius, luasLingkaran, kelilingLingkaran;

	printf("------ Program penghitung luas dan keliling lingkaran ------\n\n");
	
    // Menampilkan menu pilihan
    printf("Opsi pilihan: \n");
    printf("1. Hitung Luas Lingkaran\n");
    printf("2. Hitung Keliling Lingkaran\n");
    printf("\nPilih(1 atau 2): ");
    scanf("%d", &pilihan);

	// Membuat kondisi hitung luas atau hitung keliling
    if (pilihan == 1) {
    	printf("\n<<< Menghitung luas lingkaran >>>");
        printf("\nMasukkan jari-jari lingkaran: ");
        scanf("%f", &radius);
        luasLingkaran = PI * radius * radius; 					// Memasukkan rumus luas lingkaran
        printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", radius, luasLingkaran);
    } 
    else if (pilihan == 2) {
    	printf("\n<<< Menghitung keliling lingkaran >>>");
        printf("\nMasukkan jari-jari lingkaran: ");
        scanf("%f", &radius);
        kelilingLingkaran = 2 * PI * radius; 					// Memasukkan rumus keliling lingkaran
        printf("Keliling lingkaran dengan jari-jari %.2f adalah: %.2f\n", radius, kelilingLingkaran);
    } 
    else {
        printf("Pilihan tidak tersedia, coba lagi!.\n");
    }
    
    printf("\n---------- Program selesai, Terimakasih! ---------\n");

    return 0;
}
