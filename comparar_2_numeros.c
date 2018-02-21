
// Victor Balbas

#include<stdio.h>
#include<math.h>

int main()
{
	int x, y;
	printf("En este programa se compararan 2 numeros enteros\n");

	printf("Introduce el primer numero\n");
	scanf_s("%d", &x);

	printf("introduce el segundo numero\n");
	scanf_s("%d", &y);

	if (x != y) //se comprueba si los numeros fuesen distintos

		if (x < y) // al ser distintos, se mira el mayor de ellos
			printf("el numero %d es mayor que el numero %d \n", y, x);

		else
			printf("el numero %d es mayor que el numero %d \n", x, y);

	else // si los numeros son iguales, lo mostramos por pantalla
		printf("El numero %d y el numero %d son iguales \n", x, y);


	system("PAUSE");

	return 0;

}