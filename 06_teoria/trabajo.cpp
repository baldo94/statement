#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *dedo;
    char cosas;

    dedo= fopen("mostrador.dan", "r");

    if (dedo == NULL ){
	fprintf(stderr, "no tienes fichero. \n");
	return EXIT_FAILURE;
    }

    while ( (cosas =fgetc(dedo)) != EOF){
          putchar(cosas);
    }

   fclose(dedo);


    return EXIT_SUCCESS;
}
