/*
 ============================================================================
 Name        : tickettempo213.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : so s�, para evitar morir de �xito y que la piscina termine plagada
  de ba�istas quej�ndose por la falta de espacio, han decidido a�adir una clausul
 que dice "el uso del abono est� limitado a 15 d�as dentro de cualquier periodo de
  20 d�as consecutivos". Es decir que al ir a entrar a la piscina comprueban antes
   tu registro de los �ltimos 20 d�as y si ya has ido 15, no te dejan pasar.

Como propietario de una casa sin piscina privada, te est�s planteando comprar
 el abono de una de las piscinas que tienes cerca de casa. Ahora te toca
 determinar, para cada una de las ofertas, cu�ntos d�as podr�as ir a esa
  piscina si te compras el abono justo antes de que comience la temporada.

Entrada
Cada caso de prueba contiene la informaci�n de una oferta constituida por
tres enteros: el n�mero de d�as que tiene la temporada (T), la longitud del
periodo (P) y el n�mero m�ximo de d�as de uso durante ese periodo (D).
Se garantiza que 1 mayorigual D mayorigual P mayorigual T.

Los casos de prueba terminan con una l�nea con los tres ceros, que no
debe procesarse.

Salida
Para cada caso de prueba se mostrar� una �nica l�nea con el n�mero de
 d�as como m�ximo que se podr� ir a la piscina en toda la temporada.

Entrada de ejemplo
30 20 15
25 20 15
0 0 0
Salida de ejemplo
25
20
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int temporada, periodo, dias;
	scanf("%d %d %d", &temporada, &periodo, &dias);
    while((dias > 0)&&(periodo>0)&&(temporada>0)){
         int sobran = temporada % periodo;
	     int diasEnPeriodo = (temporada / periodo) * dias;
	     printf("%d\n", diasEnPeriodo + sobran);
	     //vuelve a leer los datos
         scanf("%d %d %d", &temporada, &periodo, &dias);
    }
	 return EXIT_SUCCESS;
}
