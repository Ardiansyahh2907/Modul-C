#include <stdio.h>
#include <string.h>

int main(){
	// Loop While
	/*
	int number = 0;
	int sum = 0;
	
	printf("Masukkan angka untuk jumlah(masukkan 0 untuk berhenti):\n");
	scanf("%d", &number);
	
	while(number != 0){
		sum += number;
		printf("Current sum: %d\n", sum);
		
		scanf("%d", &number);
	}
	printf("Final sum: %d\n", sum);
	
	
	//Loop Do-While
	char password[] = "secret";
	char input[20];
	do{
		printf("Enter the password: ");
		scanf("%s", &input);
	}while(strcmp(input, password) != 0);
	printf("Access granted!\n");
	
	
	//For Loop
	int i = 1, number = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	for(i = 1; i <= 10; i++){
		printf("%d \n",(number * 1));
	}
	
	//Nested Loop
	int rows, columns, k=1;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("\nEnter the number of columns: ");
	scanf("%d", &columns);
	
		int a[rows][columns];
		int i = 1;
		while(i <= rows)
		{
			int j = i;
			while(j <= columns)
			{
				printf("%d\t", k);
				k++;
				j++;
			}
			i++;
			printf("\n");
	}
	
		
		//Penggunaan Break dan Continue
		int i, j;
		for(i = 1; i <= 10; i++){
			printf("%d ", i);
			if(i == 8){
				break;
			}
		}
		printf("\n");
		
		for(j = 1; j <= 20; j++){
			if(j == 9){
				continue;
			}
			printf("%d ", j);
		}
		printf("\n");
		*/	
		
		//Penggunaan break pada switch case
		int var = 5;
		switch(var){
			case 1:
				printf("Case 1 is Matched.");
				break;
			case 2:
				printf("Case 2 is Matched.");
				break;
			case 3:
				printf("Case 3 is Matched.");
				break;
			default:
				printf("Default case is Matched.");
				break;
		}
	return 0;
}