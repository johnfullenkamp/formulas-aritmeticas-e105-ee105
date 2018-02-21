#include <stdio.h>

void main () {
	float pesetas, euros, dolares;
	
	printf("Introduzca el valor de las pesetas: ");//Se pide por pantalla el valor de las pesetas.
	
	scanf("%f",&pesetas);
	
	euros=pesetas/166.386; //Pasamos de pesetas a euros.
	
	dolares=euros*1.41; //Pasamos de euros a dolares.
	
	printf(" %f pesetas equivale a %f dolares.",pesetas, dolares); //Resultado.
	
}
