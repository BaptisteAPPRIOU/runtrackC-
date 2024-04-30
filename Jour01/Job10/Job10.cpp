#include <iostream>

int main() {
    float prixht,kilo,tva,prixttc;
    std::cout << "Entrer le prix hors taxe des carottes: ";
    std::cin >> prixht;
    std::cout << "Entrer le nombre de kilos achetés: ";
    std::cin >> kilo;
    std::cout << "Entrer le taux de TVA: ";
    std::cin >> tva;
    prixttc = (prixht * kilo);
    prixttc = prixttc + (prixttc * tva / 100);
    std::cout << "Le prix total des carottes est de: " << prixttc << std::endl;
}