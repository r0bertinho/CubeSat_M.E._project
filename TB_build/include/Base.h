#include <stdbool.h>

#ifndef Base_h
#define Base_h

// Zero means the value is defined in another file, with it after the "; //"
extern int in_mission = 0; // main.c
extern int SLEEP_INTERVAL_SECONDS_U = 0; // main.c

extern struct inutilizeds {
    int inut_n1; // For temperature
    int inut_n2; // For pressure
    int inut_n3; // For envsensor
};

#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) {__HadError=true;goto ExitJmp;}

#endif
