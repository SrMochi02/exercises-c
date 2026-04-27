#include <stdio.h>


int main () {

    int storage[] = {10, 20, 30 ,40, 50};

    int temp_var = 0;
    int *ptr_view = storage;
    printf("Original Array\n");

    while (ptr_view < storage + 5) {

        printf("%d ", *ptr_view);
        ptr_view++;
            
    }
    printf("\n");

    int *ptr_start = storage;
    int *ptr_limit = storage + 4;


    printf("Final Array\n");

    while (ptr_start < ptr_limit) {

        temp_var = *ptr_start;

        *ptr_start = *ptr_limit;

        *ptr_limit = temp_var;
        ptr_start++;
        ptr_limit--;
    }

    for (int *p = storage ;p < storage + 5; p++) {
        printf("The value of final array: %d\n", *p);
    }

    return 0;

}
