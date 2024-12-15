#include <stdio.h>
#include <stdbool.h>

float luasLingkaran(float radius);			// Fungsi untuk menghitung luas lingkaran
float kelilingLingkaran(float radius);		// Fungsi untuk menghitung keliling lingkaran

void tampilkanMenu();						// Fungsi untuk menampilkan menu pilihan kepada pengguna
float ambilInputRadius();					// Fungsi untuk mengambil input radius dari pengguna.
bool validasiInputRadius(float radius);		// Fungsi untuk memvalidasi bahwa input radius harus lebih dari nol
#define PHI 3.14159							// Sebuah konstanta nilai phi, yg nilainya tdk bisa diubah

int main()
{
    int pilihan;
    float radius, hasilLuas, hasilKeliling;
    bool isValid = false;						//isValid = variabel
    do
    {
        tampilkanMenu();						// menampilkan menu dan opsi pilihan 1, 2, dan 3	
        printf("Pilih opsi (1, 2, atau 3): ");	//jika 1 maka menghitung luas, jika 2 menghitung keliling, jika 3 keluar program
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            do
            {
                radius = ambilInputRadius();			// Input radius
                isValid = validasiInputRadius(radius);	// meriksa validasi radius
                if (!isValid)							// Jika radius tidak valid (isValid = false)
                {
                    printf("Radius tidak boleh negatif atau nol.\n");
                }
            } while (!isValid);							// Terus mengulang selama isValid = false
            hasilLuas = luasLingkaran(radius);
            printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n\n", radius, hasilLuas);
            break;
        case 2:
            do
            {
                radius = ambilInputRadius();
                isValid = validasiInputRadius(radius);
                if (!isValid)
                {
                    printf("Radius tidak boleh negatif atau nol.\n");
                }
            } while (!isValid);
            hasilKeliling = kelilingLingkaran(radius);
            printf("Keliling lingkaran dengan radius %.2f adalah: %.2f\n\n", radius, hasilKeliling);
            break;
        case 3:
            printf("Program Selesai, Terimakasih!.\n");
            break;
        default:
            printf("Pilihan salah!!\n");
        }
    } while (pilihan != 3);
    return 0;
}
float luasLingkaran(float radius)
{
    float L;
    L = PHI * radius * radius;
    return L;
}
float kelilingLingkaran(float radius)
{
	float K;
    K = PHI * (2* radius);
    return K;
}
void tampilkanMenu()
{
    printf("\n====== Program Penghitung Luas Lingkaran ======\n");
    printf("1. Hitung luas lingkaran\n");
    printf("2. Hitung keliling lingkaran\n");
    printf("3. Keluar\n");
    printf("=============================================\n");
}
float ambilInputRadius()
{
    float radius;
    printf("\nMasukkan nilai radius: ");
    scanf("%f", &radius);
    return radius;
}
bool validasiInputRadius(float radius)
{
    return (radius > 0);
}





//------------------------------
/*
float luasLingkaran(float radius);			// Deklarasi fungsi yang memuat parameter(float radius),
											//memberitahu kompiler bahwa fungsi ini ada disuatu tempat dalam program.

int main(){											
	float hasil;						
	hasil = luasLingkaran(7);	   			// Memanggil fungsi dengan radius 7(argumen)	
	printf("Cetak Hasil = %.2f\n", hasil);	
	return 0;							
}
float luasLingkaran(float radius)			// Definisi fungsi yang berguna untuk peng'implementasian 
											//dari deklarasi fungsi di baris ke 3.
   	   	   	 
{	
	float L, phi, r;						// 	
	phi = 3.14;								// Memasukkan nilai phi
	r = 10;									// Memasukkan nilai radius
	L = phi * r * r;						// Rumus luas lingkaran
	return L;								// Mengembalikan nilai luas lingkaran
}

*/