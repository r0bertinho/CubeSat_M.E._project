#include <stdbool.h>

#ifndef Base_h
#define Base_h

#define extern int in_mission;
#define extern int SLEEP_INTERVAL_SECONDS_U;
#define extern int SLEEP_INTERVAL_SECONDS;

#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) {__HadError=true;goto ExitJmp;}

#endif
