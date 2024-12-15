#include <stdio.h>

//Program 1
/*
int main(){
	int i = 1;
	do{
		printf("Teknik Informatika YES\n");
		++i;	
	}while(i <= 100);
		
	return 0;
}

//Program 2
int main(){
	int i = 0;	
	
	while(i <= 100){
		printf("%d\n", i);
		i += 5;
	}
	
	return 0;
}


//Program 3
int main(){
	
	int i, input, nilai, total=0;
	
	printf("Inputkan sebuah nilai: ");
	scanf("%d", &input);
	
	for(i = 0; i < input; i++){
		printf("Nilai ke-%d: ", i+1);
		scanf("%d", &nilai);
		total += nilai;
	}
	
	printf("Total penjumlahan akhir: %d\n", total);
	printf("\nProgram Berakhir\n");
	return 0;
}

//Program 4
int main(){
	
	int i, input, nilai, total=0;
	
	printf("Inputkan sebuah nilai: ");
	scanf("%d", &input);
	
	for(i = 0; i < input; i++){
		printf("Nilai ke-%d: ", i+1);
		scanf("%d", &nilai);
		total += nilai;
		
        if (nilai > 0) {
            total += nilai;
        } else {
			printf("Nilai yang dimasukkan bernilai negatif!");
            break;
        }
	}	
	printf("Total penjumlahan akhir: %d\n", total);
	printf("\nProgram Berakhir\n");
	return 0;
}
*/

//Program 5
int main(){
	
	int i, input, nilai, total=0;
	float rataRata;
	
	printf("Inputkan sebuah nilai: ");
	scanf("%d", &input);
	
	for(i = 0; i < input; i++){
		printf("Nilai ke-%d: ", i+1);
		scanf("%d", &nilai);
		total += nilai;
		
        if (nilai > 0) {
            total += nilai;
        } else {
			printf("Nilai yang dimasukkan bernilai negatif!");
            break;
        }
	}
	rataRata = total / input;
	
	printf("Total penjumlahan akhir: %d\n", total);
	printf("Rata-rata nilai yang dimasukkan adalah: %.2f\n", rataRata);
	printf("\nProgram Berakhir\n");
	
	return 0;
}
