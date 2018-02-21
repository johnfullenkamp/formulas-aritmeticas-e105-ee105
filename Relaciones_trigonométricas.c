//Desarrollador: Alejandro López Guerrero

/*Este programa permite introducir un ángulo en grados por teclado, y el programa devuelve por 
pantalla algunas relaciones trigonométricas.
*/

#include <stdio.h>
#include <math.h>

void main() {
	float anguloDegree,anguloRad;
	double pi;
	double seno,coseno,tg;
	pi = 4.0*atan(1.0);
	anguloDegree = 0;

	printf("\n Bienvenido al calculo trigonometrico.\n\n Introduce el angulo expresado en Grados: ");
	scanf_s("%f",&anguloDegree);

	anguloRad = anguloDegree * 2 * pi / 360;//Conversión a radianes a partir de grados
	seno = sin(anguloRad);
	coseno = cos(anguloRad);
	tg = tan(anguloRad);
	printf("\n\n\tSen %.2f \t= %.5lf \n\n\tCos %.2f \t= %.5lf\n\n\tTan %.2f \t= %.5lf\n\n\n ",anguloDegree,seno,anguloDegree,coseno,anguloDegree,tg);
	
	system("Pause()");
}