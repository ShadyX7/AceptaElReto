/*
 * LOS PROBLEMAS DE SER RICO
 * Realizado por Jose Pino Asenjo
 * 12/02/15
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf (stdout, NULL);

	int casos = 0;
	int compartimentos = 0;
	int compartimentoGrande = 0;
	int diferenciaCompartimentos = 0;


	scanf("%d", &casos);

	int i;


	scanf("%d %d %d", &compartimentos, &compartimentoGrande, &diferenciaCompartimentos);



	int resultado = 0;

	int contador = 1;

	resultado = compartimentoGrande;

	while (contador < compartimentos)
	{
		compartimentoGrande = compartimentoGrande - diferenciaCompartimentos;
		resultado = resultado + compartimentoGrande;
		contador++;
	}
	printf("%d\n", resultado);



	return EXIT_SUCCESS;
}
