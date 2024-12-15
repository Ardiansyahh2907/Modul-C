#include <stdio.h>
#include <string.h>

int main(){
    char siswa[5][10] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    int nilai[5] = {85, 90, 78, 92, 88};
    int i;
    
    printf("Daftar siswa dan nilai sebelum diubah: \n");
    for(i = 0; i < 5; i++){
        printf("%s: %d\n", siswa[i], nilai[i]);
    }
    for(i = 0; i < 5; i++){
        if(strcmp(siswa[i], "David") == 0){
            nilai[i] = 95;
            break;
        }

    }
    printf("\nDaftar siswa dan nilai siswa setelah diubah: \n");
    for(i = 0; i < 5; i++){
        printf("%s: %d\n", siswa[i], nilai[i]);
    }

    printf("\n=== Program Selesai ===\n");
    return 0;
}