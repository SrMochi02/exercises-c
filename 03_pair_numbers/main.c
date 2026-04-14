#include <stdio.h>

int get_minus(int firs_valueA, int second_valueB); //declared function, why after using function for evaluate two values

int main (void) {

	int count = 0; //established count in zero for after use in bucle
	int num_cycles = 0; // This variable is used for the quantity of cycles
	int first_value = 0; //First value entered by the user
	int second_value = 0; // Why do I do that?. The reason for doing this is
			      // to store the value entered by the user in a variable.
	int min_number = 0; //this variable is used for the minimum number. 
	
	printf("How many pairs of numbers?\n");
	scanf("%d", &num_cycles); //Get the value entered by the user

	for(count = 1; count <= num_cycles; ++count) {

		printf("Insert the first number to evaluate:\n");
		scanf("%d", &first_value);//take value and save in variable

		printf("Insert the second number to evaluate: \n");
		scanf("%d", &second_value);//take the second value 

		min_number = get_minus(first_value, second_value); //call the function and gave the values
								
		//the min_number variables receives a result of process which is a copy.

		printf("\n The minimun number is: %d\n", min_number);


	}

	return 0;
}

int get_minus(int first_valueA, int second_valueB) {

	if (first_valueA <= second_valueB) {

		return (first_valueA);

	} 
	else {
		
		return (second_valueB);
	}
}
