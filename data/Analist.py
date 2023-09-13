# Importing just what is needed to run the code
from time import sleep
from subprocess import check_output
from os.path import join
from os import getcwd

# Setting basis
Dir = getcwd()
Path_to_C_script = join(Dir, 'source/MainSystem.c') # Path to the main code
Path_to_Shearer = join(Dir, 'source/utilities/Shearer.h') # Path to the shearer
Path_to_Get_Sensor = join(Dir, 'source/sensors/GetSensors.c') # Path to the receptor
Path_to_S_and_R = join(Dir, 'source/communication/Sender_and_Receiver.c') # Path to the receptor

# Getting information from Shearer.h
Run = int(check_output(["in_mission", Path_to_C_script], universal_newlines=True))


#Here will go the data analisys and generating a file with it
def analise_data(Fnum):
    
    # Opening the file of data
    open("data" + Fnum + ".txt", "x")
    
    with open("data" + Fnum + ".txt", "w") as Df:
    Df.write(
        # Here will go the data analisys
        

        )
    Df.close() # Closing the file


# Loop(put here all of the data analisys)
while Run == 1:

    # Setting variables
    Signal = False
    Time_to_wait = 5  # in seconds 1h = 3600

    # Pausing the code before redoing the loop
    sleep(Time_to_wait)

    # Put here something to know the code ended or make the loop redo some times
    


# Here we will export the finished product for the Shearer.h

