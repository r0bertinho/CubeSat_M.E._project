/* Notes:
- This file uses  Tabs / 4 / No wrap
- Remember to see Blame (in github)
- Try your best to keep the code clean
- Keep it with comments for easy understanding
- Comments are made this way(the slash and star doens't have a space): / *  * /
- First letter of comments needs to have Caps Lock unless it is part of the code or a number
*/
#include <stdio.h>
#include <unistd.h>
#include "Shearer.h"


void check_init()        /* Check if program will be initated */
{
    printf("Are we in mission?\n(1 for true, 0 for false)  ");        /* 1 for true, 0 for false */
    scanf("%d", &in_mission);        /* Storing the number given */
    
    printf("What will be the sleep time?");
    scanf("%lf", &SLEEP_INTERVAL_SECONDS_U);
}

void information_base(double *Cs, double *A)        /* Base de dados do stélite para o main() */
{
    /*        (if the value is equal to 0.0, it will be changed)
        Cs = Cruise Speed;
        A = Altitude;
     */

    Cs = 0;
    A = 0;
}

int main()        /* Main program where the code will be */
{
    int in_mission;

    while (in_mission == 1)        /* Main code goes here */
    {
                /* Defining variables */
        int temperature;
    
                /* What will be runned */
        printf("started! \n");
        
                /* See if the in_mission is still true by getting the value from Shearer.h */
        in_mission = in_mission;
        usleep(SLEEP_INTERVAL_SECONDS_U);
    }

    printf("ended!");        /* Returning false or ending the program */
    return 0;        /* In case check_init() isn't runned or the program is terminated */
}
