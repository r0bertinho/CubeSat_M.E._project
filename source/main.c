#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "Shearer.h"


int check_init ()	// Check if program will be initated
{
	int in_mission;
    printf("Are we in mission?\n(1 for true, 0 for false, any other is 0)  ");
    scanf("%d", &in_mission);    // Storing the number given

    switch (in_mission) {
        /* If onoff = 1 */
        case 1:
            printf("\nAssigned...");
            break;
        
        /* To impede the program from
        running any do {} while */
        case 0:
            printf("placeholder");
            printf("\nEnding...");
            sleep(2);
            abort();
            break;
        default:
            abort();
            break;
    }
	
    printf("What will be the sleep time?");
    scanf("%lf", &SLEEP_INTERVAL_SECONDS_U);
    return in_mission;
}


void information_base ()	// Database for main ()
{
    /*
    ! Variables:
    Cs = Cruise Speed;
    A = Height; */
    &Cs = 0;
    &A = 0;
}


int main (void)	// Main program where the code will be
{
	int in_mission;
	
    while (&in_mission == 1) {    // Main code goes here
        /* Defining variables */
        int temperature;
    
        /* What will be runned */
        printf("started! \n");
        
        usleep(&SLEEP_INTERVAL_SECONDS_U);
    }
    printf("ended!");    // Returning false or ending the program
    return 0;    // In case check_init() isn't runned or the program is terminated
}
