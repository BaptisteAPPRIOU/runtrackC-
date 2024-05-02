#include <iostream>
#include <string>

int main() {
    std::string chaine;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);
    if (chaine.length() > 5) {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else if (chaine[2] != 'h') {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else if (chaine[0] < '0' || chaine[0] > '2') {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else if (chaine[1] < '0' || chaine[1] > '9') {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else if (chaine[3] < '0' || chaine[3] > '5') {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else if (chaine[4] < '0' || chaine[4] > '9') {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else if (chaine[0] == '2' && chaine[1] > '3') {
        std::cout << "L'heure entrée n'est pas valide." << std::endl;
    } else {
        std::cout << "L'heure entrée est valide." << std::endl;
    }
    return 0;
}