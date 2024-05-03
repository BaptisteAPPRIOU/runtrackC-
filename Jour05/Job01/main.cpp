// Créer un fichier nommé “Joueur.hpp”, ajouter la déclaration de la classe
// “Joueur” repensant un joueur dans un jeu vidéo. Celui-ci doit pouvoir se
// déplacer. Ajouter les attributs “x” et “y” qui représente le positionnement du
// joueur sur la carte.
// Ajouter des méthodes pour initialiser les valeurs de vos attributs, afficher les
// attributs et déplacer le joueur. Instancier votre classe dans un fichier nommé
// “main.cpp” et simuler quelques mouvements.

#include "Joueur.hpp"
#include <iostream>

Joueur::Joueur(int x, int y)
    : x(x), y(y)
{}
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
    Joueur joueur(0, 0);
    joueur.afficher();
    joueur.deplacer(1, 1);
    joueur.afficher();
    joueur.deplacer(2, 2);
    joueur.afficher();
    return 0;
}