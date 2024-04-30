#include <iostream>
#include <string>

int main() {
    std::string chaine;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);
    std::string resultat;
    for (char c : chaine) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') {
            resultat += c;
        }
    }
    std::cout << "Chaine sans voyelles : " << resultat << std::endl;
    return 0;
}