#include <iostream>

int main() {
    int a,b,tampon;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter a different second number: ";
    std::cin >> b;
    std::cout << "First number is: " << a << std::endl;
    std::cout << "Second number is: " << b << std::endl;
    tampon = a;
    a = b;
    b = tampon;
    std::cout << "First number is now: " << a << std::endl;
    std::cout << "Second number is now: " << b << std::endl;
}