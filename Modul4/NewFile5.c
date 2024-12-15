#include <stdio.h>

int main(){
	/*
	int tinggi = 5;
	int baris, kolom;
	
	for(baris = 1; baris <= tinggi; baris++){
		for(kolom = 1; kolom <= baris; kolom++){
			printf("* ");
		}
		printf("\n");
	}
	*/
	
	int i, j;
		for(i = 1; i <= 10; i++){
			printf("%d ", i);
			if(i == 8){
				break;
			}
		}
		printf("\n");
		
		for(j = 1; j <= 15; j++){
			if(j == 9){
				continue;
			}
			printf("%d ", j);
		}
		printf("\n");
	
	
	return 0;
}