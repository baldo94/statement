#include <stdio.h>
#include <stdlib.h>
#define C 9
#define L C
int main(int argc, char *argv[]) {
int numeros=0; 

    for(int fila=0; fila<L; fila++){
	for ( int columna=0; columna<C; columna++)
	 
		printf("%i ", numeros ++);
	printf("\n");

    }
    return EXIT_SUCCESS;
}
