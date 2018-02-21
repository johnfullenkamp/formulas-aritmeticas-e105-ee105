//Desarrollador: Alejandro López Guerrero

#include <stdio.h>

void main() {
	float euros, pesetas, dollar;
	printf("\n Bienvenido al programa \"Conversor monetario\"\n\n A continuacion introduzca el valor en Euros: ");
	scanf_s("%f", &euros);//Lectura de la variable euros aportada por el usuario
	
	pesetas = euros * 166.66;//Conversion
	dollar = euros * 1.24363;
	printf("\n\n\tEuros:   %.2f €\n\n\tPesetas: %.2f pts\n\n\tDolares: %.2f $\n\n", euros, pesetas, dollar);
	system("PAUSE()");
}
