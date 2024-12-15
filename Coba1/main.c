#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Mencetak variabelnya/nilai nilainya
	int usia;
	float ipk;
	char nama[20];


	//Mencetak bagian Inputnya
	printf("Masukkan Nama anda: ");
	gets(nama);
	printf("\nMasukkan usia anda: ");
	scanf("%d", &usia);
	printf("\nMasukkan IPK anda: ");
	scanf("%f", &ipk);

	//Mencetak bagian outputnya
	printf("\n\nNama anda: %s", nama);
	printf("\nUsia anda: %d", usia);
	printf("\nIPK anda: %.2f", ipk);

}
