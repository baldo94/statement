#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    int tablero[8][8] = {
        { 0, 0, 0, 0,0, 0, 0 ,0},
	{ 0, 0, 0, 0,0, 0, 0 ,0},
        { 0, 0, 0, 1,0, 1, 0 ,0},
	{ 0, 0, 0, 0,0, 0, 1 ,0},
	{ 0, 1, 0, 0,0, 0, 1 ,1},
        { 0, 0, 0, 0,0, 0, 1 ,0},
        { 0, 1, 0, 0,0, 0, 0 ,0},
        { 0, 1, 0, 0,0, 0, 0 ,0},
    };
    int x, y;
   

    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);
    if (tablero[x + 2][y + 1] ||tablero[x + 2][y - 1] || tablero[x +1][y +2]|| tablero[x +2][y -1]||tablero[x -2][y +1]||tablero[x -2][y +1]||tablero[x -1][y -2]||tablero[y -2][y +1])
      
    printf("comida facil");
   else
    printf("no me vas a comer");

    return EXIT_SUCCESS;
}
