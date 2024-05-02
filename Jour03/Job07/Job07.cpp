#include <iostream>
#include <string>

int main() {
    int T[10];
    int tampon,indice;
    for (int i = 0; i < 10; i++) {
        std::cout << "Entrez un entier : ";
        std::cin >> T[i];
    }
    tampon = T[0];
    for (int i = 0; i < 10; i++) {
        if (T[i] > tampon) {
            tampon = T[i];
            indice = i;
        }
    }
    std::cout << "L'indice de l'entier le plus grand est " << indice << std::endl;
    return 0;
}