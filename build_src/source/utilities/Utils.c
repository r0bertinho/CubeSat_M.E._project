#include <stdio.h>
#include <unistd.h>
#include "Info.h"
#include "Numbers.h"
#include "Base.h"


void m_in_U () // Initialize CubeSat hardware and sensors
{
    // Pick structure from Base.h
    struct inutilizeds inut;

 	// Main loop for CubeSat operations
    double temperature = readTemperatureSensor();
    double pressure = readPressureSensor();

    // Process sensor data and make decisions 
    TODO Implement decision-making logic here */
    switch (temperature) { // Decision making for temperature

        case (temperature > THRESHOLD_TEMPERATURE):
            printf("Temperature is too high. Taking corrective action...\n");
            inut.inut_n1 = 0;
            break;

        default:
            inut.inut_n1 = 1;

    } switch (pressure) { // Decision making for pressure
    
        case (pressure < THRESHOLD_PRESSURE):
            printf("Low pressure detected. Initiating safety protocols...\n");
            inut.inutn2 = 0;
            break;

        default:
            inut.inut_n2 = 1;
    }
}
