#include "Joueur.hpp"
#include <iostream>

Joueur::Joueur()
{}

void Joueur::init(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Joueur::afficher()
{
    std::cout << "Position du joueur : (" << this->x << ", " << this->y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy)
{
    this->x += dx;
    this->y += dy;
}
Joueur::~Joueur()
{}

int main()
{
    Joueur joueur;
    joueur.init(0, 0);
    joueur.afficher();
    joueur.deplacer(1, 1);
    joueur.afficher();
    joueur.deplacer(2, 2);
    joueur.afficher();
    return 0;
}