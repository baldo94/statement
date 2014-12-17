#include <stdio.h>
#include <stdlib.h>

#define n 24
#define sueldo 1000

int main(int argc, char *argv[]) { 
    int numero[24]; // Declarar una variable que tiene 24 variables dentro.
                    // Se llaman numero[0], numero[1], numero[2]
		    // La última numero[23]

    for(int i=0; i<24; i++) { // Repite 24 veces y en cada vuelta i cambia desde 0 hasta 23 ambos incluidos
	numero[i] = 100;
	printf("numero[%i] => %i\n" , i, numero[i]);
    }

    return EXIT_SUCCESS;
}
