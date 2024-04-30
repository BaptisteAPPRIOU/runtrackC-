#include <iostream>
#include <string>

int main() {
    int chiffre, tampon;
    int compteur = 0;
    std::string number;
    std::cout << "Enter a number: ";
    std::cin >> chiffre;
    number = std::to_string(chiffre);
    for (int i = number.length() - 1; i >= 0; i--) {
        tampon = number[i] - '0'; // Convert char to int
        compteur += tampon * tampon * tampon; // Calculate the sum of cubes
    }
    if (compteur == chiffre) {
        std::cout << "The number is an Armstrong number." << std::endl;
    } else {
        std::cout << "The number is not an Armstrong number." << std::endl;
    }
}
