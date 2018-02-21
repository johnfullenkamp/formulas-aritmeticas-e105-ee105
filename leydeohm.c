#include<stdio.h>
void main() {

	float intensidad;
	float resistencia;
	float voltaje;
	printf("Los decimales van con puntos \n");

	printf("Ponga la intensidad:\n");
	scanf_s("%f", &intensidad);
	
	printf("Ponga la resistencia:\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	scanf_s("%f", &resistencia);

	voltaje = intensidad * resistencia;

	printf("El voltaje es: %2f\n", voltaje);
	
	system("PAUSE");
	
}		