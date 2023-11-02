#include <stdbool.h>

#ifndef Base_h
#define Base_h

// Zero means the value is defined in another file
extern int in_mission = 0; // main.c
extern int SLEEP_INTERVAL_SECONDS_U = 0; // main.c

#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) {__HadError=true;goto ExitJmp;}

#endif
