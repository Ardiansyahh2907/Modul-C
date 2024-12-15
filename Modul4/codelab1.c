#include <stdio.h>

int main(){
	int angka; 
	int total = 0;
	int jumlahInput = 0;
	float rataRata;
	
	printf("==== Start Program ====\n\n");
	do{
		printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
		scanf("%d", &angka);
		if(angka > 0){
			total += angka;
        	jumlahInput++;   	
		}			
	}while(angka > 0);
	
	if (jumlahInput > 0) {
        rataRata = (float)total / jumlahInput;
        printf("\nTotal bilangan: %d\n", total);
        printf("Rata-rata bilangan: %.2f\n", rataRata);
    } else {
        printf("Bilangan invalid!.\n");
    }
    printf("==== Program End ====\n");
	
	return 0;
}