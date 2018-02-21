//Nombre: Sandra Ures

//Este programa sirve para calcular mediante la ley de ohm cualquiera de 
//las 3 incognitas, el voltaje, la resistencia o la intensidad.

#include <stdio.h>

void main() {
	char resultado;
	float v, r, i;

	printf("Ley de OHM\n");
	printf("¿Qué quieres obtener v,r,i?\n");
	scanf_s("%c", &resultado);
	if (resultado == 'v') {
		printf("Dame un valor de r\n");
		scanf_s("%f", &r);
		printf("Dame un valor de i\n");
		scanf_s("%f", &i);
		printf("El valor de voltaje es: %f\n", i*r);
	}
	else {
		if (resultado == 'i') {
			printf("Dame un valor de r\n");
			scanf_s("%f", &r);
			printf("Dame un valor de v\n");
			scanf_s("%f", &v);
			printf("El valor de intensidad es: %f\n", v / r);
		}
		else {
			if (resultado == 'r') {
				printf("Dame un valor de v\n");
				scanf_s("%f", &v);
				printf("Dame un valor de i\n");
				scanf_s("%f", &i);
				printf("El valor de resistencia es: %f\n", v / i);
			}
			else {
				printf("La incognita es erronea.\n");
			}
		}


	}
	system("pause");
}