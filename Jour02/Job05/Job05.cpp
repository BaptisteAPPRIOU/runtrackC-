#include <iostream>

int main() {
    int note;
    do {
        std::cout << "Entrez une note: ";
        std::cin >> note;
        if (note > 10) {
            std::cout << "Validé" << std::endl;
        }
        else if (note < 10) {
            std::cout << "Non validé" << std::endl;
        }
        else {
            std::cout << "Ok" << std::endl;
        }
    } while (note < 0 || note > 20);
}