#include<stdio.h>
void main() {
	//ZONA DE DECLARACIÓN DE VARIABLES
	float precio_inicial;
	int descuento;
	float precio_final;
	//Pedir por teclado los datos
	printf("Indroduce el precio inicial: \n");
		scanf_s("%f", &precio_inicial);
	printf("Introduce el descuento a aplicar: \n");
		scanf_s("%d", &descuento);
	//Hacer operaciones para indicar precio con la rebaja
	precio_final = precio_inicial * (1 - 0.01*descuento);
	// dar como resultado el precio final
	printf("Precio final: %.2f\n", precio_final);
	system("PAUSE");
}
