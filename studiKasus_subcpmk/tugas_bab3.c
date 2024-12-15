#include <stdio.h>
int main(){
	
	int i = 5;
	int j = 2;
	
	printf("a. 2 + 3 * 5 =  %d\n", 2 + 3 * 5);
	printf("b. 10 - 7 + 3 % 6 = %d\n", 10 - 7 + 3 % 6);
	printf("c. 3 % 7 / 2 - 1 = %d\n", 3 % 7 / 2 - 1);
	printf("d. ++5 * 3 / 6 % 7 = %d\n", ++i * 3 / 6 % 7);
	printf("e. 3 * 2++ - 4 * 7 = %d\n", 3 * j++ - 4 * 7);
	printf("f. 6 << 2 = %d\n", 6 << 2);
	printf("g. 12 >> 3 = %d\n", 12 >> 3);
		
	return 0;
}