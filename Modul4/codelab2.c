#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i, j;
    int unik;

    printf("Masukkan sebuah string: ");
    fgets(kata, sizeof(kata), stdin);

    printf("Karakter unik: ");
      
    for (i = 0; i < strlen(kata); i++) {
    	unik = 1;      
        for (j = 0; j < i; j++) {
            if (kata[i] == kata[j]) {
            	unik = 0;
                break; 
            }
        }
     
        if (!unik) {
            continue;
        }
        printf("%c", kata[i]);
    }
    return 0;
}
