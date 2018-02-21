#include <stdio.h>

void main() {
	//Circuito formado por generador de tension con dos resistencias.
	
	float R1,R2,E,V; //declaración de variables
	
	printf("Introduzca valor de la resistencia uno: \n"); //Almacenamiento de las variables pedidas por teclado
	scanf("%f",&R1);
	printf("Introduzca valor de la resistencia dos: \n");
	scanf("%f",&R2);
	printf("Introduzca valor del generador de tension: \n");
	scanf("%f",&E);
	
	V=E*(R2/(R1+R2)); //La caida de tensión se halla con un divisor de tension
	
	printf("La caida de tension de la resistencia dos %.2f es: %.2f \n",R2,V); //resultados.
}
