/*
 ============================================================================
 Name        : UltimoDígitoFactorial.c
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
	setbuf (stdout, NULL);

	int casosPrueba = 0;
	int i;

	scanf("%d", &casosPrueba);

	for (i = 0; i < casosPrueba; i++)
	{
		int factorial = 0;
		scanf("%d", &factorial);

		switch(factorial)
		{
		case 1: case 0: printf("\n1"); break;
		case 2: printf("\n2"); break;
		case 3: printf("\n6"); break;
		case 4: printf("\n4"); break;
		default: printf("\n0");
		}
	}
	return EXIT_SUCCESS;
}
