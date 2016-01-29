/*
 ============================================================================
 Name        : goteras216.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Goteras
  Con la llegada de las lluvias, has descubierto una molesta gotera en el sal�n. Con precisi�n
  suiza, las gotas caen una vez por segundo desde el techo hasta un improvisado cubo que te ves
  obligado a vaciar peri�dicamente hasta que encuentres una soluci�n.

  Convivir con una gotera es complicado porque tienes que sincronizar tu vida alrededor de los
  vaciados del cubo�

  Entrada
  La entrada estar� compuesta de un primer n�mero indicando cu�ntos casos de prueba vendr�n a
  continuaci�n.

  Cada caso de prueba ser� un n�mero mayor que cero con el n�mero de gotas que entran en el cubo.
  Salida
  Para cada caso de prueba, el programa escribir� en una l�nea el tiempo m�ximo que puedes estar
  sin cambiar el cubo en el formato HH:MM:SS, donde HH indica el n�mero de horas, MM el n�mero de
  minutos y SS el n�mero de segundos.

  Ning�n cubo es tan grande como para poder estar m�s de un d�a completo sin cambiarse.

  Entrada de ejemplo
  3
  70
  3600
  3661
  Salida de ejemplo
  00:01:10
  01:00:00
  01:01:01
  ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int vueltas, gotas;
	scanf("%d", &vueltas);
	while(vueltas>0){
		//  hora: 3600seg minuto: 60seg
		scanf("%d", &gotas);
		printf("%02d:%02d:%02d\n", gotas / 3600, (gotas % 3600) / 60, (gotas % 3600) % 60 );
	vueltas--;
	}
	return EXIT_SUCCESS;
}
