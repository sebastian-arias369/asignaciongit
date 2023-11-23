
#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el número de puntos de datos: ");
    scanf("%d", &n);

    double x[n], y[n];

    // Solicitar al usuario que ingrese los datos de x e y
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor de x[%d]: ", i);
        scanf("%lf", &x[i]);
        printf("Ingrese el valor de y[%d]: ", i);
        scanf("%lf", &y[i]);
    }

    double m, b; // Coeficientes de la línea recta

    // Realizar el ajuste de la línea recta utilizando la librería
   

    // Imprimir los coeficientes de la línea recta ajustada
    printf(" i     x[i]     y[i]   x[i]*x[i]  x[i]*y[i]    SumX      SumY     SumXX    SumXY\n");
    printf("\nCoeficiente m (pendiente): %lf\n", m);
    printf("Coeficiente b (intersección en el eje Y): %lf\n", b);
    return 0;
}