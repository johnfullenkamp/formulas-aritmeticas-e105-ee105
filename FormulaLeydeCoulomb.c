# include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <math.h>

float fuerza;



void main() {
	
	float carga1;
	float carga2;
	float distancia;
	
	
	//long k = 9 * (pow(10,9)); Esta funcion para elevar, no me funciona
	long k = 9 * 1000000000;



	printf("El valor de la carga 1 en Culombios es: \n");
		scanf_s("%f", &carga1);

		printf("El valor de la carga 2 en Culombios es: \n");
		scanf_s("%f", &carga2);

		printf("El valor de la distancia en metros es: \n");
		scanf_s("%f", &distancia);



		char resultante=0;

		if (carga1*carga2 > 0) { // si la dos cargas son iguales, deberia salir una fuerza de repulsion


			
			fuerza = k * carga1*carga2 / (distancia*distancia);

			
			//resultante = "atraccion"; NOTA: queria poner que dependiendo de el tipo de carga saliese si la fuerza es atractiva o repulsiva

			
		}

		else {// si son distintas


			
			fuerza = (-1)* k * carga1*carga2 / (distancia*distancia);

			
			//resultante = "repulsion";

		}

		



	printf("El valor de la carga1  es: %f \n",carga1);
	printf("El valor de la carga1  es: %f \n", carga2);
	printf("El valor de la carga1  es: %f \n", distancia);

	

	printf("El valor de la fuerza es %f \n", fuerza); // Imprime el valor de la fuerza, me gustaria que saliese tamb si es tractiva o repulsiva

	system("PAUSE");

	return 0;



}

