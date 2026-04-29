#include <stdio.h>

int main(){

    int example_value = 20;

    //Gave the direction of variable because i need direction for change value of variable
    //and manipulating variable or printf direction in memory
    int *ptr_value = &example_value;

    //print the first value and direction of variable example value
    printf("The first value after change:%d", *ptr_value);
    //use %p for direction and (void*) for print memory addres
    printf("The direction of example value in memory:%p", (void*)ptr_value);

    //change value using * 
    //use * for going to pointer value direction

    *ptr_value = 100;

    //And print the newe new value

    printf("\nThe value before change:%d", *ptr_value);

    printf("\n");

    return 0;
}
