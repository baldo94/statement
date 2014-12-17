#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]) { 
    int sueldo[N];


    for(int i=0; i<N; i++)
	sueldo[i] = 2*i;
 
    for(int i=0; i<N; i++)
	 printf("═");
	printf("+\n");

    for(int i=0; i<N; i++)
	printf("| %i ", sueldo[i]);
    printf("|\n");

    for(int i=0; i<N; i++)
	printf("+---");
    printf("+\n");



    return EXIT_SUCCESS;
}
