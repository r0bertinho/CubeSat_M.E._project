#include <stdio.h>
#include <unistd.h>
#include "Info.h"
#include "Numbers.h"
#include "Base.h"


void m_in_U () // Initialize CubeSat hardware and sensors
{
 	// Main loop for CubeSat operations
    double temperature = readTemperatureSensor();
    double pressure = readPressureSensor();

    // Process sensor data and make decisions 
    TODO Implement decision-making logic here */
    switch (temperature) { // Decision making for temperature

        case (temperature > THRESHOLD_TEMPERATURE):
            printf("Temperature is too high. Taking corrective action...\n");
            break;

        default:
            break;

    } switch (pressure) { // Decision making for pressure
    
        case (pressure < THRESHOLD_PRESSURE):
            printf("Low pressure detected. Initiating safety protocols...\n");
            break;

        default:
            break;
    }
}
