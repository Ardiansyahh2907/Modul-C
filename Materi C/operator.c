#include <stdio.h>

int main(){
	
	//------- OPERATOR ARITMATIKA -------//
	int num1 = 20;
	int num2 = 30;
	int num3 = 5;	
	//Penjumlahan
	int hasilPenjumlahan = num1 + num2;
	printf("Hasil Penjumlahan: %d\n", hasilPenjumlahan);
	//Pengurangan
	int hasilPengurangan = num2 - num1;
	printf("Hasil Pengurangan: %d\n", hasilPengurangan);
	//Perkalian
	int hasilPerkalian = num2 * num3;
	printf("Hasil Perkalian: %d\n", hasilPerkalian);
	//Pembagian
	int hasilPembagian = num1 / num3;
	printf("Hasil Pembagian: %d\n", hasilPembagian);
	//Sisa Bagi (modulo)
	int hasilModulo = num2 % num3;
	printf("Hasil sisa bagi(modulo): %d\n\n", hasilModulo);
	
	
	//------- OPERATOR ASSIGNMENT (PENUGASAN) -------//
	int x = 10;
	//Operator penugasan dengan penambahan
	x += 3;
	printf("Nilai x setelah penambahan: %d\n", x);
	//Dengan Pengurangan
	x -= 2;
	printf("Nilai x setelah pengurangan: %d\n", x);
	//Dengan Perkalian
	x *= 7;
	printf("Nilai x setelah perkalian: %d\n", x);
	//Dengan Pembagian
	x /= 2;
	printf("Nilai x setelah pembagian: %d\n", x);
	//Dengan Sisa bagi(modulo)
	x %= 3;
	printf("Nilai x setelah sisa bagi: %d\n\n", x); 
	
	
	//------- OPERATOR COMPARISON -------//
	int a = 10, b = 5;
	//Dengan equal to
	if(a == b){
		printf("%d sama dengan %d\n", a, b);
	}else{
		printf("%d tidak sama dengan %d\n", a, b);
	}
	//Dengan not equal
	if(a != b){
		printf("%d tidak sama dengan %d\n", a, b);
	}else{
		printf("%d sama dengan %d\n", a, b);
	}	
	//Dengan greater than
	if(a > b){
		printf("%d lebih besar dari %d\n", a, b);
	}else{
		printf("%d tidak lebih besar dari %d\n", a, b);
	}	
	//Dengan less than
	if(a < b){
		printf("%d lebih kecil dari %d\n", a, b);
	}else{
		printf("%d tidak lebih kecil dari %d\n", a, b);
	}	
	//Dengan greater than or equal to
	if(a >= b){
		printf("%d lebih besar sama dengan %d\n", a, b);
	}else{
		printf("%d tidak lebih besar atau sama dengan %d\n", a, b);
	}	
	//Dengan less than or equal to
	if(a <= b){
		printf("%d lebih kecil atau sama dengan %d\n", a, b);
	}else{
		printf("%d tidak lebih kecil atau sama dengan %d\n", a, b);
	}
	
	
	//------- OPERATOR LOGIKA -------//
	int x = 5;
	int y = 3;
	//Operator logika AND (&&)
	if(x > 0 && y > 0){
		printf("Kedua nilai x dan y lebih besar dari 0\n");
	}else{
		printf("Salah satu atau kedua nilai x dan y tidak lebih besar dari 0\n");
	}
	//Operator OR (||)
	if(x > 10 || y > 10){
		printf("Salah satu dari nilai x atau y lebih besar dari 10\n");
	}else{
		printf("Kedua nilai x dan y tidak lebih besar dari 10\n");
	}
	//Operator NOT (!)
	if(!(x > y)){
		printf("Nilai x tidak lebih besar dari y\n");
	}else{
		printf("x lebih besar dari y/n");
	}
		
	
	
	return 0;
}