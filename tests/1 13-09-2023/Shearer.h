/* 
- This file uses  Tabs / 4 / No wrap
- This file is for making a bridge for the other files
- Feel free to get here every variable you think is important
- Don't forget to put only important things and always revise this file rhamon!
*/
#ifndef Shearer_h
#define Shearer_h

		/* Put variables got from MainSystem.c */
extern int in_mission;

		/* Put variables got from GetSensor.c */
extern bool communicationEnabled;
extern bool thrustersEnabled;
extern bool cameraEnabled;
extern float temperature;
extern float humidity;
extern float pressure;
extern float voltage;
extern float current;
extern float power;

		/* Put variables got from Sender_and_receiver.c */
extern int receiving_message;
extern int message_ready;
extern int is_sending;

		/* Define functions here to be used in other files */


		/* Here we'll define variables of this file */
extern int SLEEP_INTERVAL_SECONDS_U;
extern int SLEEP_INTERVAL_SECONDS;

#endif
