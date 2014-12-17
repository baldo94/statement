#include <stdio.h>  //s=stream>cadena de caracteres <> i=es numero enteros
#include <stdlib.h> //repaso4.vectores.

int main (int argc, char *argv[])  { 
      
    int  r[3],
	 v[3];
    int	 resultado = 0;

	printf("r = (");
	scanf("%i, %i, %i", &r[0], &r[1], &r[2]);

	printf("v = (");
	scanf("%i, %i, %i", &v[0], &v[1], &v[2]);

	for(int i=0; i<3; i++)
	    resultado += r[i] * v[i];

	printf("escalar = %i\n" , resultado);

   
	
    return EXIT_SUCCESS; 
} 
