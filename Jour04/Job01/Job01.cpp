#include <iostream>

int main() {
    int number = 15;
    int* pointer = &number;
    std::cout << "La valeur de 'number' est : " << *pointer << std::endl;
    return 0;
}