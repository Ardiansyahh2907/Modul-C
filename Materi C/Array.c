#include <stdio.h>

int main(){
	
	/*
	// Program Pertama
	//Membuat array integer
	int array_int[]={1,2,3,4,5,6};
	//Membuat array character
	char array_char[]={'a','b','c','d','e'};
	//Membuat array double
	double array_double[4];
	array_double[0]=3.14;
	
	//Mendeklarasikan nilai i
	int i;
	
	//Output
	printf("Array integer: ");
	for(i = 0; i < 6; i++){
		printf("%d ", array_int[i]);
	}
	printf("\n");
	
	printf("Array character: ");
	for(i = 0; i < 5; i++){
		printf("%d ", array_char[i]);
	}
	printf("\n");
	
	printf("Array double: ");
	for(i = 0; i < 1; i++){
		printf("%d ", array_double[i]);
	}
	printf("\n");
	
	
	
	// Program Kedua
	int main[10];
	nilai[0] = 60;
	nilai[1] = 65;
	nilai[2] = 70;
	nilai[3] = 75;
	nilai[4] = 80;
	nilai[5] = 85;
	nilai[6] = 90;
	nilai[7] = 95;
	nilai[8] = 100;
	nilai[9] = nilai[8]+5;
	
	printf("Nilai ke-1 adalah %d \n", nilai[0]);
	printf("Nilai ke-10 adalah %d \n", nilai[9]);
	*/
	
	// Program Ketiga
	int nilai[10] = {10,20,30,40,50,60,70,80,90,100};
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Elemen ke %d adalah %d \n", i, nilai[i]);
	}
	return 0;
}