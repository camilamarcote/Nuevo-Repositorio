#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // El nombre del arreglo es un puntero al primer elemento del arreglo

    for (int i = 0; i < 5; i++) {
        printf("Valor del elemento %d: %d\n", i, *(ptr + i)); // Accede a los elementos del arreglo utilizando aritmética de punteros
    }

    return 0;
}
