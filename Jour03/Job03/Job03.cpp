#include <iostream>
#include <string>

int main() {
    std::string chaine,chaine2;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);
    std::cout << "Entrez une deuxieme chaine de caracteres : ";
    std::getline(std::cin, chaine2);
    if (chaine == chaine2) {
        std::cout << "Les deux chaines sont identiques." << std::endl;
        return 0;
    } else {
        std::cout << "Les deux chaines sont differentes." << std::endl;
        return 1;
    }
}