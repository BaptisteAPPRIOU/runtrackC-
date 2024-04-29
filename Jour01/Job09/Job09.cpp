#include <iostream>

int main() {
    
    int a,b,c;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter a different second number: ";
    std::cin >> b;
    std::cout << "Enter a different third number: ";
    std::cin >> c;
    if (a > b && a > c) {
        std::cout << a << " is the greatest number." << std::endl;
    } else if (b > a && b > c) {
        std::cout << b << " is the greatest number." << std::endl;
    } else {
        std::cout << c << " is the greatest number." << std::endl;
    }
}