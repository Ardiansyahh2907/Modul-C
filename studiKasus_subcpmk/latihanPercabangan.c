#include <stdio.h>

// Program 1
int main(){
	int angka1, angka2;
	
	printf("Masukkan bilangan pertama: ");
	scanf("%d", &angka1);
	printf("Masukkan bilangan kedua: ");
	scanf("%d", &angka2);
	
	if(angka1 > angka2){
		printf("\nBilangan terbesar dari %d dan %d adalah: %d", angka1, angka2, angka1);
	}else if(angka2 > angka1){
		printf("\nBilangan terbesar dari %d dan %d adalah: %d", angka1, angka2, angka2);
	}else{
		printf("\nNilai bilangan sama besar");
	}	
	return 0;
}

// Program 2(Saklar)
int main(){
	int saklar;
	
	printf("Masukkan nilai(0/1): ");
	scanf("%d", &saklar);
	
	if(saklar == 1){
		printf("Saklar ON");
	}else{
		printf("Saklar OFF");
	}	
	return 0;
}

// Program 3
int main(){
	float tinggiAir;
	
	printf("Masukkan tinggi air: ");
	scanf("%f", &tinggiAir);
	
	printf("\nTinggi air: %.2f meter\n", tinggiAir);
	
	if(tinggiAir >= 500.1 && tinggiAir <= 600.0){
		printf("Status Waspada!\n");
	}else if(tinggiAir >= 600.1 && tinggiAir <= 650.0){
		printf("Status Siaga 2!\n");	
	}else if(tinggiAir >= 650.1){
		printf("Status Siaga 1!\n");
	}else{
		printf("Status Aman!\n");
	}	
	return 0;
}

// Program 4
int main(){
	
	char huruf;
    printf("Masukkan sebuah huruf: ");
    scanf("%c", &huruf);

    if((huruf == 'A' || huruf == 'a' || huruf == 'E' || huruf == 'e' || 
    huruf == 'I' || huruf == 'i' || huruf == 'O' || huruf == 'o' || huruf == 'U' || huruf == 'u')){
        printf("Termasuk huruf vokal");
    }else {
        printf("Termasuk huruf konsonan");
    }
    return 0;
}

// Program 5
int main() {
    int hari, bulan, tahun;
    char strip;

    printf("Masukkan tanggal (contoh: 1-10-2024): ");
    scanf("%d%c%d%c%d", &hari, &strip, &bulan, &strip, &tahun);

    char *namaBulan;
    switch(bulan) {
        case 1:  
			namaBulan = "Januari"; break;
        case 2:  
			namaBulan = "Februari"; break;
        case 3:  
			namaBulan = "Maret"; break;
        case 4:  
			namaBulan = "April"; break;
        case 5:  
			namaBulan = "Mei"; break;
        case 6:  
			namaBulan = "Juni"; break;
        case 7:  
			namaBulan = "Juli"; break;
        case 8:  
			namaBulan = "Agustus"; break;
        case 9:  
			namaBulan = "September"; break;
        case 10: 
			namaBulan = "Oktober"; break;					
        case 11: 
			namaBulan = "November"; break;
        case 12: 
			namaBulan = "Desember"; break;
        default: printf("Bulan tidak valid.\n"); 
		return 1;
    }

    printf("%d %s %d\n", hari, namaBulan, tahun);
    return 0;
}

// Program 6
int main() {
    int angka;  
    printf("Masukkan angka 4 digit: ");
    scanf("%d", &angka);

    if (angka % 4 == 0 && angka % 5 == 0) {
        printf("Angka valid\n");
    } else {
        printf("Angka tidak valid\n");
    }
    return 0;
}

// Program 7
int main(){
	int jam, menit, detik;
	char titikDua;
	printf("Masukkan waktu (contoh: 07:15:15): ");
	scanf("%d%c%d%c%d", &jam, &titikDua, &menit, &titikDua, &detik);
	
	if(jam < 0 || jam > 23){
		printf("Waktu yang dimasukkan tidak valid!\n");
		return 0;
	}
	if(menit < 0 || menit > 59){
		printf("Waktu yang dimasukkan tidak valid!\n");
		return 0;
	}
	if(detik < 0 || detik > 59){
		printf("Waktu yang dimasukkan tidak valid!\n");
		return 0;
	}
	
	if (jam && titikDua && menit && titikDua && detik) {
        printf("Waktu yang dimasukkan valid: %02d:%02d:%02d\n", jam, menit, detik);
    }
	return 0;
}

// Program 8
int main(){
	float harga1, harga2, harga3, totalHarga, diskon, totalDiskon;

	printf("Masukkan harga pertama: ");
	scanf("%f", &harga1);
	
	printf("Masukkan harga kedua: ");
	scanf("%f", &harga2);
	
	printf("Masukkan harga ketiga: ");
	scanf("%f", &harga3);
	
	totalHarga = harga1 + harga2 + harga3;
	
	if(totalHarga > 100000){
		diskon = totalHarga * 0.10;
		totalDiskon = totalHarga - diskon; 
		printf("Anda mendapatkan potongan 10%%!\n");
		printf("Total harga yang harus dibayar: Rp%.2f\n", totalDiskon);
	}
    printf("Total harga yang harus dibayar: Rp%.2f\n", totalHarga);	
	return 0;
}

// Program 9
int main(){
    char c1, c2, c3, c4;

    printf("Masukkan 4 karakter: ");
    scanf(" %c%c%c%c", &c1, &c2, &c3, &c4);

    // Memeriksa kerakter yg diinput user sama dengan 'a', 'b', 'c', 'd' apa nggak
    if (c1 == 'a' && c2 == 'b' && c3 == 'c' && c4 == 'd') {
        printf("Proses berhasil.\n");
    } else {
        printf("Masukkan kode lagi.\n");
    }	
	return 0;
}

// Program 10
int main() {
    char c1, c2;

    printf("Masukkan 2 karakter: ");
    scanf(" %c%c", &c1, &c2); 

    // Memeriksa apakah input adalah "ab" atau "ba"
    if ((c1 == 'a' && c2 == 'b') || (c1 == 'b' && c2 == 'a')) {
        printf("Silahkan masuk.\n");
    } else {
        printf("Identifikasi gagal.\n");
    }

    return 0;
}

// Program 11
int main() {
    char input1[4], input2[4];  // untuk menyimpan input karakter

    // Input pertama dari user
    printf("Masukkan 3 karakter pertama: ");
    scanf("%3s", input1);

    // Input kedua dari user
    printf("Masukkan 3 karakter kedua: ");
    scanf("%3s", input2);

    // Membandingkan input 
    if (input1[0] == input2[0] && input1[1] == input2[1] && input1[2] == input2[2]) {
        printf("Karakter dikenali.\n");
    } else {
        printf("Karakter tidak dikenali.\n");
    }
    return 0;
}

