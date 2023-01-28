#include <iostream>

// Defining the levels
int level = 5;
int Fish = 5;
int Squid = 15;
int Eel = 40;
int Octopus = 85;
int Shark = 150;
int BOSS = 999;
int userChoice;

void menu()
{
    std::cout << "You are currently at level " << level << "." << std::endl;
    std::cout << "Options to kill: (Fish Lev. " << Fish << "), (Squid: Lev. " << Squid << "), (Eel: Lev. " << Eel << "), " <<
    "(Octopus: Lev. " << Octopus << "), " << "(Shark Lev. " << Shark << "), " << "(BOSS: Lev. " << BOSS << ")" << std::endl;
    std::cin >> userChoice;
}

int main()
{   
    menu();

    if (const char * userChoice = "Fish") {
        level += Fish;
    }

    if (const char * userChoice = "Squid") {
        level += Squid;    
    }

    else if (const char * userChoice = "Eel") {
        level += Eel;
    }

    else if (const char * userChoice = "Octopus") {
        level += Octopus;
    }

    else if (const char * userChoice = "Shark") {
        level += Shark;
    }

    if 

}
