#include <iostream>

std::string name;
int age;

int main() 
{
    std::cout << "What is your name: " << std::endl;
    std::cin >> name;

    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    std::cout << "Your name is " << name << " and you are " << age << " years old."<< std::endl;
    
    return 0;
}