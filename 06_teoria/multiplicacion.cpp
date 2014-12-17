#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   double resultado = 1 ;//declro con "double" numeros reales

   for (int i=1 ; i<argc; i++)//desde "for" si "i" es menor que los "argc" sumo los valores de i.
          resultado *= atof (argv[i]);//elresultado multiplico todos los "i"

   printf("la multiplicacion es: %.2lf\n", resultado); // muestrame lamultiplicacion con un load float y un salto de linea.
	
    return EXIT_SUCCESS;
}
