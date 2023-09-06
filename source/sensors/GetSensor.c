#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "Shearer.h"

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


void readSensors(EnvironmentalSensor *envSensor, PowerSensor *powerSensor) {
            /* Simulate reading data from environmental and power sensors */
    envSensor->temperature = 25.0;
    envSensor->humidity = 50.0;
    envSensor->pressure = 1013.25;
    powerSensor->voltage = 3.3;
    powerSensor->current = 0.5;
    powerSensor->power = powerSensor->voltage * powerSensor->current;
}


void controlComponents(ComponentControl *components) {
            /* Simulate enabling/disabling CubeSat components */
    components->cameraEnabled = true;
    components->thrustersEnabled = false;
    components->communicationEnabled = true;
}

void m_n_GetSensor() {
            /* Initialize sensor and component data structures */
    EnvironmentalSensor envSensor;
    PowerSensor powerSensor;
    ComponentControl components;

            /* Main loop */
    while (1) {
                /* Read sensor data */
        readSensors(&envSensor, &powerSensor);

                /* Control CubeSat components based on sensor data */
        if (envSensor.temperature > 30.0) {
            components.cameraEnabled = false;
        } else {
            components.cameraEnabled = true;
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
        usleep(500000);        /* Sleep for 0.5 second */
    }

    return 0;
}
