#pragma once
#include <iostream>
#include <string>

class Joueur {
    public:
        Joueur();
        Joueur(int x, int y);
        Joueur(int x, int y, const std::string& nom);
        void afficher();
        void deplacer(int x, int y);
        ~Joueur();
    private:
        int x;
        int y;
        std::string nom;
};