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
    } else {
        std::cout << "L'heure entrée est valide." << std::endl;
    }
    return 0;
}