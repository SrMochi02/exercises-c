#include <stdio.h>

int main() {

    int notes[3] = {10, 50, 60};//define array 

    int *ptr_notes = notes; //define pointer of array notes

    //print the value in position 0 and move more index in the array 
    printf("\nptr position index of 0=%d ptr second position or first index of array=%d", *ptr_notes, *(ptr_notes + 1));

    //show the direction of pointer 
    printf("\nDirection %p", (void*)ptr_notes);

    printf("\nThird position or second index of array=%d", *(ptr_notes + 2));

    //change value of 2nd position of index
    *(ptr_notes + 2) = 100;


    printf("\nptr after change of value=%d", *(ptr_notes + 2));

    //start array in last position
    int *ptr_end = &notes[2];

    //show first position using reverse method
    printf("\nptr value of first position using reverse=%d", *(ptr_end - 2));

    //move 2 positions in the array and show the value of position
    ptr_notes += 2;

    printf("\nptr moves using movement += =%d", *ptr_notes);
}   
