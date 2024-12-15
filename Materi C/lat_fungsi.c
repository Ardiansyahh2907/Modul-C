#include <stdio.h>
#include <stdlib.h>  // Untuk fungsi fabs

//Kode ke-1
// Fungsi untuk menuliskan elemen array secara terbalik
void tulisMundur(int arr[], int ukuran) {
    int i;  // Deklarasi variabel di awal blok (sesuai aturan C99)
    for (i = ukuran - 1; i >= 0; i--) {  // Iterasi dari elemen terakhir ke pertama
        printf("%d ", arr[i]);
    }
    printf("\n");  // Pindah baris setelah menampilkan semua elemen
}

int main() {
    int array[] = {1, 2, 3, 4, 5};  // Contoh array
    int ukuran = sizeof(array) / sizeof(array[0]);  // Menghitung ukuran array

    printf("Array dalam urutan terbalik: ");
    tulisMundur(array, ukuran);  // Memanggil fungsi tulisMundur
    
    return 0;
}

//Kode ke-2
// Fungsi untuk mencari nilai terbesar dari 3 bilangan bulat
int findMax(int a, int b, int c) {
    int max;  // Deklarasi variabel di awal (sesuai aturan C99)

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    return max;
}

int main() {
    int x, y, z;  // Deklarasi variabel untuk input 3 bilangan bulat
    
    // Input dari pengguna
    printf("Masukkan tiga bilangan bulat: ");
    scanf("%d %d %d", &x, &y, &z);
    
    // Memanggil fungsi findMax untuk mencari nilai terbesar
    int terbesar = findMax(x, y, z);
    
    // Output nilai terbesar
    printf("Nilai terbesar adalah: %d\n", terbesar);
    
    return 0;
}

//Kode ke-3
// Fungsi untuk menuliskan waktu dalam format j:m:d
void tulisJam(int j, int m, int d) {
    printf("%d:%d:%d\n", j, m, d);  // Menampilkan jam, menit, detik dengan format j:m:d
}

int main() {
    int jam, menit, detik;  // Deklarasi variabel untuk input jam, menit, dan detik

    // Input dari pengguna
    printf("Masukkan jam, menit, dan detik: ");
    scanf("%d %d %d", &jam, &menit, &detik);

    // Memanggil fungsi tulisJam untuk menampilkan waktu
    tulisJam(jam, menit, detik);

    return 0;
}

//Kode ke-4
// Fungsi untuk memeriksa apakah bilangan genap
int isEven(int num) {
    if (num % 2 == 0) {
        return 1;  // Mengembalikan 1 jika genap
    } else {
        return 0;  // Mengembalikan 0 jika tidak genap
    }
}

int main() {
    int angka;  // Deklarasi variabel untuk input bilangan bulat
    
    // Input dari pengguna
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &angka);

    // Memanggil fungsi isEven untuk memeriksa genap/tidaknya bilangan
    if (isEven(angka)) {
        printf("%d adalah bilangan genap.\n", angka);
    } else {
        printf("%d adalah bilangan ganjil.\n", angka);
    }

    return 0;
}

//Kode ke-5
// Fungsi untuk memeriksa apakah bilangan positif
int isPositive(int num) {
    if (num > 0) {
        return 1;  // Mengembalikan 1 jika bilangan positif
    } else {
        return 0;  // Mengembalikan 0 jika bilangan tidak positif
    }
}

int main() {
    int angka;  // Deklarasi variabel untuk input bilangan bulat
    
    // Input dari pengguna
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &angka);

    // Memanggil fungsi isPositive untuk memeriksa apakah bilangan positif
    if (isPositive(angka)) {
        printf("%d adalah bilangan positif.\n", angka);
    } else {
        printf("%d bukan bilangan positif.\n", angka);
    }

    return 0;
}

//Kode ke-6
// Fungsi untuk mencari posisi pertama karakter dalam string
int findPos(char str[], char ch) {
    int i;  // Deklarasi variabel indeks

    // Iterasi melalui setiap karakter dalam string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;  // Mengembalikan indeks jika karakter ditemukan
        }
    }
    
    return -1;  // Mengembalikan -1 jika karakter tidak ditemukan
}

int main() {
    char str[100];  // Array untuk menyimpan string
    char ch;       // Karakter yang dicari
    int index;     // Variabel untuk menyimpan indeks hasil pencarian

    // Input dari pengguna
    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);  // Menggunakan fgets untuk membaca string dengan spasi
    
    printf("Masukkan karakter yang dicari: ");
    scanf(" %c", &ch);  // Menambahkan spasi sebelum %c untuk menghindari masalah dengan input sebelumnya

    // Memanggil fungsi findPos untuk mencari karakter
    index = findPos(str, ch);

    // Menampilkan hasil
    if (index != -1) {
        printf("Karakter '%c' ditemukan pada indeks: %d\n", ch, index);
    } else {
        printf("Karakter '%c' tidak ditemukan dalam string.\n", ch);
    }

    return 0;
}

//Kode ke-7
// Fungsi untuk menghitung nilai absolut dari sebuah float
int absolut(float num) {
    return (int)fabs(num);  // Menggunakan fabs untuk mendapatkan nilai absolut
}

int main() {
    float angka;  // Deklarasi variabel untuk input nilai pecahan

    // Input dari pengguna
    printf("Masukkan sebuah nilai pecahan: ");
    scanf("%f", &angka);

    // Memanggil fungsi absolut untuk menghitung nilai absolut
    int hasil = absolut(angka);

    // Menampilkan hasil
    printf("Nilai absolut dari %.2f adalah: %d\n", angka, hasil);

    return 0;
}

//Kode ke-8
// Fungsi untuk memeriksa apakah bilangan positif adalah bilangan prima
int isPrima(int num) {
    if (num <= 1) {
        return 0;  // Bilangan 0 dan 1 bukan prima
    }

    // Memeriksa faktor dari 2 hingga akar dari num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Mengembalikan 0 jika num memiliki faktor lain
        }
    }

    return 1;  // Mengembalikan 1 jika num adalah bilangan prima
}

int main() {
    int angka;  // Deklarasi variabel untuk input bilangan bulat

    // Input dari pengguna
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &angka);

    // Memanggil fungsi isPrima untuk memeriksa apakah bilangan prima
    if (isPrima(angka)) {
        printf("%d adalah bilangan prima.\n", angka);
    } else {
        printf("%d bukan bilangan prima.\n", angka);
    }

    return 0;
}

