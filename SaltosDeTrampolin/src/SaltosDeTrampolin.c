/*
 ============================================================================
 Name        : SaltosDeTrampolin.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saltos = 0;

	scanf("%d", &saltos);

	double notas[7];
	int i;

	for(i=0; i<saltos;i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf %lf", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4], &notas[5], &notas[6]);

		int j;
		for (j=0; j<sizeof(notas)/sizeof(double); j++ )
		{
			int k;

			for (k=j+1; k<sizeof(notas)/sizeof(double); k++)
			{
				if (notas[k] < notas[j])
				{
					double aux = notas[j];
					notas[j] = notas[k];
					notas[k] = aux;
				}
			}
		}
		double resultado = (notas[2]+notas[3]+notas[4]) * 2;
		printf("%.0f\n",resultado);
	}


	return EXIT_SUCCESS;
}
