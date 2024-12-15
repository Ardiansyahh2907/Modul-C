#include <stdio.h>

// Deklarasi enum
enum Film {
	SPIDERMAN = 1,
	BATMAN,
	SUPERMAN,
	AVENGERS, 
	JOKER	
};
enum JenisTiket {
	REGULER = 1,
	VIP,
	VVIP
};

int main(){

	int film, tiket, jumlahTiket;
    char member;
	float hargaFilm = 0, hargaTiket = 0, total_harga_tiket, hargaDiskon, totalHarga, totalDiskon, uang_dibayar, kembalian, kekurangan, diskon = 0.10;
	float *ptrTotalHarga;
	
	printf("===== SELAMAT DATANG DI BIOSKOP =====\n");
	
	// Pilihan Film
	printf("Film:\n");
	printf("1. Spiderman\t - Rp.50000\n");
	printf("2. Batman\t - Rp.55000\n");
	printf("3. Superman\t - Rp.60000\n");
	printf("4. Avengers\t - Rp.70000\n");
	printf("5. Joker\t - Rp.45000\n");	
	do
    {
        printf("Pilih film (1-5): ");
		scanf("%d", &film);
        if (film < 1 || film > 5)
        {
            printf("Pilihan film tidak tersedia, silakan coba lagi.\n");
        }
    } while (film < 1 || film > 5);
    
    switch (film) {
        case 1:
            hargaFilm = 50000;
            printf("Anda memilih Spiderman. ");
            break;
        case 2:
            hargaFilm = 55000;
            printf("Anda memilih Batman. ");
            break;
        case 3:
            hargaFilm = 60000;
            printf("Anda memilih Superman. ");
            break;
        case 4:
            hargaFilm = 70000;
            printf("Anda memilih Avengers. ");
            break;
        case 5:
            hargaFilm = 45000;
            printf("Anda memilih Joker. ");
            break;
    }
    printf("Harga film yang anda pilih adalah: Rp.%.0f\n", hargaFilm);
	
	
	// Pilihan jenis tiket
	printf("\nJenis Tiket:\n");
	printf("1. Reguler - Rp.30000\n");
	printf("2. VIP\t   - Rp.100000\n");
	printf("3. VVIP\t   - Rp.150000\n");	
	do
    {
        printf("Pilih jenis tiket (1-3): ");
		scanf("%d", &tiket);
        if (tiket < 1 || tiket > 3)
        {
            printf("Pilihan tiket tidak tersedia, silakan coba lagi.\n");
        }
    } while (tiket < 1 || tiket > 3);
    
    printf("Berapa tiket yang ingin anda beli: ");
	scanf("%d", &jumlahTiket);
    
     switch(tiket) {
        case 1:
            hargaTiket = 30000;
            printf("Anda memilih tiket Reguler. ");
            break;
        case 2:
            hargaTiket = 100000;
            printf("Anda memilih tiket VIP. ");
            break;
        case 3:
            hargaTiket = 150000;
            printf("Anda memilih tiket VVIP. ");
            break;
    }
    printf("Harga tiket yang anda pilih adalah: Rp.%.0f\n", hargaTiket);
    
    if(jumlahTiket <= 0){
		printf("Inputan tidak valid!");
	}else{
		total_harga_tiket = jumlahTiket * hargaTiket;
		printf("Tiket yang anda beli: %d\n", jumlahTiket);
		printf("Total harga tiket Rp. %.2f\n", total_harga_tiket);
	};
    
 	totalHarga = hargaFilm + total_harga_tiket;
	printf("\nTotal harga: Rp. %.2f\n", totalHarga);
	
	printf("\nApakah anda adalah member? (Y/T): ");
	scanf(" %c", &member);
		
	if(member == 'Y' || member == 'y'){
		hargaDiskon = totalHarga * diskon;
		totalDiskon = totalHarga - hargaDiskon;
		printf("Anda mendapatkan diskon 10%%. Total setelah diskon: Rp. %.2f\n", totalDiskon);
	}else if(member == 'T' || member == 't'){
		totalDiskon = totalHarga;
		printf("Anda tidak mendapatkan potongan harga!\n");
	}else{
		printf("Inputan tidak valid!, Masukkan (Y/T)\n");
	}
	
	ptrTotalHarga = &totalHarga;
	printf("Alamat memori variabel total: %p\n", &ptrTotalHarga);
	
	printf("Masukkan uang pembayaran: ");
	scanf("%f", &uang_dibayar);
	
	if(uang_dibayar > totalDiskon){
		kembalian = uang_dibayar - totalDiskon;
		printf("Kembalian anda: Rp. %.2f\n", kembalian);
	}else if(uang_dibayar == totalDiskon){	
    	printf("Uang anda pas. Tidak ada kembalian.\n");
	}else{
		kekurangan = totalDiskon - uang_dibayar;
		printf("Uang anda kurang Rp. %.2f\n", kekurangan);
	}
	
	printf("\n==== Terimakasih!, Selamat Datang Kembali ====\n");
	return 0;
}