#include <stdio.h>
#include <unistd.h>
#include "Shearer.h"


typedef struct {
    /* Here we'll put the binary variables
    0 for false, 1 for true */
	int receiving_message;
	int message_ready;
	int is_sending;
} Messages;


/* Here will go the function to send a message */
int send_message ()
{
    return 0;
}


void communicateWithSatellite ()
{
    /* Start by here! Put things like variables, paths, etc... */
    printf("Communicating with satellite...\n");
    printf("Message received from satellite: Hello, Earth!\n");
}


int m_in_SnR ()    // Here will go the main tasks
{
    return 0;
}


/* Main for this file */
void m_Sender_n_receiver ()
{
    while (in_mission == 1) {
        usleep(SLEEP_INTERVAL_SECONDS_U)
    }
}
