/* Notes:
- This file uses  Tabs / 4 / No wrap
- Remember to see Blame (in github)
- Try your best to keep the code clean
- Keep it with comments for easy understanding
- Comments are made this way(the slash and star doens't have a space): / *  * /
- First letter of comments needs to have Caps Lock unless it is part of the code or a number
*/
#include <stdio.h>
#include <CubeSat_M.E._project/include/Shearer.h>


void check_init(int *in_mission)        /* Check if program will be initated */
{
    printf("Are we in mission? (1 for true, 0 for false)  ");        /* 1 for true, 0 for false */
    scanf("%d", in_mission);        /* Storing the number given */
}

void information_base(float *Cs, float *A)        /* Base de dados do stélite para o main() */
{
    /*        (if the value is equal to 0.0, it will be changed)
        Cs = Cruise Speed;
        A = Altitude;
     */

    Cs = 0.0
    A = 0.0
}

int main()        /* Main program where the code will be */
{
    int in_mission;        /* Calls the variable of in_mission */
    check_init(&in_mission);        /* Sees the result returned by check_init() */

    while (in_mission == 1)        /* Main code goes here */
    {
                /* Defining variables */
        int temperature;
    
                /* What will be runned */
        printf("started! \n");
        
                /* See if the in_mission is still true by getting the value from Shearer.h */
        in_mission = in_mission;
        
    }

    printf("ended!");        /* Returning false or ending the program */
    return 0;        /* In case check_init() isn't runned or the program is terminated */
}
