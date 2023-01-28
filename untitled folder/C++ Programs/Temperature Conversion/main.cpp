#include <iostream>
#include "COLOR.CPP"
int main()
{   
    double temp;
    char unit;

    std::cout << BOLDWHITE << "***** Temperature Conversion *****" << RESET << std::endl;
    std::cout << MAGENTA << "A: Farenheit to Celcius" << std::endl;
    std::cout << "B: Celcius to Farenheit" << RESET << std::endl;
    std::cout << BOLDCYAN << "What unit would you like to convert to: ";
    std::cin >> unit;
    std::cout << RESET << std::endl;

    if (unit == 'A' || 'a') {
        std::cout << BOLDBLUE << "Enter temperature in Farenheit: " << std::endl;
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celcius: " << temp << RESET << std::endl;
    }

    else if (unit == 'B' ||'b') {
        std::cout << BOLDYELLOW << "Enter temperature in Celcius: " << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature in Farenheit is: " << temp << RESET << std::endl;
    }


    std::cout << BOLDWHITE << "************************************" << RESET << std::endl;
    
    return 0;
} 