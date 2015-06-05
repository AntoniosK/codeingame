#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor does not follow your orders.
 **/
 
 //#DEFINE FALSE = 0
 //#DEFINE TRUE = 1
 
int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    int TX;
    int TY;
    char move_x;
    char move_y;
    scanf("%d%d%d%d", &LX, &LY, &initialTX, &initialTY);

    TX = initialTX;
    TY = initialTY;
    
    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        scanf("%d", &E);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        if (TX == LX) { 
            move_y = 0;
             
        } 
        else if (TX < LX) {
            move_y = 'E';
            TX = TX + 1;
        } 
        else {
            move_y = 'W';
            TX = TX - 1;
        }
        
        if (TY == LY) { 
            move_x = 0;
        } 
        else if (TY < LY) {
            move_x = 'S';
            TY = TY + 1;
        } else {
            move_x = 'N';
            TY = TY - 1;
        }
        
        if (!move_x) {
            printf("%c\n", move_y);
        }
        
        if (!move_y) {
            printf("%c\n", move_x);
        }

        if (move_x && move_y) {
            printf("%c%c\n", move_x, move_y);
        } 
        // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
