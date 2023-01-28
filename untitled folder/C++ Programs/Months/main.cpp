#include <iostream>

int main()
{
    int month;
    std::cout << "Enter month of the year (1 - 12): " << std::endl;
    std::cin >> month;

    switch(month) {
        case 1:
        std::cout << "It's January" << std::endl;
        break;

        case 2:
        std::cout << "It's February" << std::endl;

        case 3:
        std::cout << "It's March" << std::endl;

        case 4:
        std::cout << "It's April" << std::endl;
        break;

        case 5:
        std::cout << "It's May" << std::endl;
        break;

        case 6:
        std::cout << "It's June" << std::endl;
        break;

        case 7:
        std::cout << "It's July" << std::endl;
        break;

        case 8:
        std::cout << "It's August" << std::endl;
        break;

        case 9:
        std::cout << "It's September" << std::endl;
        break;

        case 10:
        std::cout << "It's October" << std::endl;
        break;

        case 11:
        std::cout << "It's November" << std::endl;
        break;

        case 12:
        std::cout << "It's December" << std::endl;
        break;

        default:
        std::cout << "Please enter numbers from (1 - 12)." << std::endl;
    }
}