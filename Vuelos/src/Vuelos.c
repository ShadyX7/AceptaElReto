/*
 * VUELOS
 * Realizado por Jose Pino Asenjo
 * 29/01/15
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf (stdout, NULL);

	int timeZoneOrigen;
	int timeZoneDestino;
	int duracionVueloHoras;
	int duracionVueloMinutos;
	int horaSalidaHoras;
	int horaSalidaMinutos;

	int auxiliar1;
	int auxiliar2;
	int totalAuxiliares;
	int auxiliarHoras;
	int auxiliarMinutos;

	int diferencia;



	printf("Introduce time zone de origen");
	scanf("%d", &timeZoneOrigen);

	printf("Introduce time zone de destino");
	scanf("%d", &timeZoneDestino);

	printf("Introduce la duracion del vuelo");
	scanf("%d:%d", &duracionVueloHoras, &duracionVueloMinutos);

	printf("Introduce la hora de salida");
	scanf("%d:%d", &horaSalidaHoras, &horaSalidaMinutos);

	auxiliar1 = (horaSalidaHoras + duracionVueloHoras) * 60; //LAS HORAS LAS PASO A MINUTOS
	auxiliar2 = duracionVueloMinutos + horaSalidaMinutos; //SUMA DE MINUTOS
	totalAuxiliares = auxiliar1 + auxiliar2; //SUMA DE LAS 2 ANTERIORES (MINUTOS)

	auxiliarHoras = totalAuxiliares / 60; 	//
	auxiliarMinutos = totalAuxiliares % 60; //DEL TOTAL DE MINUTOS OBTENGO LAS HORAS CON MINUTOS

	diferencia = timeZoneDestino - timeZoneOrigen;

	auxiliarHoras+= diferencia;

	if (auxiliarHoras > 23)
	{
		auxiliarHoras -=24;
		printf("\nHora de llegada: %02d:%02d (+1)", auxiliarHoras,  auxiliarMinutos);
	}
	else
		printf("\nHora de llegada: %02d:%02d", auxiliarHoras,  auxiliarMinutos);
}
