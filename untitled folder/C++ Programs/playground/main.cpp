#include <iostream>
#include <random>
#include <string>

// Function to generate a random password of a given length
std::string generatePassword(int length) {
  // Seed the random number generator with the current time
  std::srand(std::time(nullptr));

  std::string password;

  // Generate a random password by selecting random characters from a set of allowed characters
  const std::string allowedCharacters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < length; ++i) {
    password += allowedCharacters[std::rand() % allowedCharacters.size()];
  }

  return password;
}

int main() {
  // Set the desired password length
  const int passwordLength = 8;

  // Generate and print the password
  std::cout << "Your random password is: " << generatePassword(passwordLength) << std::endl;

  return 0;
}
