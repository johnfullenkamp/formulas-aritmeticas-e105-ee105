#include <stdio.h>
#include <float.h>
int main(void) {
	float r;
	float pi = 3.14159265;
	printf("Introduzca el radio:");
	scanf_s("%f", &r);
	float longitud = 2 * pi * r;
	printf("\n L = 2 * %f * %f = %f", pi, r, longitud);
	
	
	

	
}
