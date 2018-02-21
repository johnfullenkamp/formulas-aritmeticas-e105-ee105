#include<stdio.h>

void main() {
	int lado1, altura, lado2, volumen;
	printf("Introduce el primer lado del prisma en cm^3:\n");
	scanf_s("%d", &lado1);
	printf("Introduce el segundo lado del prisma en cm^3:\n");
	scanf_s("%d", &lado2);
	printf("Introduce la altura del prisma en cm^3:\n");
	scanf_s("%d", &altura);

	printf("El volumen del prisma es: %d cm^3\n", lado1*lado2*altura);
	system("PAUSE");
}