#include <iostream>
#include <string>

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.456;
    std::string caractere = "La Plateforme";
    std::cout << "La valeur de 'entier' est : " << entier << " à l'adresse : " << &entier << std::endl;
    std::cout << "La valeur de 'flottant' est : " << flottant << " à l'adresse : " << &flottant << std::endl;
    std::cout << "La valeur de 'reel' est : " << reel << " à l'adresse : " << &reel << std::endl;
    std::cout << "La valeur de 'caractere' est : " << caractere << " à l'adresse : " << &caractere << std::endl;
}