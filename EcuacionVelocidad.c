
//ANA DUEÑAS

#include <stdio.h>
#include <stdlib.h>
void main()
{

	float tiempo, velocidad, aceleracion, espacio; //SI
	
	printf ("Espacio recorrido por el vehiculo:\n");
	scanf_s("%f", &espacio);
	printf("Tiempo tardado en recorrer el espacio\n");
	scanf_s("%f", &tiempo);
	//printf("Introduce la aceleracion:\n");
	//scanf_s("%f", &aceleracion);
	velocidad = (espacio / tiempo);
	printf("Siendo la velocidad espacio/tiempo, la velocidad es:%f\n", velocidad);//
	
	//printf("Edad: %d\n", edad);   //%d significa que es una variable entera
	//printf("DNI: %d-%c\n", dni, letraDNI);
	//printf("Altura: %.2f\n", altura);

	system("PAUSE");
}