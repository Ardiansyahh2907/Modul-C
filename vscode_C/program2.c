#include <stdio.h>
#include <stdbool.h>
#define MAX_ITEMS 5

// Enum untuk daftar barang
enum Barang {
    BERAS = 1,
    GULA,
    MINYAK_GORENG,
    KOPI,
    TEH
};

// Struktur untuk menyimpan informasi barang
struct Item {
    char nama[30];
    int harga;
};

// Fungsi menampilkan daftar barang
int i;
void tampilkanDaftarBarang(struct Item barang[]) {
    printf("\nDaftar Barang:\n");
    printf("------------------------------------\n");
    for (i = 0; i < MAX_ITEMS; i++) {
        printf("%d. %s - Rp%d\n", i + 1, barang[i].nama, barang[i].harga);
    }
}

// Fungsi untuk mendapatkan total harga
int hitungTotal(int harga, int jumlah) {
    return harga * jumlah;
}

// Fungsi untuk menampilkan kembalian
int hitungKembalian(int bayar, int total) {
    if (bayar >= total) {
        printf("Kembalian Anda: Rp%d\n", bayar - total);
    } else {
        printf("Uang Anda kurang sebesar: Rp%d\n", total - bayar);
    }
}

int main() {
    // Deklarasi variabel harus di awal blok kode sesuai C99
    struct Item barang[MAX_ITEMS] = {
        {"Beras", 12000},
        {"Gula", 15000},
        {"Minyak Goreng", 14000},
        {"Kopi", 10000},
        {"Teh", 5000}
    };
    
    int pilihan, jumlah, total = 0, bayar;
    bool beliLagi = true;
    char beliLagiInput;

    printf("====================================\n");
    printf("Selamat Datang di Toko Sederhana\n");
    printf("====================================\n");

    while (beliLagi) {
        // Tampilkan daftar barang
        tampilkanDaftarBarang(barang);

        // Meminta pilihan barang dari user
        printf("\nPilih barang yang ingin dibeli (1-%d): ", MAX_ITEMS);
        scanf("%d", &pilihan);

        // Mengecek pilihan user menggunakan enum dan if-else
        if (pilihan >= BERAS && pilihan <= TEH) {
            // Meminta jumlah barang yang ingin dibeli
            printf("Masukkan jumlah %s yang ingin dibeli: ", barang[pilihan - 1].nama);
            scanf("%d", &jumlah);

            // Menghitung total harga
            total += hitungTotal(barang[pilihan - 1].harga, jumlah);
            printf("\n%d %s ditambahkan ke keranjang. Subtotal saat ini: Rp%d\n", 
                   jumlah, barang[pilihan - 1].nama, total);
        } else {
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
            continue;  // Melompat ke iterasi berikutnya
        }

        // Menanyakan apakah ingin membeli barang lagi
        printf("\nApakah Anda ingin membeli barang lain? (y/n): ");
        scanf(" %c", &beliLagiInput);

        if (beliLagiInput == 'n' || beliLagiInput == 'N') {
            beliLagi = false;
        }
    }

    // Menampilkan total belanja
    printf("\n====================================\n");
    printf("Total belanja: Rp%d\n", total);
    printf("====================================\n");

    // Meminta pembayaran dari user
    printf("Masukkan jumlah uang pembayaran: Rp");
    scanf("%d", &bayar);

    // Menghitung kembalian
    hitungKembalian(bayar, total);

    printf("\nTerima kasih telah berbelanja di Toko Sederhana!\n");
    return 0;
}
