#include <stdio.h>

// a)
int cuadrado(int n) {
    return n * n;
}

// b)
void cuadradoVoid(int *n) {
    *n = (*n) * (*n);
}

// c)
void mostrar(int *x) {
    printf("Dirección: %p, Contenido: %d\n", x, *x);
}

// d)
void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// e)
void orden(int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main() {
    int a = 3, b = 5, n = 4, x, y;

    printf("Cuadrado de %d = %d\n", a, cuadrado(a));

    cuadradoVoid(&n);
    printf("Cuadrado (void) = %d\n", n);

    mostrar(&a);

    printf("Antes de invertir: a = %d, b = %d\n", a, b);
    invertir(&a, &b);
    printf("Después de invertir: a = %d, b = %d\n", a, b);

    orden(&a, &b);
    printf("Ordenados: menor = %d, mayor = %d\n", a, b);

    printf("Ingrese dos números: ");
    scanf("%d %d", &x, &y);
    orden(&x, &y);
    printf("Ordenados: menor = %d, mayor = %d\n", x, y);

    return 0;
}
