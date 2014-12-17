#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
    char nombre[7];

    fgets(nombre , sizeof(nombre), stdin);
    printf("hola, ");
    puts(nombre);

    return EXIT_SUCCESS;
}
