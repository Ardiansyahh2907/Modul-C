#include <stdio.h>
#include <string.h>

int main(){
    char buah[10][20];
    int i, j, input;
	char nilaiSementara[20];

    do{
		printf("Masukkan jumlah buah (maksimal 10): ");
    	scanf("%d", &input);

		if (input > 10) {
        	printf("Batas jumlah buah hanya 10!.\n\n");
    	}
	}while(input > 10);
    
    for(i = 0; i < input; i++){
        printf("Masukkan nama buah ke-%d: ", i + 1);
        scanf("%s", buah[i]);
    }  

    printf("\nNama buah dalam urutan yang diinputkan: \n");
    for(i = 0; i < input; i++){
        printf("# %s\n", buah[i]);
    }

    for(i = 0; i < input; i++){
        for(j = i + 1; j < input; j++){
            if(strcmp(buah[i], buah[j]) > 0){
                strcpy(nilaiSementara, buah[i]);
                strcpy(buah[i], buah[j]);
                strcpy(buah[j], nilaiSementara);
            }
        }
    }

    printf("\nNama buah dalam urutan abjad: \n");
    for(i=0; i < input; i++){
        printf("# %s\n", buah[i]);
    }

    printf("\n=== PROGRAM SELESAI ===\n\n");
    return 0;
}