#include <iostream>
#include <string>

int sommeEntiers(int tab[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 == 0) {
            somme += tab[i];
        }
    }
    return somme;
}

int main() {
    int tableau[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "La somme des entiers pairs du tableau est " << sommeEntiers(tableau, 10) << std::endl;
}