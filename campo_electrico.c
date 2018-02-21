// Nombre: Alfonso Pinto

#include<stdio.h>
#include<math.h>   //uso esta libreria para poder usar la funcion raiz cuadrada mas adelante

void main() {
	
	double K = 9000000000;   //defino el valor de la constante de coulomb
	int i;    //es un caracter que usa para el condional mas adelante
	int eleccion;   //es el nombre de la 'variable' que defino al usar el switch
	//Relativo a el campo Electrico
	float carga; //la carga en coulombs
	float distancia; //la distancia en metros
	float campo; //el campo en newtons partido de coulombs
	float s1;   //solucion1, es el campo que obtengo
	float s2;  //solucion2, es el valor de la carga que obtengo
	float s3;  //solucion3, es el valor de la distancia que obtengo
	// Relativo a la fuerza de Coulomb
	float carga1;  //defino la primera carga
	float carga2;  //defino la segunda carga
	float solucion;  //es la solucion, el valor de la fuerza
	int j;  //variable que defino para el uso del while 
	j = 1;

	do {

		printf("Bienvenido a \"Campo Electrico\" \n");
		printf("Pulse la tecla 1 para acceder a  \"Campo Electrico\" \n");
		printf("Pulse la tecla 2 para acceder a  \"Fuerza de Coulomb\" \n");
		printf("Pulse la tecla 3 para acceder a  \"Informacion\" \n ");
		scanf_s("%d", &i);

		system("cls"); //limpio la pantalla en cuanto pulso el 1 o el 2

		if (i == 1) {
			printf("Que desea hacer? \n");
			printf("1 Calcular campo \n");
			printf("2 Calcular la carga \n");
			printf("3 Calcular la distacia \n");
			scanf_s("%d", &eleccion);

			switch (eleccion) {            //uso el switch en vez de usar el if...else para poner distintos casos mas sencillos
			case 1:

				printf("Introduce la carga(en coulombs)= \n");
				scanf_s("%f", &carga);
				printf("Introduce la distancia(en metros)= \n ");
				scanf_s("%f", &distancia);
				s1 = K * carga / (distancia*distancia);
				printf("El valor del campo es %f N/C \n\n\n", s1);
				break;
			case 2:

				printf("Introduce el valor del campo(en N/C)= \n");
				scanf_s("%f", &campo);
				printf("Introduce la distancia(en metros)= \n");
				scanf_s("%f", &distancia);
				s2 = campo * distancia*distancia / K;
				printf("El valor de la carga es %f C \n\n\n", s2);
				break;
			case 3:

				printf("Introduce el valor del campo(en N/C)= \n");
				scanf_s("%f", &campo);
				printf("Introduce el valor de la carga(en coulombs)= \n");
				scanf_s("%f", &carga);
				s3 = sqrt(K*carga / campo);  //con la ayuda de la libreria math.h uso la funcion raiz cuadrada
				printf("La distancia es %f m \n\n\n", s3);
				break;
			default:    //indica que tiene que hacer el programa en caso de que no se elija ninguna de las opciones anteriores
				printf("No ha elegido una de las opciones propuestas \n");


			}
		}
		else if (i == 2) {   //esta condiciion nos dira el valor de la fuerza electrostatica

			printf("Introduzca el valor de la carga 1(en coulombs)= \n");
			scanf_s("%f", &carga1);
			printf("Introduzca el valor de la carga 2(en coulombs)= \n");
			scanf_s("%f", &carga2);
			printf("Introduzca el valor de la distancia(en metros)= \n");
			scanf_s("%f", &distancia);
			solucion = K * carga1*carga2 / (distancia * distancia);
			printf("El valor de la fuerza de Coulomb es %f N \n\n\n", solucion);
		}
		else if (i == 3) {
			printf("El programa calcula el valor de los distintos elementos que podemos encontrar en un campo electrico \n ");
			printf("creado por una carga puntual. El valor tanto del campo como el de la fuerza de se da como escalar aunque \n");
			printf("hay que recordar que es un valor vectorial. \n\n\n");

		}
		else {
			printf("Error, pulse otra tecla \n\n\n");
		}
		system("pause");
		system("cls");
	} while (j = 1);
	system("PAUSE");
}