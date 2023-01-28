import os.path
import sys
import subprocess
import time

def exitProgram():
        exit = input("Would you like to exit this program now? Y = Yes, N = No: ")
        if exit == "Y":
            sys.exit() 

def loadingScreen():
    def progress_bar(iteration, total, prefix='', suffix='', decimals=1, length=50, fill='█'):
        percent = ("{0:." + str(decimals) + "f}").format(100 * (iteration / float(total)))
        filled_length = int(length * iteration // total)
        bar = fill * filled_length + '-' * (length - filled_length)
        print('\r%s |%s| %s%% %s' % (prefix, bar, percent, suffix), end='\r')

        if iteration == total: 
            print()

    total = 100
    for i in range(total + 1):
        progress_bar(i, total, prefix='Progress:', suffix='Complete', length=50)
        time.sleep(0.125)

directory = '/Users/chironk/Desktop/Programming/Python/Python Programs/Data Manipulation/Records/'

while True:
    usrPrompt = print("Would you like to Add, Edit/View, Delete File? ")
    options = ['1. Add', '2. Edit/View', '3. Delete', '4. EXIT PROGRAM']
    for index in options:
        print(index)

    print("------------------------------------------")
    usrChoice = input("Which option would you like to do?\nType Here: ")

    if usrChoice == '1':
        fileName = input("File Name: ")
        fileCreation = os.path.join(directory, fileName) 
        open(fileCreation, "w").close()
        print("You will be proceeded into adding information to your file.")
        loadingScreen()
        information = subprocess.run(["nano", fileCreation])

    elif usrChoice == '2':
        allFiles = print("Here are all of the files:")

        for i in os.listdir(directory):
            if not i.startswith(".") and i.endswith(""):
                print(i)

        whichFile = input("Which file would you like to make changes too?\nType Here: ")
        file = os.path.join(directory, whichFile)
        open(file, "r").close()
        print("You will be procceeded into your file.")
        loadingScreen()
        information = subprocess.run(["nano", file])

        print("------------------------------------------")

    elif usrChoice == '3':
        allFiles = print("Here are all of the files:")

        for i in os.listdir(directory):
            if not i.startswith(".") and i.endswith(""):
                print(i)

        whichFile = input("Which file would you like to remove: ")
        filePath = directory + whichFile
        try:
            os.unlink(filePath)
        except:
            print("Consider retyping the requested file to be deleted as it could not be found.")

    elif usrChoice == '4':
        break
