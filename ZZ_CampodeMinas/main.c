/* 
 * File:   main.c
 * Author: DAM1
 *
 * Created on 17 de marzo de 2015, 13:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    setbuf(stdout, NULL);
    int col, fil;
    do{
        scanf("%d %d", &col, &fil);
        char campo[fil][col];
        int i;
        for (i=0; i<fil; i++){
            scanf("%s",campo[i]);
        }
        int j;
        for(j=0; j<fil; j++){
            for(i=0; i<col; i++){
                printf("%s", campo[i][j]);
            }
            printf("\n");
        }
    }while(col!=0);
    return (EXIT_SUCCESS);
}

