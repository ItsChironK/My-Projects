level = 5
Fish = 5
Squid = 15
Eel = 40
Octopus = 85
Shark = 150
Boss = 999
beaten = None
print("You are level", str(level))
print("Options to kill: Fish - (", Fish, ") Squid - (", Squid, "), Eel - (", Eel, ") Octopus - (", Octopus, ") Shark - (", Shark, ") BOSS - (", Boss, ")")

while True:
    userChoice = input("Type your option here: ")

    if userChoice == "Fish":
        userChoice = Fish

    elif userChoice == "Squid":
        userChoice = Squid

    elif userChoice == "Eel":
        userChoice = Eel

    elif userChoice == "Octopus":
        userChoice = Octopus

    elif userChoice == "Shark":
        userChoice = Shark

    elif userChoice == "Boss":
        userChoice = Boss
        if int(level) < userChoice:
            print("You have tried to defeat and enemey higher level than you!")
            break
        elif int(level) >= userChoice:
            continueNow = print("Good job! You've won the Game!\nContinue? (y = yes || n = no")
            if continueNow == 'n':
                break

    if beaten:
        print('You have won the game!')
        break
    

    if int(level) >= userChoice:
        level += userChoice
        print("You are level", str(level))
        print("Options to kill: Fish - (", Fish, ") Squid - (", Squid, "), Eel - (", Eel, ") Octopus - (", Octopus, ") Shark - (", Shark, ") BOSS - (", Boss, ")")

    else:
        print("You died trying to defeat an enemy having a higher level than you!")
        playAgain = input("Play again? (y/n): ")
        if playAgain == "n":
            break
        else:
            print("You are level", str(level))
            print("Options to kill: Fish - (", Fish, ") Squid - (", Squid, "), Eel - (", Eel, ") Octopus - (", Octopus, ") Shark - (", Shark, ") BOSS - (", Boss, ")")