#include <iostream> // Standard library for C++.
#include <cmath> // Library for Complex Math operations in C++.

int main() 
{
    double a; // Variable
    double b; // Variable
    double c; // Variable

    std::cout << "Enter side A: " << std::endl; // Asks for Side A Input.
    std::cin >> a; // Takes & Stores input for the printed Statement above.

    std::cout << "Enter side B: " << std::endl; // Asks for Side B Input.
    std::cin >> b; // Takes & Stores input for the printed Statement above.

    c = sqrt(pow(a, 2) + pow(b, 2)); // Forumal to find the Side C.

    std::cout << "Side C: " << c << std::endl; // Prints out the Side C Output.

    return 0;
}
