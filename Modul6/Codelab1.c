#include <stdio.h>

int faktorial(int n) {
    
    if (n <= 1) {
		return 1;
	}else{
		return n * faktorial(n - 1);
	}
}

int fibonacci(int n) {
    if (n <= 1){
		return n;
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}    
}

int main() {
    int angka, i, hasilFaktorial;

    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
    
    hasilFaktorial = faktorial(angka);
    
	printf("Faktorial dari %d adalah: %d\n", angka, hasilFaktorial);
	
	printf("\nMasukkan angka untuk menghasilkan deret Fibonacci: ");
	scanf("%d", &angka);
	
    printf("Deret Fibonacci hingga suku ke-%d: ", angka);
    for (i = 0; i < angka; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
