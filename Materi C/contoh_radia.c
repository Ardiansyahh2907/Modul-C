#include <stdio.h>

// Fungsi dideklarasiin dulu
// Apa jadinya kalo tidak dideklarasiin? => Error karena pada fungsi main sudah memanggil fungsi getUmur()
// tapi di atas fungsi main tidak ada apa apa

// fyi file kodingan di eksekusi dari atas ke bawah

/*
int getUmur();

int main()
{
    // Disini fungsi getUmur() dipanggil
    int u = getUmur();
    printf("Umur saya %d", u);

    return 0;
}

// Nah disini baru dipake
int getUmur()
{
    int umurKu = 20;
    return umurKu;
}


// Fungsi cari nilai terbesar
int cariMax(int a, int b);
void main(){
	int x = 3, y = 8;
	printf("Nilai terbesar: %d", cariMax(x, y));
}

int cariMax(int a, int b){
	if(a > b)
		return a;
	else{
		return b;
	}
}



// Fungsi array 1 dimensi
void tulisArray(int data[], int len);

void main(){
	int x[5] = {2,1,5,6,4};
	tulisArray(x, 5);
}

void tulisArray(int data[], int len){
	int i;
	for(i = 0; i < len; i++)
		printf("%d", data[i]);
}
*/

// Fungsi printTable untuk array 2 dimensi
void printTable(int array[][5], int xlen, int ylen);
void main(){
	int arr[][5] = {1,2,3,4,5,6,7,8,9,10};
	printTable(arr, 2, 5);
}
void printTable(int array[][5], int xlen, int ylen){
	int i, j;
	for(i = 0; i < xlen; i++){
		for(j = 0; j < ylen; j++)
			printf("%d\t", array[i][j]);
		printf("\n");
	}
}