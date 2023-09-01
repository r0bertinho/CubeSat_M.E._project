#include <stdio.h>


int check_init()        /* check if program will be initated */
{
    int in_mission;        /* 1 for true */
    printf("Are we in mission? (1 for true, 0 for false)  ");
    scanf("%d", &in_mission);        /* Use & before in_mission to store the input value */

    if (in_mission == 0) {return in_mission;}
    else if (in_mission == 1) {return in_mission;}

    return 0;
}


int main()
{
    int in_mission = check_init();

    if (in_mission == 1) {printf("started! \n");}
    else if (in_mission == 0) {printf("ok, finishing!"); return 0;}
    else {return 0;}

    printf("ended!");
    return 0;
}
