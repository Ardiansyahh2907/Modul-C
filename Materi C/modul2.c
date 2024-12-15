#include <stdio.h>
#include <stdbool.h>

int main(){
	/*
	char namaDepan[30];
	printf("Ketikkan nama depanmu: ");
	scanf("%s", &namaDepan);
	printf("\nHai %s", namaDepan);
	
	const int number = 15;
	number = 10;
	
	
	//------- OPERATOR ASSIGNMENT (PENUGASAN) -------//
	int x = 5;
	//Operator penugasan dengan penambahan
	x += 3;
	printf("Nilai x setelah penambahan: %d\n", x);
	//Dengan Pengurangan
	x -= 2;
	printf("Nilai x setelah pengurangan: %d\n", x);
	//Dengan Perkalian
	x *= 4;
	printf("Nilai x setelah perkalian: %d\n", x);
	//Dengan Pembagian
	x /= 2;
	printf("Nilai x setelah pembagian: %d\n", x);
	//Dengan Sisa bagi(modulo)
	x %= 3;
	printf("Nilai x setelah sisa bagi: %d\n\n", x); 
	*/
	
	// Pointers
	int num = 10;
	int *ptr;	//Deklarasi pointer bertipe integer
	
	//Mengisi pointer dengan alamat memori variabel num
	ptr = &num;
	
	printf("Nilai dari num: %d\n", num);
	printf("Alamat memori dari num: %p\n", &num);
	printf("Nilai yang diakses melalui pointer ptr: %d\n", *ptr);
	printf("Alamat memori yang disimpan dalam pointer ptr: %p\n", ptr);
	
	//Mengubah nilai variabel num melalui pointer ptr 
	*ptr = 20;
	printf("Nilai baru dari num setelah diubah melalui pointer: %d\n", num);
	
	return 0;
}