/*
 ============================================================================
 Name        : CaudalMaximo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	setbuf (stdout, NULL);

	int seccion;

	printf("¿Como es la seccion? Triangular(1) | Rectangular(2) | Trapezoidal(3)");
	scanf("%d", &seccion);

	if (seccion == 1)
	{
		double caudal;
		double z; //TALUD
		double y; //CALADO/PROFUNDIDAD
		double j; //PENDIENTE 1% = 0.01
		double n; //COEFICIENTE DE RUGOSIDAD DE MANNING

		printf("Introduce el talud");
		scanf("%lf", &z);

		printf("Introduce el calado");
		scanf("%lf", &y);

		printf("Introduce la pendiente");
		scanf("%lf", &j);

		printf("Introduce coeficiente de rugosidad");
		scanf("%lf", &n);

		caudal = ( ( z * pow(y, 2) ) * ( pow(z * y / (2 * sqrt(1 + pow(z, 2))), 0.666) ) * pow(j, 0.5) ) / n;

		printf("%f", caudal);
	}



	return EXIT_SUCCESS;
}
