#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int rojo, amarillo, azul;

    printf("que color ves?\n");

    printf("tu color tiene rojo (1=si/0=no) ?");
    scanf("%i", &rojo);

    printf("tu color tiene amarillo (1=si/0=no) ?");
    scanf("%i", &amarillo);

    printf("tu color tiene azul (1=si/0=no) ?");
    scanf("%i", &azul);

    if (rojo)
	if (amarillo)
	    if (azul)
		printf("blanco");

             else
		 printf("naranja");
         else 
	     if (azul)
		 printf ("morado");
              else
		  printf ("rojo");
      else 
	  if(amarillo)
	      if (azul)
		  printf("verde");
              else
		  printf ("amarillo");
      else
	  if(azul)
	      printf("azul");
          else
	      printf("negro");
      printf("\n");

    return EXIT_SUCCESS;
}
