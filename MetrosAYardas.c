#include <stdio.h>

void main() {
	int metros;
	float yardas;
	printf("Introduce los metros.\n");
	scanf_s("%d", &metros);
	printf("%d metros son %.3f yardas.\n", metros, metros*1.09361);
	system("pause");
}