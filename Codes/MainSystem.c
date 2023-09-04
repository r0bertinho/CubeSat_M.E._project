/* Notes:
- Remember to see Blame (in github)
- Try your best to keep the code clean
- Keep it with comments for easy understanding
- Comments are made this way(the slash and star doens't have a space): / *  * /
- First letter of comments needs to have Caps Lock unless it is part of the code or a number
*/
#include <stdio.h>
#include <Shearer.h>


int check_init()        /* Check if program will be initated */
{
    int in_mission;        /* 1 for true, 0 for false */
    printf("Are we in mission? (1 for true, 0 for false)  ");
    scanf("%d", &in_mission);        /* Storing the number given */

    if (in_mission == 0) {printf("ok, finishing!"); return 0;}        /* If false, terminate */
    else if (in_mission == 1) {return in_mission;}        /* Returning true */

    return 0;    /* If the input isn't 1 or 0 */
}


int main()        /* Main program where the code will be */
{
    int in_mission = check_init();        /* Sees the result returned by check_init() */

    while (in_mission == 1)        /* Main code goes here */
    {
    /* Defining variables */
    int time_loop_wait;
    time_loop_wait = 100;
    
    /* What will be runned */
    printf("started! \n");
    
    /* See if the in_mission is still true by getting the value from Shearer.h */
    

    /* Last loop before running again */
    while (time_loop_wait > 100)
    {
        time_loop_wait--;
    }
    }

    printf("ended!");        /* Returning false */
    return 0;        /* In case check_init() isn't runned or the program is terminated */
}
