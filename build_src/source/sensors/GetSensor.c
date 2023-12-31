#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <stdbool.h>
#include "Mains.h"
#include "Sensors.h"
#include "Communicate.h"
#include "Comm.h"
#include "Base.h"

/* Define sensor and component interfaces */
typedef struct {
	float temperature;
	float humidity;
	float pressure;
} EnvironmentalSensor;
typedef struct {
	float voltage;
	float current;
	float power;
} PowerSensor;
typedef struct {
	bool cameraEnabled;
	bool thrustersEnabled;
	bool communicationEnabled;
} ComponentControl;


void readSensors (EnvironmentalSensor *envSensor, PowerSensor *powerSensor)
{
	/* Reading data from environmental and power sensors 
	!(note that those are hipotethical numbers, sir!) */
	envSensor->temperature = 25.0;
	envSensor->humidity = 50.0;
	envSensor->pressure = 1013.25;
	powerSensor->voltage = 3.3;
	powerSensor->current = 0.5;
	powerSensor->power = powerSensor->voltage * powerSensor->current;
}


void controlComponents (ComponentControl *components)
{
	/* Enabling/disabling CubeSat components */
	components->cameraEnabled = true;
	components->thrustersEnabled = false;
	components->communicationEnabled = true;
}

void m_n_GetSensor ()
{
	// Pick structure from Base.h
    struct inutilizeds inut;

 	/* Initialize sensor and component data structures */
  	EnvironmentalSensor envSensor;
  	PowerSensor powerSensor;
 	ComponentControl components;

	/* Read sensor data */
	readSensors(&envSensor, &powerSensor);

	/* Control CubeSat components based on sensor data */
	switch (envSensor.temperature) {

		case (envSensor.temperature > 30.0) :
			components.cameraEnabled = false;
			inut.inut_n3 = 0;
			break;

		default :
			components.cameraEnabled = true;
			inut.inut_n3 = 1;
	}

	/* Send control commands to CubeSat components */
	controlComponents(&components);

   	/* Print sensor and component data */
	printf("Temperature: %.2f°C\n", envSensor.temperature);
	printf("Humidity: %.2f%%\n", envSensor.humidity);
	printf("Pressure: %.2f hPa\n", envSensor.pressure);
	printf("Voltage: %.2f V\n", powerSensor.voltage);
 	printf("Current: %.2f A\n", powerSensor.current);
 	printf("Power: %.2f W\n", powerSensor.power);

  	/* Delay between sensor readings and component control */
	usleep(SLEEP_INTERVAL_SECONDS_U);
}
