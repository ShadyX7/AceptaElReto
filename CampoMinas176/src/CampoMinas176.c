/*
 ============================================================================
 Name        : CampoMinas176.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
setbuf(stdout, NULL);
 int i;int j;
 int X=0; int Y=0;
 	 scanf("%d",&X);
 	 scanf("%d",&Y);

while(X!=0 && Y!=0){
 char operadores[X][Y];
 	 if(X<3 && Y<3){
 		 for(i=0;i<X;i++)

 		 {
 		 scanf(" %[^\n]",operadores[i]);
 		 }

 printf("%d\n", 0);
 	 scanf("%d", &X);
 	 scanf("%d", &Y);
 	 	 	 }else{

 	 	 		 for(i=0;i<X;i++)
 	 	 		 {

 	 	 			 scanf(" %[^\n]",operadores[i]);
 	 	 		 }


 int posicionbombas = 0;
 for(i=1;i<X-1;i++)
 {

	 int posicionsinbombas;
	 for(j=1;j<Y-1;j++)
	 {
		posicionsinbombas = 0;
		if(operadores[i][j]=='-'){
		if(operadores[i-1][j-1]=='-')
		posicionsinbombas++;
		if(operadores[i-1][j+1]=='-')
		posicionsinbombas++;
		if(operadores[i-1][j]=='-')
		posicionsinbombas++;
		if(operadores[i][j+1]=='-')
		posicionsinbombas++;
		if(operadores[j-1][i]=='-')
		posicionsinbombas++;
		if(operadores[i+1][j-1]=='-')
		posicionsinbombas++;
		if(operadores[i+1][j+1]=='-')
		posicionsinbombas++;
		if(operadores[i+1][j]=='-')
		posicionsinbombas++;
		if(posicionsinbombas<3)
		posicionbombas++;
		 	 	 	 	 	 	 }
	 }
 }

 printf("%d\n", posicionbombas);
 scanf("%d", &X);
 scanf("%d", &Y);
 }
 }

return 0;
}
