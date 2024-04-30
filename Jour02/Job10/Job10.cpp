#include <iostream>
#include <cmath>

int main() {
    int n;
    do {
        std::cout << "Entrez un nombre entier positif : ";
        std::cin >> n;
        if (n < 0 ) {
            std::cout << "Le nombre entré n'est pas positif !!!" << std::endl;
        }
        else if (n > 0){
            std::cout << "La racine du nombre entré est : " << std::sqrt(n) << std::endl;
        }
    } while (n != 0);
}