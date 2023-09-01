#include <stdio.h>


int check_init()
{
    int in_mission;  /* 1 for true */
    printf("Are we in mission? (1 for true, 0 for false)  ");
    scanf("%d", &in_mission);  /* Use & before in_mission to store the input value */

    return in_mission;
}


int main()
{
    int in_mission = check_init();

    if (in_mission == 1) {printf("started! \n");}
    else {return 0;}

    printf("ended!");
    return 0;
}
