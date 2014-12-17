
//++++++++++++++++++++++++++++++++++++++++++++++++++
//usuario: Baldito López			   +
//Versión: 1.0                      		   +
//Clase: DAM 3D                                    +
//++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
    int numeros;
    int resultado;
    
    for (int numeros; numeros<1; numeros++){
        printf("dime un numero:\n");
        scanf("%i", &numeros); 
    }
    
    printf("el resultado es: \n", &resultado);
    numeros+=resultado || resultado/numeros;


        return EXIT_SUCCESS;
}

