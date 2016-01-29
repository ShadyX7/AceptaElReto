/*
 ============================================================================
 Name        : lyren.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : N�meros de Lychrel
Cuando se aburren, los aficionados a las matem�ticas se dedican a jugar con los n�meros.
Eso les lleva, por ejemplo, a coger cualquier n�mero, darle la vuelta y sumarlo a s�
mismo, repitiendo el proceso una y otra vez hasta dar con un n�mero capic�a. Por
ejemplo, para el 91 llegamos a un capic�a en s�lo dos pasos:

91 + 19 = 110
110 + 011 = 121

Algunos n�meros se resisten a alcanzar un capic�a. El 196 es el n�mero m�s peque�o
para el que no se ha llegado a ninguno, por m�s que se ha intentado. Los matem�ticos
 no han podido demostrar que, efectivamente, no vaya a llegarse a uno. Mientras
 contin�an buscando una demostraci�n, los aficionados siguen sumando y sumando
 con la esperanza de llegar a �l. Los n�meros con los que, se sospecha, no puede
 alcanzarse un capic�a se conocen como n�meros de Lychrel. Curiosamente, algunos
 n�meros capic�a parecen ser tambi�n n�meros de Lychrel.

Entrada
La entrada comienza con un n�mero indicando la cantidad de casos de prueba que
vendr�n a continuaci�n. Cada caso de prueba estar� compuesto de un
n�mero 1 mayor n mayor 100.000.

Salida
Para cada caso de prueba n, el programa deber� indicar el n�mero de iteraciones
 que hay que dar hasta llegar a un n�mero capic�a, seguido del n�mero capic�a
  alcanzado. Si durante el proceso se llega a un n�mero mayor que 1.000.000.000,
  se deber� asumir que el capic�a no es alcanzable y escribir "Lycrhel?"1.

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
