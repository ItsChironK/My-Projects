#include <iostream>

int main() 
{
    int questions;
    std::cout << "How many questions were on Test/Quiz: ";
    std::cin >> questions;

    int correctQuestions;
    std::cout << "How many questions did you get correct: ";
    std::cin >> correctQuestions;

    double score = correctQuestions/(double)questions * 100;
    std::cout << "Score: " << score << "%" << std::endl;
}