#include <iostream>

int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        int& ref = tab[i];
        std::cout << "La valeur de la case " << i << " est : " << ref << std::endl;
    }
}