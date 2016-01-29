/*
 ============================================================================
 Name        : lyren.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Números de Lychrel
Cuando se aburren, los aficionados a las matemáticas se dedican a jugar con los números.
Eso les lleva, por ejemplo, a coger cualquier número, darle la vuelta y sumarlo a sí
mismo, repitiendo el proceso una y otra vez hasta dar con un número capicúa. Por
ejemplo, para el 91 llegamos a un capicúa en sólo dos pasos:

91 + 19 = 110
110 + 011 = 121

Algunos números se resisten a alcanzar un capicúa. El 196 es el número más pequeño
para el que no se ha llegado a ninguno, por más que se ha intentado. Los matemáticos
 no han podido demostrar que, efectivamente, no vaya a llegarse a uno. Mientras
 continúan buscando una demostración, los aficionados siguen sumando y sumando
 con la esperanza de llegar a él. Los números con los que, se sospecha, no puede
 alcanzarse un capicúa se conocen como números de Lychrel. Curiosamente, algunos
 números capicúa parecen ser también números de Lychrel.

Entrada
La entrada comienza con un número indicando la cantidad de casos de prueba que
vendrán a continuación. Cada caso de prueba estará compuesto de un
número 1 mayor n mayor 100.000.

Salida
Para cada caso de prueba n, el programa deberá indicar el número de iteraciones
 que hay que dar hasta llegar a un número capicúa, seguido del número capicúa
  alcanzado. Si durante el proceso se llega a un número mayor que 1.000.000.000,
  se deberá asumir que el capicúa no es alcanzable y escribir "Lycrhel?"1.

Entrada de ejemplo
4
91
196
4994
5445

Salida de ejemplo
2 121
Lychrel?
Lychrel?
4 79497
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int vueltas;
	scanf("%d", &vueltas);
	while(vueltas>0){
	 int numer;
	 scanf("%d", &numer);
	 int suma = numer;
	 int rescapi = 0;
	 int comprobacion = 0;
	 while(suma < 1000000000 || rescapi==1 ){
		//suma vuelta.
		 comprobacion++;
		 int invertido = invertir(suma, 0);
	    //prueba si es capicua
		 rescapi = compara(suma, invertido);
		 if(rescapi==0)// y si no, le suma el resto
			 suma = suma + invertido;

	 }

	 if(rescapi==1)
		 printf("%d %d", comprobacion, suma);
	 else
		 printf("Lychrel?");

	 vueltas--;
	}
	return EXIT_SUCCESS;
}

int invertir(int numero, int resto){
	if(numero==0)
		return resto;
	else
		return invertir(numero/10, resto * 10 + (numero % 10));
}

int compara(int numero, int numero2){
	if(numero > 10 && (numero == numero2))
		return 1;
	else{
		if(numero % 10 == numero2 % 10)
			return compara(numero % 10, numero2 % 10);
		else
			return 0;
	}
}
