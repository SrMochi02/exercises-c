#include <stdio.h>

int main (void) {

	int start_value = 0;
	int limit_value = 0;
	int divisor_value = 0;
	int product_division = 0;
	int zero_value = 0;

	printf("Insert the limit value:\n");
	scanf("%d", &limit_value);

	printf("Insert the divisor for the operation:\n");
	scanf("%d", &divisor_value);

	for(start_value = 0; start_value <= limit_value; start_value = start_value + 1) {

		product_division = start_value % divisor_value;

		if(product_division == zero_value) {
			printf("The dividend number:%d\n", start_value);
			printf("The divisor:%d\n", divisor_value);

		} else {
			printf("The number is not divisible\n");
		}






	}

	return 0;


}
