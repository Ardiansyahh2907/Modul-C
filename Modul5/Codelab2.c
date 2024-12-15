#include <stdio.h>

int main() {
    int i;
    char toko[2][3] = {
	{5, 8, 6}, 
	{3, 7, 9}
	};
    int total[3];
    int hasilTotal = 0;
  
    for (i = 0; i < 3; i++) {
        total[i] = toko[0][i] + toko[1][i];
    }
    
    printf("Total penjualan untuk setiap produk:\n");
    for (i = 0; i < 3; i++) {
        printf("Produk %c: %d\n", 'A' + i, total[i]);
    }

    for (i = 0; i < 3; i++) {
        hasilTotal += total[i];
    }
    printf("\nTotal penjualan keseluruhan: %d\n", hasilTotal);

    return 0;
}
