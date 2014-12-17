#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   double resultado = 0;

   for( int i=1; i<argc; i++)
      resultado += atof(argv[i]);

  printf("la suma es: %2.lf\n", resultado); 
	
    return EXIT_SUCCESS;
}
