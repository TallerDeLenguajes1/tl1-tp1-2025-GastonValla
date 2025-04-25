#include <stdio.h>

#include <stdio.h>

int main() {
    int numero = 424;
    int *puntero = &numero;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion almacenada por el puntero: %d\n", puntero);
    printf("Direccion de la variable: %d\n", &numero);
    printf("Direccion del puntero: %d\n", &puntero);
    printf("Tamaño en memoria de la variable: %d\n", sizeof(numero));

    return 0;
}
