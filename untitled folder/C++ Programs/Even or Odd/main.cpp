#include <iostream>

int main()
{   
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    number % 2 == 1 ? std::cout << number << " is Odd." : std::cout << number << " is Even" << std::endl;

    return 0;
}