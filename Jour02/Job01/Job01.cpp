#include <iostream>

int main() {
    int number;
    do {
        std::cout << "Enter a number >0: ";
        std::cin >> number;
    } while (number > 0);
    return 0;
}