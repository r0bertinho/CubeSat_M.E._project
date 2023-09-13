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
#include <stdlib.h>
#include "Shearer.h"


int check_init () {        /* Check if program will be initated */

	int in_mission;
    printf("Are we in mission?\n(1 for true, 0 for false)  ");        /* 1 for true, 0 for false */
    scanf("%d", &in_mission);        /* Storing the number given */

    if (&in_mission != 1); (&in_mission != 0); {
       		printf ("\nTry again\n");
        	exit(0);
        }
    
    printf("What will be the sleep time?");
    scanf("%lf", &SLEEP_INTERVAL_SECONDS_U);
    return in_mission;
}

void information_base () {        /* Database for main() */
    /*
        Cs = Cruise Speed;
        A = Height;
     */

    &Cs = 0;
    &A = 0;
}

int main () {        /* Main program where the code will be */

	int in_mission;
	
    while (&in_mission == 1) {        /* Main code goes here */
                /* Defining variables */
        int temperature;
    
                /* What will be runned */
        printf("started! \n");
        
        usleep(&SLEEP_INTERVAL_SECONDS_U);
    }
    printf("ended!");        /* Returning false or ending the program */
    return 0;        /* In case check_init() isn't runned or the program is terminated */
}
