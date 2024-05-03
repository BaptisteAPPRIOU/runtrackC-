#include <iostream>

int main() {
    int tab[16] = {1, 2, 3, 4, 5, 6, 7, 16, 8, 9, 10, 11, 12, 13, 14, 15};
    int max = 0;
    for (int i = 0; i < 16; i++) {
        int& ref = tab[i];
        if (ref > max) {
            max = ref;
        }
    }
    std::cout << "La valeur maximale du tableau est : " << max << std::endl;
}