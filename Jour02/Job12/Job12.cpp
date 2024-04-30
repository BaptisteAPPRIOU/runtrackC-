#include <iostream>
#include <cmath>

int main() {
    int i,n;
    float resultat = 0;
    std::cout << "Entrez un nombre : ";
    std::cin >> n;
    for (i = 1; i <= n; i++) {
        resultat = resultat + 1.0/i;
    }
    std::cout << "La somme des premiers harmoniques jusqu'à " << n << " est : " << resultat << std::endl;
}