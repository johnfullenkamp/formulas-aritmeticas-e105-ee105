// Nombre: Mariano Jiménez Bohórquez
// programa para calcular la posición final de un objeto dada una velocidad y un tiempo

#include <stdio.h>

void main() {
	float posicion1, velocidad, tiempo, posicion2;
	printf("introduzca posicion del objeto (km): ");
	scanf_s("%f", &posicion1);
	printf("introduzca la velocidad del objeto (km/h):");
	scanf_s("%f", &velocidad);
	printf("introduzca tiempo transcurrido (h):");
	scanf_s("%f", &tiempo);

	posicion2 = posicion1 + (velocidad*tiempo);
	printf("posicion final=%f km", posicion2);
	system("pause");

}