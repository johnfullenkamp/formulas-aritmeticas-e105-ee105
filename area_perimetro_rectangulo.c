#include <stdio.h>
#include <stdlib.h>

int main()
{
	float base, altura, area, perímetro;
	printf("CALCULO DEL AREA Y PERIMETRO DE UN RECTANGULO\n");
	printf("indique el valor de la base\n");
	scanf_s("%f", &base);
	printf("indique el valor de la altura\n");
	scanf_s("%f", &altura);

	area = base * altura;
	perímetro = (2 * base) + (2 * altura);

	printf("El area del rectangulo es: %f\n", area);
	printf("El perímetro del rectangulo es; %f\n", perímetro);

	system("pause");
}