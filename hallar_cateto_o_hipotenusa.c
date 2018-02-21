//creado por: Javier Redondo Hernando 
//con este codigo es posible hayar el valor de un lado de un triangulo rectangulo
//conocidos dos de ellos o uno de ellos y su angulo correspondiente 

#include<stdio.h>
#include<math.h>
i = 1;
float pi = 3.14159;
void main() {
	int op, op2, op3; //variables para elegir las opciones
	float hipotenusa, cateto1, cateto2, angulo, temp; //variables para las operaciones matematicas
	char continuar; //variable para facilitar el borrado de la pantalla tras optener un resultado 
	do {
		printf("Elija la ecuacion que quiere resolver:\n");
		printf("Para resolver la ecuacion de pitagoras--> 1\n");
		printf("Para resolver ecuaciones de trigonometria--> 2\n");
		scanf_s("%d", &op);
		system("cls");//limpia la pantalla
		switch (op) {  //elegir entre las ecuaciones a solucionar
		case 1:
			printf("Elija la ecuacion que quiere resolver:\n");
			printf("Para hallar la hipotenusa--> 1\n");
			printf("Para hallar un cateto--> 2\n");
			scanf_s("%d", &op2);
			system("cls");
			switch (op2) { //elegir entre que parte de la ecuacion se quiere hallar
			case 1:
				printf("Introduzca un cateto: ");
				scanf_s("%f", &cateto1);
				printf("Introduzca segundo cateto: ");
				scanf_s("%f", &cateto2);
				hipotenusa = sqrt(cateto1*cateto1 + cateto2 * cateto2);//la formula por la que se rige este caso
				system("cls");
				printf("La hipotenusa vale: %f\n", hipotenusa);
				printf("Pulse una tecla para continuar:  ");
				getchar();//estas tres lineas son para poder ver el resultado y despues qu limpie la pantalla
				scanf_s("%c",&continuar);
				system("cls");
				break;
			case 2:
				printf("Introduzca un cateto: ");
				scanf_s("%f", &cateto1);
				printf("Introduzca hipotenusa: ");
				scanf_s("%f", &hipotenusa);
				cateto2 = sqrt(hipotenusa * hipotenusa - cateto1*cateto1);//la formula por la que se rige este caso
				system("cls");
				printf("El cateto vale: %f\n\n\n", cateto2);
				printf("Pulse una tecla para continuar:  ");
				getchar();
				scanf_s("%c", &continuar);
				system("cls");
				break;
			default://en caso de que no se elija un numero que tenga asignado uunn caso
				printf("Mal\n");
			}
			break;
		case 2:
			printf("Elija la ecuacion que quiere resolver:\n");
			printf("Para hallar la hipotenusa--> 1\n");
			printf("Para hallar un cateto contiguo--> 2\n");
			printf("Para hallar un cateto adyacente--> 3\n");
			scanf_s("%d", &op3);
			system("cls");
			switch (op3) {
			case 1:
				printf("Introduzca cateto: ");
				scanf_s("%f", &cateto1);
				printf("Introduzca el angulo (en grados) que forma con la hipotenusa: ");
				scanf_s("%f", &angulo);
				temp = angulo * 2 * pi / 360;
				angulo = temp;
				hipotenusa = cateto1 / cos(angulo);//la formula por la que se rige este caso
				system("cls");
				printf("El valor de la hipotenusa es: %f\n\n\n", hipotenusa);
				printf("Pulse una tecla para continuar:  ");
				getchar();
				scanf_s("%c", &continuar);
				system("cls");
				break;
			case 2:
				printf("Introduzca hipotenusa: ");
				scanf_s("%f", &hipotenusa);
				printf("Introduzca el angulo (en grados) que forma con el cateto: ");
				scanf_s("%f", &angulo);
				temp = angulo * 2 * pi / 360; //paso de grados a radianes ya que los operadores trigonometricos...
				angulo = temp; //...funcionan solo con un argumento en radianes
				cateto2 = cos(angulo)*hipotenusa;//la formula por la que se rige este caso
				system("cls");
				printf("El valor de el cateto es: %f\n\n\n", cateto2);
				printf("Pulse una tecla para continuar:  ");
				getchar();
				scanf_s("%c", &continuar);
				system("cls");
				break;
			case 3:
				printf("Introduzca hipotenusa: ");
				scanf_s("%f", &hipotenusa);
				printf("Introduzca el angulo (en grados) que forma con el cateto: ");
				scanf_s("%f", &angulo);
				temp = angulo * 2 * pi / 360;
				angulo = temp;
				cateto2 = sin(angulo)*hipotenusa;//la formula por la que se rige este caso
				system("cls");
				printf("El valor de el cateto es: %f\n\n\n", cateto2);
				printf("Pulse una tecla para continuar:  ");
				getchar();
				scanf_s("%c", &continuar);
				system("cls");
				break;
			default:
				printf("Mal\n");
				printf("Pulse una tecla para continuar:  ");
				getchar();
				scanf_s("%c", &continuar);
				system("cls");
			}
			break;
		default:
			printf("Mal\n");
			printf("Pulse una tecla para continuar:  ");
			getchar();
			scanf_s("%c", &continuar);
			system("cls");

			break;
		}
	} while (i = 1);//bucle infinito
	system("pause");
}