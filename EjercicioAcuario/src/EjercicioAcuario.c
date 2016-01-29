/*
 ============================================================================
 Name        : EjercicioAcuario.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int casos,espacios,capacidad,resto;
	//printf("Introduce el numero de casos");
		scanf("%d",&casos);
	while (casos > 0){
	//printf("Introduce el numero de espacios del acuario ");
		scanf("%d",&espacios);
	//printf("Introduce la capacidad total del acuario ");
		scanf("%d",&capacidad);
	//printf("Introduce el espacio que hay entre los compartimentos ");
		scanf("%d",&resto);

		//Calculo de litros de agua que se necesitan para llenar el acuario
	int i, litros=0;
	for ( i=0; i < espacios; i++) {
		capacidad=(capacidad-resto);
		litros=litros+capacidad;


	}litros=litros+(resto*espacios);
	printf("%d\n",litros);
	casos--;


	}


}


