#include <stdio.h>

int main() {

    int notes[3] = {10, 50, 60};

    int *ptr_notes = notes;

    printf("\nptr_notes=%d *ptr_notes=%d", *ptr_notes, *(ptr_notes + 1));
    printf("\nDirection %p", (void*)ptr_notes);

    *(ptr_notes + 2) = 100;

    printf("\n*ptr_notes=%d", *(ptr_notes + 2));

    int *ptr_end = &notes[2];

    printf("\nptr_end=%d", *(ptr_end - 2));

    ptr_notes += 2;

    printf("\nptr_notes=%d", *ptr_notes);
    printf("\nptr_notes=%d", *ptr_notes);

}   