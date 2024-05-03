#include <iostream>

int main() {
    int a;
    int* b = &a;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> *b;
    int* tab = new int[*b];
    for (int i = 0; i < *b; i++) {
        std::cout << "Entrez la valeur de la case " << i << " : ";
        std::cin >> tab[i];
    }
    for (int i = 0; i < *b; i++) {
        std::cout << "La valeur de la case " << i << " est : " << tab[i] << std::endl;
    }
}