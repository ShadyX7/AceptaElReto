/*
 ============================================================================
 Name        : ascensor156.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int pisoActual = 0;
	int nuevoPiso = 0;
	int totalRecorrido = 0;
	scanf("%d", &pisoActual);
	while((pisoActual != -1)&&(nuevoPiso != -1)){
		scanf("%d", &nuevoPiso);
		totalRecorrido = totalRecorrido + abs(pisoActual - nuevoPiso);
		pisoActual = nuevoPiso;
		if(pisoActual==-1){
			printf("%d", totalRecorrido);
			totalRecorrido = 0;
		}
		scanf("%d", &nuevoPiso);
	}
	return EXIT_SUCCESS;
}
