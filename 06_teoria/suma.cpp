#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int resultado = 0

    for (int i=1; < argc; i++)
	resultado += atoi ( argv [i]);

    printf ("el resultado es = %i", resultado ");

    return EXIT_SUCCESS;
}
