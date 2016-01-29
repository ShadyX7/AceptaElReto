/*
 ============================================================================
 Name        : tickettempo213.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : so sí, para evitar morir de éxito y que la piscina termine plagada
  de bañistas quejándose por la falta de espacio, han decidido añadir una clausul
 que dice "el uso del abono está limitado a 15 días dentro de cualquier periodo de
  20 días consecutivos". Es decir que al ir a entrar a la piscina comprueban antes
   tu registro de los últimos 20 días y si ya has ido 15, no te dejan pasar.

Como propietario de una casa sin piscina privada, te estás planteando comprar
 el abono de una de las piscinas que tienes cerca de casa. Ahora te toca
 determinar, para cada una de las ofertas, cuántos días podrías ir a esa
  piscina si te compras el abono justo antes de que comience la temporada.

Entrada
Cada caso de prueba contiene la información de una oferta constituida por
tres enteros: el número de días que tiene la temporada (T), la longitud del
periodo (P) y el número máximo de días de uso durante ese periodo (D).
Se garantiza que 1 mayorigual D mayorigual P mayorigual T.

Los casos de prueba terminan con una línea con los tres ceros, que no
debe procesarse.

Salida
Para cada caso de prueba se mostrará una única línea con el número de
 días como máximo que se podrá ir a la piscina en toda la temporada.

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
