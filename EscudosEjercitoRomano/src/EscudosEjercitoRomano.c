/*
 * ESCUDOS DEL EJERCITO ROMANO
 * Realizado por Jose Pino Asenjo
 * 24/02/15
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	setbuf (stdout, NULL);

	int legionarios = 1;

	while (legionarios > 0)

	{
		scanf("%d", &legionarios);

		if (legionarios == 0) { break; } //SI LOS LEGIONARIOS INTRODUCIDOS SON 0 SE DETIENE LA EJECUCION

		int numLegionarios = legionarios;
		int escudos = 0;
		int raizCuadrada = 0;

		while (numLegionarios > 0)
		{
			raizCuadrada = sqrt(numLegionarios);
			escudos = (raizCuadrada * raizCuadrada) + (raizCuadrada * 4) + escudos; // (AREA = LADO * LADO) + (PERIMETRO = 4 * LADO)
			numLegionarios = numLegionarios - (raizCuadrada * raizCuadrada);
		};

		printf("%d\n", escudos);
	}

	return EXIT_SUCCESS;
}
