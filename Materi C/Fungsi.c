#include <stdio.h>

//Program 1
/*
void tes(int x);
void main(){
	int a = 4, b = 6, c = 7;
	tes(a + b - c);
}
void tes(int x){
	printf("%d", x);
}
*/
//Menampilkan hasil angka 3


//Program 2
/*
void tes(int x);
void main(){
	int a = 2;
	tes(a);
	printf("%d", a);
}
void tes(int x){
	x = 7;
}
*/
//Menampilkan hasil 2


//Program 3
/*
void tes(int *x);
void main(){
	int a = 2;
	tes(&a);
	printf("%d", a);
}
void tes(int *x){
	*x = 7;
}
*/
//Menampilkan hasil 7


//Program 4(Pointer)
/*
void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
*/

//Program 5(Rekursif)
int factorial(int n){
	if(n <= 1)
		return 1;
	else{
		return n * factorial(n - 1);
	}
}

#include <stdio.h>

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {  // Basis rekursi: faktorial 0 atau 1 adalah 1
        return 1;
    } else {
        return n * faktorial(n - 1);  // Memanggil dirinya sendiri
    }
}

int main() {
    int angka;
    
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &angka);
    
    if (angka < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
    } else {
        printf("Faktorial dari %d adalah %d\n", angka, faktorial(angka));
    }
    
    return 0;
}
