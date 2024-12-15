#include <stdio.h>
#define PHI 3.14159		// Konstanta nilai PHI

int main(){
	
	printf("------ Program penghitung luas dan keliling lingkaran ------\n\n");
	float radius, luasLingkaran, kelilingLingkaran;

	printf("Masukkan nilai jari-jari lingkaran: ");
	scanf("%f", &radius);
	
	luasLingkaran = PHI * radius * radius;				// Rumus luas lingkaran
	printf("\nLuas lingkaran: %.2f\n", luasLingkaran);
	
	kelilingLingkaran = 2 * PHI * radius;				// Rumus keliling lingkaran
	printf("Keliling lingkaran: %.2f\n", kelilingLingkaran);
	
	printf("\n---------- Program Selesai! ----------\n\n");

	return 0;
}
