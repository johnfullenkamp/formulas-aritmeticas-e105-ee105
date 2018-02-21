#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main() {
	int b, h, a;
	printf("introduzca base b\n");
	scanf_s("%d", &b);
	printf("introduzca altura h\n");
	scanf_s("%d", &h);

	a = ((b + h) / 2);
	printf("area: %d", a);
	system("PAUSE");
}