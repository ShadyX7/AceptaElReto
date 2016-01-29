/*
 ============================================================================
 Name        : minas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i, j;
	int filas = 0;
	int columnas = 0;
	scanf("%d %d", &filas, &columnas);
while(filas != 0 && columnas != 0){
	char datos[filas][columnas];

	//Recoleccion de datos
	for(i=0;i<filas;i++)
	{
	    //Cada una de las filas
	    scanf(" %s", datos[i]);
	}

	//For que recorre todas las filas, posicion por posicion
	//pero quitando los bordes (inicio en 1 de i y j y -1 en
	//filas y columnas)
	int casillaBienRodeada = 0;
	for(i=1;i<filas-1;i++)
	{
	    //printf("\n");
		int esBomba;
	    for(j=1;j<columnas-1;j++)
	    {
	    	esBomba = 0;
	        //printf("%c",datos[i][j]);
	    	if(datos[i][j]=='-'){
	    		if(datos[i-1][j-1]=='*')
	    			esBomba++;
	    		if(datos[i-1][j]=='*')
	    			esBomba++;
	    		if(datos[i-1][j+1]=='*')
	    			esBomba++;
	    		if(datos[i][j-1]=='*')
	    			esBomba++;
	    		if(datos[i][j+1]=='*')
	    			esBomba++;
	    		if(datos[i+1][j-1]=='*')
	    			esBomba++;
	    		if(datos[i+1][j]=='*')
	    			esBomba++;
	    		if(datos[i+1][j+1]=='*')
	    			esBomba++;
	    		if(esBomba>=6)
	    			casillaBienRodeada++;
	    	}//fin del if si casilla actual es '-'
	    }//fin de recorrer fila
	}//fin de recorrer todas las filas
	printf("%d\n", casillaBienRodeada);
	scanf("%d", &filas);
	scanf("%d", &columnas);

 }

return 0;
}
