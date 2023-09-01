# Importing what is needed to run the code
from time import sleep
import subprocess
import os

# Setting basis
Dir = os.getcwd()
Path_to_Shearer = os.path.join(Dir, 'main/Codes/Shearer.h') # Path to the shearer
Path_to_C_script = os.path.join(Dir, 'main/Codes/MainSystem.c') # Path to the main code
Path_to_S_and_R = os.path.join(Dir, 'main/Codes/Sender_and_Receiver.c') # Path to the receptor

# Getting information from Shearer.h
Run = int(subprocess.check_output(["in_mission", Path_to_C_script], universal_newlines=True))

# Loop
while Run == 1:

    # Setting variables
    Signal = False
    Time_to_wait = 5  # in seconds 1h = 3600

    # Start timer
    sleep(Time_to_wait)

    print("True")
