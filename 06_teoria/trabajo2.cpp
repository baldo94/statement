#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *dedo;
    char cosas;
    bool dentro_de_comentarios = false;
}
    dedo = fopen("mostrador.dan", "r");

    if (dedo == NULL ){
	fprintf(stderr, "no tienes fichero. \n");
    
	return EXIT_FAILURE;
    }

    while ( (cosas =fgetc(dedo)) != EOF){
	  if ((cosas == '#')
	       dentro_de_comentarios = true;
          if (cosas == '\n')
	          dentro_de_comentarios= false;
	
	  if (!dentro_de_comentarios)	  
              putchar(cosas);

    }

   fclose(dedo);


    return EXIT_SUCCESS;
}
