#include <stdio.h>

int main () {

    char storage [] = "Hola";
    char *counter = storage;

    while (*counter != '\0') {
        counter++;
    }

    counter--;

    while (counter >= storage) {
        printf("%c", *counter);
        counter--;
    }
    printf("\n");

    return 0;
}
