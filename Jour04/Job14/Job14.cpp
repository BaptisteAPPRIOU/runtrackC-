#include <iostream>

int main() {
    int x = 0;
    std::cout << "x = " << x << std::endl;
    int& y = x;
    y = 12;
    std::cout << "x = " << x << std::endl;
}