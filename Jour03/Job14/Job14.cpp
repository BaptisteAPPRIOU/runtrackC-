#include <iostream>
#include <string>

int main() {
    std::string tab[] = {"radar", "hello", "level", "stats", "world"};
    for (int i = 0; i < 5; i++) {
        std::string mot = tab[i];
        bool palindrome = true;
        for (int j = 0; j < mot.length() / 2; j++) {
            if (mot[j] != mot[mot.length() - j - 1]) {
                palindrome = false;
                break;
            }
        }
        if (palindrome) {
            std::cout << mot << " est un palindrome." << std::endl;
        } else {
            std::cout << mot << " n'est pas un palindrome." << std::endl;
        }
    }
}