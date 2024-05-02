#include <iostream>
#include <string>
#include <cmath>
#include <random>

int main() {
    int chances = 7;
    int nombreMystere = rand() % 100 + 1;
    int proposition = 0;
    std::cout << "Devinez le nombre mystere entre 1 et 100." << std::endl;
    while (proposition != nombreMystere && chances > 0) {
        std::cout << "Il vous reste " << chances << " chances." << std::endl;
        std::cout << "Entrez un nombre : ";
        std::cin >> proposition;
        if (proposition < nombreMystere) {
            std::cout << "C'est plus !" << std::endl;
        } else if (proposition > nombreMystere) {
            std::cout << "C'est moins !" << std::endl;
        }
        chances--;
    }
    if (proposition == nombreMystere) {
        std::cout << "Bravo, vous avez trouve le nombre mystere !" << std::endl;
    } else {
        std::cout << "Perdu, le nombre mystere etait " << nombreMystere << "." << std::endl;
    }
}