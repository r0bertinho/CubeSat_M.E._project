# Importing the needed libraries{
import os
import time
from pycubed import cubesat
# }

# Initialize communication with PyCubed board{
cubesat.init()
# }

# Define the mission parameters{
mission_ = os.Mission("C.E.D Miryam Ervilha")

position_ = os.Location(
  lat=37.7749, 
  lon=-122.4194, 
  alt=500
)

velocity_ = os.Velocity(
  x=0, 
  y=0, 
  z=5
)
# }

# Main loop{
while True:
  
    # Read temperature from onboard sensor [
    temperature = cubesat.read_temperature()
    voltage = cubesat.read_voltage()
    # ]
  
    # Print temperature and voltage [
    print(
      f"Temperature: {temperature} °C"
    )
    print(
      f"Voltage: {voltage} V"
    )
    # ]
  
    # Send data to ground station [
    cubesat.radio.send(
      "Temperature: {:.2f} °C, Voltage: {:.2f} V".format(
        temperature, voltage
      )
    )
    # ]
  
    # Wait for a few seconds before reading data again [
    time.sleep(5)
    # ]
# }
