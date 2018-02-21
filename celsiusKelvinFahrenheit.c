#include <stdio.h>
void main ()
{
	float celsius,fahrenheit,kelvin;
	
	printf("Introduzca una temperatura en grados celsius:  ");
	
	scanf("%2.f",&celsius);
	
	fahrenheit=celsius+32;
	kelvin=celsius+273;
	
	printf("La temperatura %2.f en grados celsius a fahrenheit es %2.f",celsius,fahrenheit);
	printf("La temperatura %2.f en grados celsius a kelvin es %2.f",celsius,kelvin);
}

