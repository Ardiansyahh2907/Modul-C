#include <stdio.h>
//#define BATAS KALORI HARIAN 3000

int main(){
	int kalori1, kalori2, kalori3;
	const int KALORI_HARIAN = 3000;
	
	printf("=========== Program Penghitung Kalori Harian ===========");
	printf("\nProgram ini akan menghitung total kalori harian yang dikonsumsi.");
	printf("\nBatas maksimum kalori harian: %d\n", KALORI_HARIAN);
 	
 	printf("\n\nMasukkan kalori makanan pertama: ");
 	scanf("%d", &kalori1);
 	
 	printf("Masukkan kalori makanan kedua: ");
 	scanf("%d", &kalori2);
 	
 	printf("Masukkan kalori makanan ketiga: ");
 	scanf("%d", &kalori3);

 	int jumlah_kalori = kalori1 + kalori2 + kalori3;
 		
 	printf("\n\nTotal Kalori: %d\n", jumlah_kalori);
 	
 	if(jumlah_kalori >= 3000)
 		printf("Total kalori melebihi batas harian.");
 	else{
		 printf("Total kalori belum melebihi batas harian.\n");
	 }

	printf("\n\n======= Code Execution Successful =======\n\n"); 	
 	return 0;
}