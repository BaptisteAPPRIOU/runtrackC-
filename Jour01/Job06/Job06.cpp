#include <iostream>

int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    for (int i = 1; i < 11; i++) {
        std::cout << a << " * " << i << " = " << a*i << std::endl;
    }
}