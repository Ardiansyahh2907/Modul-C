#include <stdio.h>

//Latihan 2 (Buat Konstanta)
#define PHI 3.14
#define MAXSIZE 255
#define ROOTDIR C
#define MIN_KELVIN 80.0
#define R 8.314472


int main(){
	//Latihan 1 (Deklarasi Tipe Data dan variabel)
	int jumlah = 0;
	char jawaban = 'B';
	double suhu_awal = 25.0;
	float radius = 0.0;
	double harga = 10000.00;
	int nilai_hexa = 0x1A;
	int nilai_oktal = 022;
	
	printf("Jumlah: %d\n", jumlah);
    printf("Jawaban: %c\n", jawaban);
    printf("Suhu Awal: %.2f\n", suhu_awal);
    printf("Radius: %.2f\n", radius);
    printf("Harga: %.2f\n", harga);
    printf("Nilai Hexa: %d\n", nilai_hexa);
    printf("Nilai Oktal: %d\n", nilai_oktal);
	
	//Latihan 2 (Buat Konstanta)
	const float PHI = 3.14;
	const int MAXSIZE = 255;
	const char ROOTDIR = 'C';
	const float MIN_KELVIN = 80.0;
	const double R = 8.314472;

	return 0;
}