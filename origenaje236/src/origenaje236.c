/*
 ============================================================================
 Name        : origenaje236.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :

1 1 10
1 2 3
3 2 3
0 0 0

Salida de ejemplo
10
7
21
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0; //primer cifra
	int b = 0; //cuanto multiplica
	int c = 0; //numero casillas

	scanf("%d %d %d", &a, &b, &c);
	while(a > 0 || b > 0 || c > 0){
		long final = 0;
		long actual = a;
		int i;
		for (i = 1; i <= c; ++i) {
			final = final + actual;
			actual = actual * b;
		}

	printf("%ld\n", final);
	scanf("%d %d %d", &a, &b, &c);
	}
	return EXIT_SUCCESS;
}
