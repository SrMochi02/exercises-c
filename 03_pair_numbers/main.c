#include <stdio.h>

int minus(int a, int b);

int main (void) {

	int count = 0;
	int n = 0;
	int a = 0; 
	int b = 0;
	int min = 0;
	
	printf("How pairs of numbers?\n");
	scanf("%d", &n);

	for(count = 1; count <= n; ++count) {

		printf("Insert the first number: \n");
		scanf("%d", &a);

		printf("Insert the second number: \n");
		scanf("%d", &b);

		min = minus(a, b);

		printf("\n The min number is: %d\n", min);

	}

	return 0;
}

int minus(int a, int b) {

	if (a <= b) {

		return (a);
	} else {
		
		return (b);
	}
}
