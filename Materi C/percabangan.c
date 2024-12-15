#include <stdio.h>
#include <string.h>
#include <stdbool.h>	//mendefinisikan tipe data boolean

int main(){
	/*		
	char huruf;
	printf("\n\nMasukkan sebuah huruf: ");
	scanf("%c", &huruf);
	if((huruf == 'A') || (huruf == 'a'))
		printf("Huruf anda adalah %c \n", huruf);
	
	
	int nilai = 0;
	printf("Masukkan nilai anda: ");
	scanf("%d", &nilai);
	if(nilai >= 60)
		printf("Anda lulus dengan nilai %i \n", nilai);
	else{
		puts("Maaf, anda gagal!");	//Digunakan untuk mencetak string ke lyar dngn newline
	}
	
	
	char jawab;
	printf("\n\nLanjutkan (y/t) ? ");
	scanf("%c", &jawab);
	if((jawab == 'y') || (jawab == 'Y'))
		printf("Langkah kedua, masukkan password. \n");
	else{
		puts("Terimakasih");
	}

	
	char huruf;
	printf("Masukkan sebuah huruf: ");
	scanf("%c", &huruf);
	if((huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o'))
		printf("Anda memasukkan huruf vokal\n");
	else{
		puts("Anda memasukkan huruf konsonan\n");
	}
	
	float suhu;
	printf("\nMasukkan suhu sekarang: ");
	scanf("%f", &suhu);
	if(suhu >= 26 && suhu <= 35){
		printf("Cuaca Panas");
	}else if(suhu >= 36){
		printf("Cuaca Panas Ekstrim");
	}else{
		printf("Cuaca Dingin");
	}
	
	char buah[20];
	printf("\n\nPilih buah (semangka, sawi, pisang): ");
	scanf("%s", buah);
	if(strcmp(buah, "semangka") == 0 || strcmp(buah, "pisang") == 0){
		printf("Pilihan benar!\n");
	}else if(strcmp(buah, "sawi") == 0){
		printf("Pilihan salah!\n");
	}else{
		printf("Buah tidak tersedia!\n");
	}
	
	
	int angka;
	printf("Masukkan sebuah angka integer : ");
	scanf("%d", &angka);
	if(!(angka % 2))
		printf("Anda memasukkan angka genap \n");
	else if((angka % 2)){
		puts("Anda memasukkan angka ganjil");
	}else{
		puts("Anda memasukkan angka nol");
	}
	
	
	// Switch Case
	int hari;
	printf("Masukkan sebuah angka integer: ");
	scanf("%d", &hari);
	switch(hari) {
		case 1 :
			puts("Hari pertama adalah Senin");
			break;
		case 2 :
			puts("Hari kedua adalah Selasa");
			break;
		case 3 :
			puts("Hari ketiga adalah Rabu");
			break;
		case 4 :
			puts("Hari keempat adalah Kamis");
			break;
		case 5 :
			puts("Hari kelima adalah Jum'at");
			break;
		case 6 :
			puts("Hari keenam adalah Sabtu");
			break;
		case 7 :
			puts("Hari ketujuh adalah Minggu");
			break;
		default :
			puts("Angka masukan di luar jangkauan.");
	}
	
	int angka1, angka2, hasil=0;
	char opr;
	printf("\n\nMasukkan dua angka: ");
	scanf("%d %1c %d", &angka1, &opr, &angka2);
	printf("Hasil :");
	switch(opr)
	{
	case '+' :
		hasil = angka1 + angka2;
		printf("%d \n", hasil);
		break;
	case '-' :
		hasil = angka1 - angka2;
		printf("%d \n", hasil);
		break;
	case '*' :
		hasil = angka1 * angka2;
		printf("%d \n", hasil);
		break;
	case '/' :
		hasil = angka1 / angka2;
		printf("%d \n", hasil);
		break;
	default:
		puts("Operator tidak dikenali!");
	}
	
	
	const int MAX_USERS = 90;
	MAX_USERS = 200;
	printf("Cetak number: %d\n", MAX_USERS);
	*/
	
	
	int angka;
	bool isGenap;
	
	//Meminta pengguna memasukkan sebuah angka
	printf("Masukkan sebuah angka: ");
	scanf("%d", &angka);	
	//Menentukan apakah angka tersebut genap atau ganjil
	if(angka % 2 == 0){
		isGenap = true;
	}else{
		isGenap = false;
	}
	//Menampilkan hasil
	if(isGenap){
		printf("Angka %d adalah bilangan genap.\n", angka);
	}else{
		printf("Angka %d adalah bilangan ganjil.\n", angka);
	}
		
	//Penggunaan strcpy
	char sumber[] = "Halo, Dunia!";
	char tujuan[50];	
	//Menyalin string dari 'sumber' ke 'tujuan'
	strcpy(tujuan, sumber);
	//Output
	printf("String sumber: %s\n", sumber);
	printf("String tujuan setelah strcpy: %s\n", tujuan);
	
	
	//Penggunaan strcat
	char pertama[50] = "Halo";
	char kedua[] = ", Dunia!";
	//Menggabungkan string 'kedua' ke 'pertama'
	strcat(pertama, kedua);
	printf("Hasil setelah strcat: %s\n", pertama);
	
	
	//Penggunaan strlen
	char teks[] = "Halo, Dunia!";
	//Menghitung panjang string
	int panjang = strlen(teks);
	printf("Panjang string '%s': %d\n", teks, panjang);
	
	
	//Penggunaan strcmp
	char string1[] = "Halo";
	char string2[] = "halo";
	//Membandingkan dua string
	int hasil = strcmp(string1, string2);
	if(hasil == 0){
		printf("String '%s' dan '%s' adalah sama.\n", string1, string2);
	}else if(hasil < 0){
		printf("String '%s' lebih besar dari '%s'.\n", string1, string2);
	}else{
		printf("String '%s' lebih besar dari '%s'.\n", string1, string2);
	}
	
	
	//Penggunaan strchr
	char teks[] = "Halo, Dunia!";
	char karakter = 'D';
	//Membandingkan dua string
	char *hasil = strchr(teks, karakter);
	if(hasil ? NULL){
		printf("Karakter '%c' ditemukan di posisi: %ld\n", karakter, hasil - teks);
	}else{
		printf("Karakter '%c' tidak ditemukan.\n", karakter);
	}
	
	
	//Penggunaan strstr
	char teks[] = "Halo, Dunia!";
	char substring[] = "Dunia";
	//Mencari substring 'Dunia' dalam string
	char *hasil = strstr(teks, substring);
	if(hasil ? NULL){
		printf("Substring '%s' ditemukan di posisi: %ld\n", substring, hasil - teks);
	}else{
		printf("Substring '%s' tidak ditemukan.\n", substring);
	}
	return 0;
}