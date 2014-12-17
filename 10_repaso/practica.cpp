#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 
    char nombre [10];
    int edad;
    int lista [N];

    system("figlet hola usuario");
    printf("dime tu nombre: ");
    scanf(" %s" , nombre);
    printf("%s\n", nombre);

    printf("dime tu edad majo/a:\n");
    scanf(" %i", &edad );
    if ( edad < 18 )
	printf("eres un yogurin\n");
    else
	printf(" %i no eres yogurin\n" , edad );





    return EXIT_SUCCESS;
}
