//Wenqiang Wang

#include <stdio.h>

int main() {
    float masa1, masa2, distancia, fuerza;
    const float G= 6.674e-11f;
    printf("Este es un progrma qu te calcular el modulo de la fuerza gravitatoria entre dos masas\n");
    getchar();
    printf("Introduce la masa del primer objeto en Kg:");
    scanf("%f",&masa1);
    printf("Introduce la masa del segundo objeto en Kg:");
    scanf("%f",&masa2);
    printf("Introduce la distancia entre las dos masas en metro:");
    scanf("%f",&distancia);
    fuerza =masa1*masa2*G/(distancia*distancia);
    if (fuerza > 5e-7f)
    {
        printf("El modulo de la fuerza= %f N\n",fuerza);
    }
    else
    {
        printf("El modulo de la fuerza es despreciable(menor que 5*10^-7)\n");
    }
    getchar();
    return 0;
}

