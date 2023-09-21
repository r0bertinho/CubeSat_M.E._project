/* 
!- This file uses  Tabs / 4 / No wrap
- This file is for making a bridge for the other files
- Feel free to get here every variable you think is important
- Don't forget to put only important things and always revise this file rhamon!
*/
#ifndef Shearer_h
#define Shearer_h

		/* int */
extern int SLEEP_INTERVAL_SECONDS_U;
extern int SLEEP_INTERVAL_SECONDS;

		/* float */
extern float temperature;
extern float humidity;
extern float pressure;
extern float voltage;
extern float current;
extern float power;

		/* bool */
extern bool communicationEnabled;
extern bool thrustersEnabled;
extern bool cameraEnabled;
extern int in_mission;
extern int receiving_message;
extern int message_ready;
extern int is_sending;

		/* functions */
extern int check_init();
extern void send_message();

		/* voids */


#endif
