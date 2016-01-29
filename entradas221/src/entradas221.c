/*
 ============================================================================
 Name        : entradas221.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 Entrada
 La entrada comenzará con un número que indica el número de casos de prueba que
 aparecen a continuación.
 Cada caso de prueba se compone de dos líneas, la primera de ellas tiene un único
 entero con el número de vecinos esperando en la fila (como mucho 10.000), mientras
 que la segunda línea contiene el número de butaca a la que va cada uno de ellos. El
 primer vecino en la cola aparece el primero en la línea.

 Salida
 Por cada caso de prueba aparecerá una línea independiente indicando si Ramiro
 puede habilitar la segunda puerta o no. En caso afirmativo aparecerá la palabra SI
 seguida del número de gente que se quedará en su puerta. Si la fila no cumple la
 condición impuesta por Ramiro, se escribirá NO.

 Entrada de ejemplo
 2
 10
 2 4 6 8 10 1 3 5 7 9
 5
 6 2 3 0 1
 Salida de ejemplo
 SI 5
 NO
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int vueltas = 0;
	scanf("%d", &vueltas);
	while (vueltas>0){
		int cuantos, i, totalPares = 0, si = 1, entrada = 0, impares = 0;;

		scanf("%d", &cuantos);
		for (i = 0; i < cuantos; ++i){
			scanf("%d", &entrada);
			if(impares==0){
				if(entrada % 2 == 0){
					totalPares++;
				}else{
					impares=1;
				}
			}else{
				if(entrada % 2 == 0)
					si = 0;
			}
		}

		if(si==1){
			printf("SI %d\n", totalPares);
		}else{
			printf("NO\n");
		}

	vueltas--;
	}
	return EXIT_SUCCESS;
}
