#include <stdio.h>

int main() 
{
	int nilai;
    
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);
    
    if(nilai >= 90 && nilai <= 100){
        printf("Nilai A");
    }else if(nilai >= 80 && nilai <= 89){
		printf("\nNilai B");
	}else if(nilai >= 70 && nilai <= 79){
		printf("\nNilai C");
	}else if(nilai >= 60 && nilai <= 69){
		printf("\nNilai D");	
	}else {
		printf("\nAnda harus mengulang!");
	}
	
}