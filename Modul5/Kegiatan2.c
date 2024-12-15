#include <stdio.h>

int main(){
    float data[20][3];
    int input, i;
    float matematika = 0, fisika = 0, kimia = 0, rataKeseluruhan = 0;
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &input);

    for(i = 0; i < input; i++){
        printf("Masukkan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia): ", i+1);
        scanf("%f %f %f", &data[i][0], &data[i][1], &data[i][2]);

        matematika += data[i][0];
        fisika += data[i][1];
        kimia += data[i][2];   
        rataKeseluruhan += data[i][0] + data[i][1] + data[i][2];
    }

    matematika /= input;
    fisika /= input;
    kimia /= input;
	rataKeseluruhan /= (input * 3);
	
    printf("\nData Nilai Ujian: \n");  
    printf("Mahasiswa\tMatematika\tFisika\t\tKimia \n");

    for (i = 0; i < input; i++) {
        printf("Mhs %d\t\t%.2f\t\t%.2f\t\t%.2f\t\n", i+1, data[i][0], data[i][1], data[i][2]);
    }
    
    printf("\nRata-rata nilai: \n");
    printf("Matematika: %.2f\n", matematika);
    printf("Fisika: %.2f\n", fisika);
    printf("Kimia: %.2f\n", kimia);      
    printf("Rata-rata Keseluruhan: %.2f\n", rataKeseluruhan);

    printf("\n=== PROGRAM SELESAI ===\n\n");
    return 0;
}