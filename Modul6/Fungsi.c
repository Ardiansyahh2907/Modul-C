#include <stdio.h>

// PROGRAM 1
/*
//Buat Fungsi
void myFunction(){
	printf("I Just got executed!");
}
//Memanggil Fungsi
int main(){
	myFunction();
    return 0;
}
*/

// PROGRAM 2 - tanpa argumen dan tanpa return value
void printName();
void main(){
	printf("Hello ");
	printName();
}
void printName(){
	printf("Javatpoint");
}

// PROGRAM 3 - Fungsi dengan argumen dan dengan return value
int sum();
void main(){
	printf("Going to calculate the area of the square\n");
	float area = square();
	printf("The area of the square: %f\n", area);
}
int square(){
	float side;
	printf("Enter the length of the side in meters: ");
	scanf("%f", &side);
	return side * side;
}

// PROGRAM 4 - Fungsi dengan argumen tanpa return value
void sum(int, int);
void main(){
	int a, b, result;
	printf("\nGoing to calculate the sum of two numbers:");
	printf("\nEnter two numbers:");
	scanf("%d %d", &a, &b);
	sum(a, b);
}
void sum(int a, int b){
	printf("\nThe sum is %d", a+b);
}

// PROGRAM 5 - Fungsi dengan argumen dan dengan return value
int even_odd(int);
void main(){
	int n, flag = 0;
	printf("\nGoing to check whether a number is even or odd");
	printf("\nEnter the number: ");
	scanf("%d", &n);
	flag = even_odd(n);
	if(flag == 0){
		printf("\nThe number is odd");
	}else{
		printf("\nThe number is even");
	}
}
int even_odd(int n){
	if(n % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}