/*
 ============================================================================
 Name        : entradas221.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 Entrada
 La entrada comenzar� con un n�mero que indica el n�mero de casos de prueba que
 aparecen a continuaci�n.
 Cada caso de prueba se compone de dos l�neas, la primera de ellas tiene un �nico
 entero con el n�mero de vecinos esperando en la fila (como mucho 10.000), mientras
 que la segunda l�nea contiene el n�mero de butaca a la que va cada uno de ellos. El
 primer vecino en la cola aparece el primero en la l�nea.

 Salida
 Por cada caso de prueba aparecer� una l�nea independiente indicando si Ramiro
 puede habilitar la segunda puerta o no. En caso afirmativo aparecer� la palabra SI
 seguida del n�mero de gente que se quedar� en su puerta. Si la fila no cumple la
 condici�n impuesta por Ramiro, se escribir� NO.

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
