#include "Joueur.hpp"
#include <iostream>
#include <string>

Joueur::Joueur() : x(0), y(0) {}
Joueur::Joueur(int x, int y) : x(x), y(y) {}
Joueur::Joueur(int x, int y, const std::string& nom) : x(x), y(y), nom(nom) {}

void Joueur::afficher()
{
    std::cout << "Position du joueur : (" << this->x << ", " << this->y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy)
{
    this->x += dx;
    this->y += dy;
}

Joueur::~Joueur() {}

int main()
{
    Joueur joueur(0, 0);
    Joueur joueur2(1, 1, "Joueur 2");
    Joueur joueur3(2, 2, "Joueur 3");
    joueur.afficher();
    joueur.deplacer(1, 1);
    joueur.afficher();
    joueur.deplacer(2, 2);
    joueur.afficher();
    joueur2.afficher();
    joueur3.afficher();
    joueur2.deplacer(1, 1);
    joueur3.deplacer(2, 2);
    joueur2.afficher();
    joueur3.afficher();
    return 0;
}