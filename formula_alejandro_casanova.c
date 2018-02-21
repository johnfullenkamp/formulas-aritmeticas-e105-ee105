//Alejandro Casanova Martín
//Este programa sirve para calcular la coordenada "y" de una parábola
//de la forma "y=x^2 +2*x + 1 " al introducir la coordenada "x"

#include <stdio.h>
#include <math.h>

void main() {
	int x = 0;
	int y = 0;

	printf("Introduzca la coordenada x:\n");
	scanf_s("%d", &x);

	y = x * x + 2 * x + 1;
	printf("La coordenada del punto es %d\n", y);
		system("PAUSE");
}
