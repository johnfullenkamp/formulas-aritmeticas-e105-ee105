#include <stdio.h>
void main()
{
	int edad;
	printf("Introduzca su edad y tenga recomendaciones de peliculas estrenadas en el 2017: \n");
	scanf_s("%d", &edad);
	if (edad < 0 || edad>100)
		printf("No es una edad validad \n");
	if (edad >= 0 && edad <= 5)
		printf("Mi villano favorito 3 \n");
	if (edad > 5 && edad <= 12)
		printf(" La Bella y la Bestia\n");
	if (edad > 13 && edad < 16)
		printf("Coco");
	if (edad >= 16 && edad < 25)
	     printf("Guardianes de la galaxia\n");
	if (edad >= 25 && edad < 40)
		printf("Star Wars episodio viii\n");
	if (edad >= 40 && edad <=100)
		printf("Toni Erdman\m ");
	system("PAUSE"); 

}