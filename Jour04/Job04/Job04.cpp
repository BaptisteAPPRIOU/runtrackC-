#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    std::cout << "La valeur de 'a' est : " << a << std::endl;
    std::cout << "La valeur de 'b' est : " << b << std::endl;
    std::cout << "La valeur de 'c' est : " << c << std::endl;
    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;
    *p1 = 4;
    *p2 = 5;
    *p3 = 6;
    std::cout << "La nouvelle valeur de 'a' est : " << a << std::endl;
    std::cout << "La nouvelle valeur de 'b' est : " << b << std::endl;
    std::cout << "La nouvelle valeur de 'c' est : " << c << std::endl;
}