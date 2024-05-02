#include <iostream>
#include <string>

int main() {
    std::string chaine;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);
    std::string tab[chaine.length()+1];
    for (int i = 0; i < chaine.length(); i++) {
        tab[i] = chaine[i];
        // if (i == chaine.length() - 1) {
        //     tab[i] = '\0';
        // }
    }
    tab[chaine.length()] = '\0';
    for (int i = 0; i < chaine.length(); i++) {
        std::cout << tab[i];
    }
    return 0;
}