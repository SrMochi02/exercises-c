#include <stdio.h>

int main () {

    //declared values for comparation
    int first_value = 5;//Binary: 0101
    int second_value = 9; //Binary: 1001


    //the computer evaluate a bits of two values and comparated
    //if one bit of any values is 1, the computer print one bit
    printf("\nUsing AND operator:%d", first_value & second_value);

    //OR Result is 1 if at least one bit of numbers in binary are 1
    //0101 | 1001 = 1101 
    printf("\nUsing OR operator:%d", first_value | second_value);

    //XOR: Results is 1 if bits of number in binary are different
    //0101 ^ 1001
    printf("\nUsing XOR operator:%d", first_value ^ second_value);
    
    //the not operator invert the truth value
    printf("\nUsing not operator:%d", ~first_value);
    printf("\nUseing not operator:%d", ~second_value);
    printf("\n");
    return 0;

}
