#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "Info.h"
#include "Base.h"


int check_init () // Check if program will be initated
{
    printf("Are we in mission?\n(1 for true, 0 for false)  ");
    // Storing the number given onto the variable from "Base.h"
    scanf("%d", &in_mission);

    switch (in_mission) {
        case 1:
            printf("\nAssigned...\n");
            break;
            
        // To impede the program from running any do{}while();
        default:
            try {
                exit(1);
            } catch (EXIT_FAILURE) {
                abort();
            }
            break;
    }
	
    printf("What will be the sleep time?");
    scanf("%lf", &SLEEP_INTERVAL_SECONDS_U);

    switch (SLEEP_INTERVAL_SECONDS_U) {

        case &SLEEP_INTERVAL_SECONDS_U < 0: //! I don't know how to do this without an error
            printf("Assigning default value...\n");
            &SLEEP_INTERVAL_SECONDS_U = 1.0; //TODO: Set to 0.2 seconds
            break;

        default:
            try {
                exit(1);
            } catch (EXIT_FAILURE) {
                abort();
            }
            break;
    }

    return 0;
}


void information_base () // Database for main ()
{
    /* Variables:
    Cs = Cruise Speed;
    A = Height; */
    &Cs = 0;
    &A = 0;
}


int main (int argc, char *argv[])	// Main program where the code will be
{
    while (&in_mission == 1) { // Main code goes here
        // Defining variables
        int temperature;
    
        printf("started! \n");
        
        usleep(&SLEEP_INTERVAL_SECONDS_U);
    }

    printf("ended!"); // Returning false or ending the program
    return 0; // In case check_init() isn't runned or the program is terminated
}
