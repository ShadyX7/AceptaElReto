/*
 ============================================================================
 Name        : menornum233.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero = 0;
	scanf("%d", &numero);
	while(numero>0){
		if((numero % 9)!= 0 )
			printf("%d", numero % 9);
		int i;
		for (i = 0; numero >= 9; ++i) {
			printf("9");
			numero = numero - 9;
		}
		printf("\n");
		scanf("%d", &numero);
	}

	return EXIT_SUCCESS;
}
