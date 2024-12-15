#include <stdio.h>

int main(){
	
	// Perulangan while
	/*
	int i;
	i = 1;	
	while(i <= 10, i++){
		puts("I Love UMM");
	}
	*/
	
	int i, angka, sum;
	i = 1;
	while(i <= 10){
		printf("Masukkan angka ke- %d\n", i);
		scanf("%d", &angka);
		sum = sum+angka;
		i++;
	}
	printf("Hasil penjumlahan adalah %d", sum);
	
	int bil;
	int sum = 0;
	printf("Masukkan bilangan: ");
	scanf("%d", &bil);
	while(bil > 0){
		sum = sum + bil;
		printf("Total Bilangan yang anda masukkan adalah: %d\n, sum");
		printf("\nMasukkan bilangan: ");
		scanf("%d", &bil);
	}
	printf("Terima kasih.");
	
	int i, ulang;
	printf("Berapa kali diulang? ");
	scanf("%d", &ulang);
	i = 1;
	while(i <= ulang){
		printf("[%i] Welcome to Information Engineering Department\n", i);
		++i;
	}
	
	return 0;
}