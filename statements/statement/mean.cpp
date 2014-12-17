
//++++++++++++++++++++++++++++++++++++++++++++++++++
//usuario: Baldito López			   +
//Versión: 1.0                      		   +
//Clase: DAM 3D                                    +
//++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
    int resultado=0;

    for(int i=1; i<argc; i++)
	resultado+= atoi(argv[i]);
    printf("la media es: %i\n ", resultado/(argc-1));
        

        return EXIT_SUCCESS;
}

