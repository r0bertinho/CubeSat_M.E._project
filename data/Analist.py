# Importing just what is needed to run the code (2 per line)
from time import sleep; from shutil import move, delete
from subprocess import check_output; from os.path import join
from os import getcwd; from datetime import datetime

# Setting basis
Dir = getcwd()
Path_to_C_script = join(Dir, 'source/main.c') # Path to the main code
Path_to_Shearer = join(Dir, 'source/utilities/Shearer.h') # Path to the shearer
Path_to_Get_Sensor = join(Dir, 'source/sensors/GetSensors.c') # Path to the receptor
Path_to_S_and_R = join(Dir, 'source/communication/Sender_and_Receiver.c') # Path to the receptor

# Getting information from Shearer.h
RunIN = int(check_output(["in_mission", Path_to_C_script], universal_newlines=True))


#Here will go the data analisys and generating a file with it
class analise_data:
    
    # Opening the file of data
    def create_file(Fnum):
        open("data_" + Fnum + ".json", "x")
    
    
    def write_data(time, extra, Fnum):
        with open("data_" + Fnum + ".json", "w") as Df:
            Df.write(
            # Here will go the data analisys
            time,
            extra
            )
            Df.close() # Closing the file


# Setting variables before the loop
NumOfFiles = 1

# Loop(put here all of the data analisys)
while RunIN == 1:

    # Getting the date and time
    minutes = datetime.now().strftime("%M")
    hour = datetime.now().strftime("%H")
    day = datetime.now().strftime("%d")
    month = datetime.now().strftime("%m")
    year = datetime.now().strftime("%Y")

    # Analysing the data
    analise_data.create_file(str(NumOfFiles))
    analise_data.write_data(
        time=(str(minutes) + " " 
        + str(hour) + " " + str(day) + "-" 
        + str(month) + "-" + str(year)
    ))

    # Setting variables
    Time_to_wait = 5  # in seconds 1h = 3600

    # Moving the file to the folder "analysed"
    move("data_" + str(NumOfFiles) + ".txt", "analysed")

    # Pausing the code before redoing the loop
    sleep(Time_to_wait)

    # Put here something to know the code ended or make the loop redo some times
    RunIN = int(check_output(["in_mission", Path_to_C_script], universal_newlines=True))

    # Deleting the file to save SPACE before replacing the analisys number
    delete("data_" + str(NumOfFiles) + ".txt")
    NumOfFiles += 1
