#include <iostream>

int main() {
    int n;
    std::cout << "Entrez le nombre de termes: ";
    std::cin >> n;
    int premier = 0, deuxieme = 1;
    std::cout << "Fibonacci Series: " << premier << " " << deuxieme << " ";
    for (int i = 3; i <= n; ++i) {
        int prochain = premier + deuxieme;
        std::cout << prochain << " ";
        premier = deuxieme;
        deuxieme = prochain;
    }
    return 0;
}