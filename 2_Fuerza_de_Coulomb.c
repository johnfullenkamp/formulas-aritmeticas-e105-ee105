//Desarrollador: Daniel Iglesias
//Cálculo de La Fuerza Electroestática de Coulomb

#include<stdio.h>
#define K 9000000000

void main() {
	
	double E;
	float Q1;
	float Q2;
	float D;


	printf("\nVamos a calcular la Fuerza Electroestatica de Coulomb.\n\nPara ello indica los siguientes datos:\nCarga 1 en culombios (Q1): ");
		scanf_s("%f", &Q1);

	printf("Carga 2 en culombios (Q2): ");
		scanf_s("%f", &Q2);

	printf("Distancia entre cargas en metros (D): ");
		scanf_s("%f", &D);


		E = (K*Q1*Q2) / D;

	printf("\n\nLa Fuerza Electroestatica de Coulomb correspondiente a dos cargas de %0.f y %0.f culombios, separadas una distancia de %0.f metros es:\n   %2.f  Newton\n\n\n",Q1,Q2,D,E);




	system("pause");



}