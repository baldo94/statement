#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *dedo;
    char cosas;
    bool dentro_de_comentarios = false;

    if (argc <2){
	printf("uso: comments <fichero>\n");
	return EXIT_FAILURE
}

    if (dedo = fopen (argv[1], "r"))= NULL ){
	perror("fopen");
	return EXIT_FAILURE;
    }

    while ( (cosas =fgetc(dedo)) != EOF){
        if (letra == '#')
	    dentro_de_comentarios = true;
	if (cosas == '\n')
	    dentro_de_comentarios = false;
    }

   fclose(dedo);


    return EXIT_SUCCESS;
}
