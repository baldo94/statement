#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   int opcion;

  char *opciones[]={
       "circulo",
       "cuadrado",
       "triangulo",
  };
  do {
      system("clear");

      system("figlet menu");
      printf("10€\n");
      printf("\n\n\tElige: \n\n");

      for(int i=0; i<sizeof(opciones)/sizeof(char*); i++)
	  printf("%i.- %s.\n", i+1, opciones [i]);

      printf("\nopcion: ");

      scanf("%i", &opcion);
  } while (opcion<1 || opcion>3);

  switch(opcion){
      case 1:
	  printf ("has elegido circulo. \n");
	  break;
      case 2:
	  printf ("has elegido cuadrado. \n");
	  break;
      case 3:
	  printf ("has elegido triangulo. \n");
	  break;
      default:
	  printf ("has elegido ser un gilipollas en esta vida.\n");
	  break;
 
  }
	
    return EXIT_SUCCESS;
}
