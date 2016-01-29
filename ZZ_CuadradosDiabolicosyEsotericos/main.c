/* 
 * File:   main.c
 * Author: DAM1
 *
 * Created on 5 de marzo de 2015, 9:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    setbuf(stdout, NULL);
    int lado;
    do {
        scanf("%d", &lado);
        if (lado != 0) {
            int i;
            int cuadrado[lado][lado];
            for (i = 0; i < lado; i++) {
                int j;
                for (j = 0; j < lado; j++) {
                    scanf("%d", &cuadrado[i][j]);
                }
            }
            
            int cm$1 = 0, cm$2 = 0, cm$3 = 0;
            for (i = 0; i < lado; i++) {
                cm$1 += cuadrado[0][i];
                cm$2 += cuadrado[i][i];
                cm$3 += cuadrado[i][0];
            }

            int c1 = 0, c2 = 0, c3 = 0, comprobacion = 1;
            if (cm$1 == cm$2 && cm$1 == cm$3) {


                for (i = 1; i <= lado * lado; i++) {
                    int j;
                    for (j = 0; j < lado; j++) {
                        int k;
                        for (k = 0; k < lado; k++) {
                            if (cuadrado[j][k] == i) {
                                comprobacion++;
                                break;
                            }
                        }
                        if (comprobacion == i) {
                            break;
                        }
                    }
                }
                if (comprobacion == lado * lado) {
                    c1 = 1;
                    int cm2$1 = cuadrado[0][0]
                            + cuadrado[lado - 1][0]
                            + cuadrado[0][lado - 1]
                            + cuadrado[lado - 1][lado - 1];
                    if (cm2$1 == (4 * cm$1) / lado) {
                        c2 = 1;
                        int cm2$2, cm2$3;
                        if (lado % 2 != 0) {
                            int pos = (int)lado/2;
                            cm2$2 = cuadrado[pos][0] +
                                    cuadrado[0][pos] +
                                    cuadrado[pos][lado-1] +
                                    cuadrado[lado-1][pos];
                            cm2$3 = cuadrado[pos][pos] * 4;
                        } else {
                            cm2$2 = (cuadrado[lado / 2][0] +
                                    cuadrado[0][lado / 2] +
                                    cuadrado[lado / 2][lado-1] +
                                    cuadrado[lado-1][lado / 2] +
                                    cuadrado[lado / 2 - 1][0] +
                                    cuadrado[0][lado / 2 - 1] +
                                    cuadrado[lado / 2 - 1][lado-1] +
                                    cuadrado[lado-1][lado / 2 - 1]) / 2;
                            
                            cm2$3 = cuadrado[lado / 2 - 1][lado / 2 - 1] +
                                    cuadrado[lado / 2][lado / 2 - 1] +
                                    cuadrado[lado / 2 - 1][lado / 2] +
                                    cuadrado[lado / 2][lado / 2];
                        }
                        if (cm2$2 == cm2$1 && cm2$3 == cm2$1) {
                            c3 = 1;
                        }
                    }
                }

                if (c1 == 1 && c2 == 1 && c3 == 1) {
                    printf("ESOTERICO\n");
                } else {
                    printf("DIABOLICO\n");
                }

            } else {
                printf("NO\n");
            }

        }

    } while (lado != 0);
    return (EXIT_SUCCESS);
}

