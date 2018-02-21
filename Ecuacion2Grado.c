//David Thomas
//Este programa calcula las soluciones de una ecuacion de segundo grado

# include <stdio.h>
# include <math.h>

main() {

	//Declaracion de variables
	float a, b, c;     //coeficientes
	float x_1, x_2;    //soluciones

	//Pedir datos
	printf("Vamos a calcular las soluciones de una ecuacion a*x^2 + b*x + c\n");
	printf("Introduce el coeficiente de x^2 (a): ");
	scanf_s("%f", &a);
	printf("Introduce el coeficiente de x (b): ");
	scanf_s("%f", &b);
	printf("Introduce el termino independiente (c): ");
	scanf_s("%f", &c);

	//Calculos
	if (pow(b, 2) - 4 * a*c < 0) {
		printf("la ecuacion no tiene soluciones reales \n");
	}
	else {
		x_1 = -b + sqrt(pow(b, 2) - 4 * a*c);
		x_1 = x_1 / (2 * a);
		x_2 = -b - sqrt(pow(b, 2) - 4 * a*c);
		x_2 = x_2 / (2 * a);
		printf("la dos soluciones son: %f y %f \n", x_1, x_2);
		system("PAUSE");
	}

}