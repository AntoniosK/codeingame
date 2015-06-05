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
    char move_x[0];
    char move_y[0];
    scanf("%d%d%d%d", &LX, &LY, &initialTX, &initialTY);

    TX = initialTX;
    TY = initialTY;
    
    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        scanf("%d", &E);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        //CAN_MOVE_LEFT = FALSE
        //CAN_MOVE_RIGHT = FALSE
        //CAN_MOVE_UP = FALSE
        //CAN_MOVE_DOWN = FALSE
        
        //TX_RIGHT = TX + 1
        //TX_LEFT = TX - 1
        
        //if (TX_LEFT >= 0)
        //    CAN_MOVE_LEFT = TRUE
        //if (TX_RIGHT < 40)
        //    CAN_MOVE_RIGHT = TRUE
            
        //TY_DOWN = TY + 1
        //TY_UP = TY - 1
        
        //if (TY_UP >= 0)
        //    CAN_MOVE_UP = TRUE
        //if (TY_DOWN < 40)
        //    CAN_MOVE_DOWN  = TRUE

        if (TX == LX) { 
            move_x[0] = "";
            if (TY < LY) {
                move_y[0] = "E";
            } else {
                move_y[0] = "W";
            }
        }

        if (TY == LY) { 
            move_y[0] = "";
            if (TX < LX) {
                move_x[0] = "N";
            } else {
                move_x[0] = "S";           }
        }
        
        printf("%c%c\n", move_x[0], move_y[0]); // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
