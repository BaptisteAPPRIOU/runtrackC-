#include <iostream>
#include <string>

int main() {
    int T[10];
    int cpt = 0;
    for (int i = 0; i < 10; i++) {
        std::cout << "Entrez un entier : ";
        std::cin >> T[i];
    }
    for (int i = 0; i < 10; i++) {
        if (T[i] >= 5) {
            cpt++;
        }
    }
    std::cout << "Il y a " << cpt << " entiers supérieurs ou égaux à 5." << std::endl;
    return 0;
}