#include <iostream>

int main() {
    int resultat,i,n;
    resultat = 1;
    std::cout << "Entrez un nombre : ";
    std::cin >> n;
    for (i = 1; i <= n; i++) {
        resultat = resultat * i;
    }
    std::cout << "La factorielle de " << n << " est : " << resultat << std::endl;
}