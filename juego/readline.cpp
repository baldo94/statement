#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char *argv[]) { 

    char *line;

    line = readline ("dime tu nombre: ");
    printf ("y te hare reina"
	   " de un jardin de rosas, %s\n", line);
    free(line);
    return EXIT_SUCCESS;
}
