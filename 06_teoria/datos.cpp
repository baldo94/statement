#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 
    FILE *pf;//FILE y * son un indicador
    char letra;// char esta declarando la variable letra 
    pf = fopen("portada.txt", "r");// el indicador pf es igual a abrir el fichero portada.txt 

    if(pf == NULL){ //si el indicador tiene el fichero va a mostrarlo....
	fprintf(stderr, "No se puede abrir el fichero.\n");//si no existe el fichero imprime "no se puede abrir el fichero...
	return EXIT_FAILURE;
    }

    while( (letra = fgetc(pf)) != EOF ){//coge el indicador "pf", ponlo en la variable letra i es distinto de 4(que significa fianl del fichero) coge de la tuberia letra y muestralo.
	putchar(letra);
    }
    fclose(pf);

    return EXIT_SUCCESS;
}
