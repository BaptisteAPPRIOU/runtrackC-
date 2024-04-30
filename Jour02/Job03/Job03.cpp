#include <iostream>

int main() {
    int n,somme,cpt;
    somme,cpt = 0;
    do {
        std::cout << "Enter a number: ";
        std::cin >> n;
        somme += n;

    } while (somme < 100);
    somme = 0;
    while (cpt < 10)
    {
        std::cout << "Enter a number: ";
        std::cin >> n;
        somme += n;
        cpt++;
    }
    return 0;
}