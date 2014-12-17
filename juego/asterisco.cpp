#include <stdio.h>
#include <stdlib.h>
#define C 9
#define L C
int main(int argc, char *argv[]) {

    for(int fila=0; fila<L; fila++){
	for ( int columna=0; columna<C; columna++)
	    if (fila==0 || fila== L-1 || columna ==0 || columna == C-1 ||fila == columna || fila + columna == C-1  ) 
		printf("*");
	    else
		printf(" ");
	printf("\n");

    }
    return EXIT_SUCCESS;
}
