#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
	// Boolean values
	bool flagTrue = true;		//mengubah tipedata boolean menjadi bool
	bool flagFalse = false;		//mengubah tipedata boolean menjadi bool
	
	printf("Boolean values demonstration:\n");
	printf("flagTrue: %d\n", flagTrue);			//menambahkan variabel flagTrue			
	printf("flagFalse: %d\n", flagFalse);		//menambahkan variabel flagFalse
	
	// String operations
	char greeting[] = "Hello World!";
	char copyGreeting[20];
	strcpy(copyGreeting, greeting);			//mengubah fungsi stringcopy menjadi strcpy
	
	printf("\nString operations:\n");
	printf("Original greeting: %s\n", greeting);	//mengubah variabel string1 menjadi greeting
	printf("Copied greeting: %s\n", copyGreeting);	//mengubah variabel string2 menjadi copyGreeting
	
	// Pointer demonstrations
	int number = 100;
	int *pointer = &number;
	
	printf("\nPointer demonstrations:\n");
	printf("Value of number: %d\n", number);				//menambahkan variabel number
	printf("Address of number: %p\n", &number);		
	printf("Value of pointer: %p\n", pointer);		
	printf("Value pointed by pointer: %d\n", *pointer);		//tampilkan nilai yang ditunjuk oleh pointer
	
	return 0;
}