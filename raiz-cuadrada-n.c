// Nombre: Raquel Cedazo

// Este programa calcula la raiz cuadradad de un numero introducido
// por teclado

#include <stdio.h>
#include <math.h> // Es necesario la libreria matematica para la raiz cuadrada

void main() {
	int n;
	float raiz;

	printf("Introduce n\n");
	scanf("%d", &n);
	
	raiz = sqrt(n);
	printf("Raiz de %d es = %f\n", n, raiz);
}
