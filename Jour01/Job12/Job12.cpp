#include <iostream>

int main() {
    int somme,moyenne = 0;
    std::cout << "Enter a number: ";
    std::cin >> moyenne;
    somme += moyenne;
    std::cout << "Enter a different second number: ";
    std::cin >> moyenne;
    somme += moyenne;
    std::cout << "Enter a different third number: ";
    std::cin >> moyenne;
    somme += moyenne;
    std::cout << "Enter a different fourth number: ";
    std::cin >> moyenne;
    somme += moyenne;
    std::cout << "Enter a different fifth number: ";
    std::cin >> moyenne;
    somme += moyenne;
    moyenne = somme / 5;
    std::cout << "The average of the five numbers is: " << moyenne << std::endl;
}