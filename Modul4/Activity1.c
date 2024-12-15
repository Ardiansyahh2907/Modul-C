#include <stdio.h>

int main(){
	int i, input, jumlahTransaksi, pilihan;
	float total; 
 
	do{
		total = 0;
		printf("\n=== Pencatatan Transaksi ===\n\n");
		printf("Masukkan transaksi selanjutnya(gunakan 0 untuk menyelesaikan)\n");
		printf("Berapa jumlah transaksi yang ingin Anda catat: ");
        scanf("%d", &jumlahTransaksi);
        
		for(i = 1; i <= jumlahTransaksi; i++){
			printf("Transaksi ke-%d: ", i);
        	scanf("%d", &input);
        	
        	if(input == 0){
                break;
            }
        	total += input;
		}
		printf("\nTotal transaksi: %.0f\n", total);
		
		do{
			printf("Apakah Anda ingin mencatat transaksi lagi? (1 = Ya, 0 = Tidak): ");
            scanf("%d", &pilihan);

            if (pilihan != 1 && pilihan != 0) {
                printf("\nInput tidak valid! (Masukkan 1 atau 0)\n\n");
            }
        } while(pilihan != 1 && pilihan != 0);
        
	}while(pilihan == 1);	
	printf("\nTerima kasih!\n");	
	
	printf("\n=== Code Execution Successful ===\n");
	return 0;
}