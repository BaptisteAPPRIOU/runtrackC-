#include <iostream>
#include <string>

char compare(std::string chaine, std::string chaine2) {
    if (chaine2.find(chaine) != std::string::npos) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    std::string chaine,chaine2;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);
    std::cout << "Entrez une deuxieme chaine de caracteres : ";
    std::getline(std::cin, chaine2);
    if (compare(chaine, chaine2) == 0) {
        std::cout << "La première chaine est incluse dans la deuxième." << std::endl;
    } else {
        std::cout << "La première chaine n'est pas incluse dans la deuxième." << std::endl;
    }
}

