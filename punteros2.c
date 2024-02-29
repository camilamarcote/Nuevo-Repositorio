#include <stdio.h>

int main() {
    char str[] = "Hola, mundo!";
    char *ptr = str; // El nombre de la cadena es un puntero al primer carácter de la cadena

    while (*ptr != '\0') { // Recorre la cadena hasta encontrar el carácter nulo ('\0')
        printf("%c", *ptr);
        ptr++; // Avanza al siguiente carácter de la cadena
    }
    printf("\n");

    return 0;
}
