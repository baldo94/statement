#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    char texto[] = "dabale arroz a la zorra el abad";
   // const char *texto = "hola";
    char *p = (char *) texto;
   
    while(*p != '\0')
	p++;

    while( p-- > texto)
	printf("%c", *--p);
    printf("\n");

    sizeof(lista) / sizeof(

    return EXIT_SUCCESS;
}
