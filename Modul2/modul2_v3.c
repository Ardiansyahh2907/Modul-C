#include <stdio.h>
#define PI 3.14159

int main(){
	
	int pilihan;
	float radius, luas, keliling;
	
	printf("------ Program penghitung luas dan keliling lingkaran ------\n\n");
	do{
		// Menampilkan menu pilihan
    	printf("Opsi pilihan: \n");
    	printf("1. Hitung Luas Lingkaran\n");
    	printf("2. Hitung Keliling Lingkaran\n");
    	printf("3. Keluar\n");
    	printf("Pilih(1, 2, atau 3): ");
    	scanf("%d", &pilihan);

		// Kondisi hitung luas atau hitung keliling
    	if (pilihan == 1) {
    		printf("\n<<< Menghitung luas lingkaran >>>");
        	printf("\nMasukkan jari-jari lingkaran: ");
        	scanf("%f", &radius);
        	luas = PI * radius * radius; 					// Rumus luas lingkaran
        	printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n\n", radius, luas);
    	} else if (pilihan == 2) {
    		printf("\n<<< Menghitung keliling lingkaran >>>");
        	printf("\nMasukkan jari-jari lingkaran: ");
        	scanf("%f", &radius);
        	keliling = 2 * PI * radius; 					// Rumus keliling lingkaran
        	printf("Keliling lingkaran dengan jari-jari %.2f adalah: %.2f\n\n", radius, keliling);
    	} else if (pilihan == 3){
        	printf("\n<<< Program selesai, Terimakasih!  >>>\n");
    	} else {
			printf("\n<<< Pilihan tidak valid!, coba lagi >>>\n\n");
	    }
				
	}while (pilihan != 3); // Terus ulang sampai user memasukkan 3
    	
	printf("\n---------- Program selesai ---------\n"); 
	
	return 0;
}