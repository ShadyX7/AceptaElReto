/*
 ============================================================================
 Name        : Ejer119Soldados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

setbuf(stdout, NULL);
int valor=0, Soldados=0, Escudos=0;
float Resto=0;
scanf("%d",&valor);
while(valor!= 0){
Escudos=0;

while(valor > 3){
	Resto=sqrt(valor);
	Soldados =Resto;
	valor= valor - (Soldados*Soldados);
	Escudos = (Soldados*2) + (Soldados*Soldados);
}
	if(valor > 0){
	Escudos += (valor*2 ) + valor;
}
	printf("%d\n",Escudos);
	scanf("%d", &valor);
}
	return 0;
}
