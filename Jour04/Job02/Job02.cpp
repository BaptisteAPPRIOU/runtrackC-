#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int* p1 = &a;
    int* p2 = &b;
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    std::cout << "La valeur de 'a' est : " << *p1 << std::endl;
    std::cout << "La valeur de 'b' est : " << *p2 << std::endl;
}