#include <iostream>

int main()
{   
    double originalPrice;
    double discount;
    double discountSimplified;
    double finalPrice;

    std::cout << "Enter the price of the product: ";
    std::cin >> originalPrice;

    std::cout << "Enter the percent off of the Product (Please don't include the '%' symbol): ";
    std::cin >> discount;

    discountSimplified = originalPrice * (discount / 100);
    finalPrice = originalPrice - discountSimplified;

    std::cout << "The discount for your product is: " << discountSimplified << std::endl;
    std::cout << "The final price of your product is: " << finalPrice << std::endl;

    return 0;
}