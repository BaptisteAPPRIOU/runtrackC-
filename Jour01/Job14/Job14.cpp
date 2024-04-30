#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a number: ";
    std::string number;
    std::cin >> number;

    std::cout << "Reversed number: ";
    for (int i = number.length() - 1; i >= 0; i--) {
        std::cout << number[i];
    }
    std::cout << std::endl;

    return 0;
}