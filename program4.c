#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1; // Usamos long long para manejar números grandes

    // Solicitamos al usuario que ingrese el número
    printf("Ingrese un número positivo: ");
    scanf("%d", &num);

    // Verificamos si el número ingresado es negativo
    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        i = 1;
        while (i <= num) {
            factorial *= num - i + 1; // Actualizamos el factorial multiplicándolo por num - i + 1
            i++;
        }

        // Mostramos el resultado
        printf("El factorial de %d es %lld.\n", num, factorial);
    }

    return 0;
}
