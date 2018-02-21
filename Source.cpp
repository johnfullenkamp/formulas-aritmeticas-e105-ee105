#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
//Teorema de pitagoras: calculo de la hipotenusa
int main()
{
	float a, b;
	cout << "Cual es el lado contiguo del triangulo?";
	cin >> a;
	cout << "Cual es el lado opuesto del triangulo?";
	cin >> b;

	cout << sqrt(a*a + b*b);
	
}
