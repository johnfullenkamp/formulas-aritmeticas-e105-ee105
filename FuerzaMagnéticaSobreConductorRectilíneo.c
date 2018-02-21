/* Desarrollador: Sergio Corredor
Este programa calcula la fuerza magn彋ica que actua sobre un conductor rectilineo introduciendo por teclado la intensidad de la corriente, la longitud del conductor, el campo magnetico
y el angulo que forman el conductor y el campo magnetico*/
#include <stdio.h>
#include <math.h>
void main() {
	float FuerzaMagn彋ica, IntensidadDeCorriente, LongitudConductor, CampoMagn彋ico, 聲guloConductorYCampoGrados, 聲guloConductorYCampoGradianes;
	printf("Introduce la intensidad de la corriente (amperios):\n");
	scanf_s("%f", &IntensidadDeCorriente);
	printf("Introduce la longitud del conductor (metros):\n");
	scanf_s("%f", &LongitudConductor);
	printf("Introduce el campo magnetico (teslas):\n");
	scanf_s("%f", &CampoMagn彋ico);
	printf("Introduce el angulo que forman el conductor y el campo magnetico (grados):\n");
	scanf_s("%f", &聲guloConductorYCampoGrados);
	聲guloConductorYCampoGradianes=聲guloConductorYCampoGrados*3.14159265358979323846/180;
	FuerzaMagn彋ica = IntensidadDeCorriente * LongitudConductor*CampoMagn彋ico*sin(聲guloConductorYCampoGradianes);
	printf("El modulo de la fuerza magnetica que actua sobre el conductor rectilineo es %f\n", FuerzaMagn彋ica);
	system("pause");
}