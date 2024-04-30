#include <iostream>

int main() {
    int a = 1, b = 100;
    int n;
    std::cout << "Entrez un nombre: ";
    std::cin >> n;
    if (n >= a && n <= b) {
        std::cout << "GAGNE" << std::endl;
    }
    else {
        std::cout << "PERDU" << std::endl;
    }
}