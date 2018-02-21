#include <stdio.h>

void main() {
	int km;
	float millas;
	
	printf("Introduce los kilometros:\n");
	scanf_s("%d", &km);
	printf("Las millas son: %f\n", km*0.62137);

	system("PAUSE");
}