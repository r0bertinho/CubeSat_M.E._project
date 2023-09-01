/* Notes:
- Try your best to keep the code clean;
*/
#include <stdio.h>


int check_init()        /* Check if program will be initated */
{
    int in_mission;        /* 1 for true, 0 for false */
    printf("Are we in mission? (1 for true, 0 for false)  ");
    scanf("%d", &in_mission);        /* Storing the number given */

    if (in_mission == 0) {printf("ok, finishing!"); return 0;}        /* if false, terminate */
    else if (in_mission == 1) {return in_mission;}        /* returning true */

    return 0;    /* if the input isn't 1 or 0 */
}


int main()
{
    int in_mission = check_init();        /* sees the result returned by check_init() */

    if (in_mission == 1) {printf("started! \n");}        /* main code goes here, but change it for a loop rhamon! */
    else {return 0;}

    printf("ended!");        /* returning false */
    return 0;        /* in case check_init() isn't started or the program is terminated */
}
