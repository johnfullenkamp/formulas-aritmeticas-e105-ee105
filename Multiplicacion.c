#include <stdio.h>
void main() {
	int variable = 0;
	int contador = 0;
	int tabla;
	printf_s("\n Indica de que tabla quieres hallar las multiplicaciones\n");
	scanf_s("%d", &tabla);

		getchar();

	printf("Hasta que valor quieres hallar los multiplos?\n");
	scanf_s("%d", &variable);

	printf("Variable seleccionada: %d \nHe aqui la tabla del %d hasta el %d\n", variable, tabla, variable);

	for (contador = 0; contador <= variable; contador++) {
		int resultado = contador * tabla;
		printf(" %d * %d = %d\n", tabla, contador, resultado);
	}

	system("PAUSE");
	return 0;
}